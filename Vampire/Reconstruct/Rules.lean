import Vampire.InferenceRule
import Vampire.Reconstruct.Basic
import Vampire.Reconstruct.Rules.Arithmetic
import Vampire.Reconstruct.Rules.Avatar
import Vampire.Reconstruct.Rules.Clause
import Vampire.Reconstruct.Rules.Closure
import Vampire.Reconstruct.Rules.Congruence
import Vampire.Reconstruct.Rules.Clausify
import Vampire.Reconstruct.Rules.Definition
import Vampire.Reconstruct.Rules.Input
import Vampire.Reconstruct.Rules.Normalize
import Vampire.Reconstruct.Rules.Resolution
import Vampire.Reconstruct.Rules.Rewrite
import Vampire.Reconstruct.Rules.Simplify
import Vampire.Reconstruct.Rules.Skolem
import Vampire.Reconstruct.Rules.Splitting
import Vampire.Reconstruct.Rules.Subsumption

namespace Vampire.Reconstruct

open Lean Meta

/--
Justifies a step. Every rule vampire can emit has a case, so a rule added to
the fork will not compile until it is accounted for; the ones with no
implementation yet fall to `unimplemented`, which admits the conclusion.

A rule that introduces a name binds it in its own case, before asking for the
conclusion, since the conclusion is stated in that very name.
-/
def ofRule (step : Step) : ReconstructM Expr :=
  match step.rule with
  -- Implemented.
  | .functionDefinition => Definition.definitionStep step
  | .avatarDefinition => Definition.definitionStep step
  | .avatarComponent => Avatar.component step
  | .avatarContradictionClause => Avatar.contradictionClause step
  | .avatarRefutation => Avatar.refutation step
  | .avatarSplitClause => Avatar.splitClause step
  | .predicateDefinition => Definition.definitionStep step
  | .generalSplittingComponent => Splitting.component step
  | .generalSplitting => Splitting.general step
  | .definitionUnfolding => Definition.definitionUnfolding step
  | .unusedPredicateDefinitionRemoval =>
    Definition.unusedDefinitionRemoval step
  | .skolemize => Skolem.skolemize step
  | .clausify => Clausify.clausify step
  | .input => Input.input step
  | .resolution => Resolution.resolution step
  | .extensionalityResolution => Resolution.resolution step
  -- Forward literal rewriting rewrites a literal with one half of an
  -- equivalence, which is resolving against that half: the half's other
  -- literal is what goes into the conclusion.
  | .forwardLiteralRewriting => Resolution.resolution step
  | .factoring => Resolution.factoring step
  | .unitResultingResolution => Resolution.unitResulting step
  | .equalityResolutionWithDeletion =>
    Resolution.equalityResolutionWithDeletion step
  | .equalityResolution => Resolution.equalityResolutionWithDeletion step
  | .ennf => Normalize.ennf step
  | .nnf => Normalize.nnf step
  | .forwardSubsumptionResolution => Subsumption.subsumptionResolution step
  | .forwardDemodulation => Rewrite.demodulation step
  | .backwardDemodulation => Rewrite.demodulation step
  | .superposition => Rewrite.superposition step
  | .forwardSubsumptionDemodulation => Rewrite.superposition step
  | .backwardSubsumptionResolution => Subsumption.subsumptionResolution step
  | .removeDuplicateLiterals => Clause.literals step
  | .trivialInequalityRemoval => Clause.literals step
  | .reorientEquations => Clause.literals step
  | .polarityFlipping => Clause.polarityFlipping step
  | .flatten => Congruence.restated step
  | .rectify => Congruence.restated step
  | .definitionFolding => Congruence.unfolded step
  | .purePredicateRemoval => Definition.purePredicateRemoval step
  | .reduceFalseTrue => Simplify.reduceFalseTrue step

  -- Not implemented yet.
  | .genericFormulaClauseTransformation => unimplemented step
  | .negatedConjecture => unimplemented step
  | .answerLiteralInjection => unimplemented step
  | .answerLiteralInputSkolemisation => unimplemented step
  | .claimDefinition => unimplemented step
  | .closure => unimplemented step
  | .theoryNormalization => Arithmetic.theoryStep step
  | .alascaIntegerTransformation => Arithmetic.theoryStep step
  | .skolemSymbolIntroduction => unimplemented step
  | .genericFormulaClauseTransformationLast => unimplemented step
  | .genericSimplifyingInference => unimplemented step
  | .reorderLiterals => unimplemented step
  | .subsumptionEqualityResolution => unimplemented step
  | .alascaFwdDemodulation => Arithmetic.theoryStep step
  | .alascaBwdDemodulation => Arithmetic.theoryStep step
  | .backwardSubsumptionDemodulation => unimplemented step
  | .innerRewriting => unimplemented step
  | .condensation => Clause.condensation step
  | .evaluation => Arithmetic.theoryStep step
  | .alascaNormalization => Arithmetic.theoryStep step
  | .alascaAbstraction => Arithmetic.theoryStep step
  | .alascaFloorElimination => Arithmetic.theoryStep step
  | .cancellation => Arithmetic.theoryStep step
  | .interpretedSimplification => Arithmetic.theoryStep step
  | .theoryFlattening => Arithmetic.theoryStep step
  | .termAlgebraDistinctness => unimplemented step
  | .termAlgebraPositiveInjectivitySimplifying => unimplemented step
  | .termAlgebraNegativeInjectivitySimplifying => unimplemented step
  | .globalSubsumption => unimplemented step
  | .distinctEqualityRemoval => unimplemented step
  | .gaussianVariableEliminiation => Arithmetic.theoryStep step
  | .arithmeticSubtermGeneralization => Arithmetic.theoryStep step
  | .answerLiteralRemoval => unimplemented step
  | .answerLiteralJoinWithConstraints => unimplemented step
  | .answerLiteralJoinAsIte => unimplemented step
  | .avatarAssertionReintroduction => unimplemented step
  | .casesSimp => unimplemented step
  | .alascaVirasQe => Arithmetic.theoryStep step
  | .boolSimp => unimplemented step
  | .flexFlexSimplification => unimplemented step
  | .betaEtaNormalization => unimplemented step
  | .notProxyClausificationSimplifying => unimplemented step
  | .andProxyClausificationSimplifying => unimplemented step
  | .orProxyClausificationSimplifying => unimplemented step
  | .impProxyClausificationSimplifying => unimplemented step
  | .iffProxyClausificationSimplifying => unimplemented step
  | .xorProxyClausificationSimplifying => unimplemented step
  | .sigmaProxyClausificationSimplifying => unimplemented step
  | .piProxyClausificationSimplifying => unimplemented step
  | .equalityProxyClausificationSimplifying => unimplemented step
  | .functionDefinitionDemodulation => unimplemented step
  | .genericSimplifyingInferenceLast => unimplemented step
  | .genericGeneratingInference => unimplemented step
  | .constrainedResolution => Arithmetic.theoryStep step
  | .constrainedFactoring => unimplemented step
  | .functionDefinitionRewriting => unimplemented step
  -- Constrained superposition is superposition with the pairs the unifier
  -- could not unify left among the conclusion's literals.
  | .constrainedSuperposition => Rewrite.superposition step
  | .equalityFactoring => Resolution.equalityFactoring step
  | .termAlgebraInjectivityGenerating => unimplemented step
  | .termAlgebraAcyclicity => unimplemented step
  | .foolParamodulation => unimplemented step
  | .inductionHyperresolution => unimplemented step
  | .instantiation => Arithmetic.theoryStep step
  | .alascaFourierMotzkin => Arithmetic.theoryStep step
  | .alascaIntegerFourierMotzkin => Arithmetic.theoryStep step
  | .alascaTermFactoring => Arithmetic.theoryStep step
  | .alascaFloorBounds => Arithmetic.theoryStep step
  | .alascaEqFactoring => Arithmetic.theoryStep step
  | .alascaLiteralFactoring => Arithmetic.theoryStep step
  | .alascaSuperposition => Arithmetic.theoryStep step
  | .alascaCoherence => Arithmetic.theoryStep step
  | .alascaCoherenceNormalization => Arithmetic.theoryStep step
  | .alascaVariableElimination => Arithmetic.theoryStep step
  | .argCong => unimplemented step
  | .injectivity => unimplemented step
  | .primitiveInstantiation => unimplemented step
  | .imitation => unimplemented step
  | .projection => unimplemented step
  | .leibnizElimination => unimplemented step
  | .negativeExtensionality => unimplemented step
  | .positiveExtensionality => unimplemented step
  | .eqToDiseq => unimplemented step
  | .heuristicInstantiation => unimplemented step
  | .notProxyClausification => unimplemented step
  | .andProxyClausification => unimplemented step
  | .orProxyClausification => unimplemented step
  | .impProxyClausification => unimplemented step
  | .iffProxyClausification => unimplemented step
  | .xorProxyClausification => unimplemented step
  | .sigmaProxyClausification => unimplemented step
  | .piProxyClausification => unimplemented step
  | .equalityProxyClausification => unimplemented step
  | .genericGeneratingInferenceLast => unimplemented step
  | .genericNonspecificInference => unimplemented step
  | .hilbertsChoiceInstance => unimplemented step
  | .equalityProxyReplacement => Definition.equalityProxyReplacement step
  | .equalityProxyDefinition => Definition.definitionStep step
  | .equalityProxyAxiom => Definition.equalityProxyAxiom step
  | .alascaIntegralityAxiom => Arithmetic.theoryStep step
  | .predicateDefinitionUnfolding => unimplemented step
  | .predicateDefinitionMerging => unimplemented step
  | .predicateElimination => unimplemented step
  | .inequalitySplitting => Definition.inequalitySplitting step
  | .inequalitySplittingNameIntroduction => Definition.inequalitySplittingName step
  | .distinctnessAxiom => unimplemented step
  | .booleanTermEncoding => unimplemented step
  | .foolElimination => unimplemented step
  | .foolIteDefinition => unimplemented step
  | .foolLetDefinition => unimplemented step
  | .foolFormulaDefinition => unimplemented step
  | .foolMatchDefinition => unimplemented step
  | .colorUnblocking => unimplemented step
  | .satColorElimination => unimplemented step
  | .formulify => unimplemented step
  | .fmbFlattening => unimplemented step
  | .fmbFuncDef => unimplemented step
  | .fmbDefIntro => unimplemented step
  | .modelNotFound => unimplemented step
  | .addSortPredicates => unimplemented step
  | .addSortFunctions => unimplemented step
  | .answerLiteralResolver => unimplemented step
  | .theoryTautologySatConflict => Closure.conflict step
  | .genericAvatarInference => unimplemented step
  | .avatarRefutationSmt => unimplemented step
  | .genericAvatarInferenceLast => unimplemented step
  | .genericNonspecificInferenceLast => unimplemented step
  | .genericTheoryAxiom => unimplemented step
  | .thaCommutativity => Arithmetic.theoryStep step
  | .thaAssociativity => Arithmetic.theoryStep step
  | .thaRightIdentity => Arithmetic.theoryStep step
  | .thaLeftIdentity => Arithmetic.theoryStep step
  | .thaInverseOpOpInverses => Arithmetic.theoryStep step
  | .thaInverseOpUnit => Arithmetic.theoryStep step
  | .thaInverseAssoc => Arithmetic.theoryStep step
  | .thaNonreflex => Arithmetic.theoryStep step
  | .thaTransitivity => Arithmetic.theoryStep step
  | .thaOrderTotality => Arithmetic.theoryStep step
  | .thaOrderMonotonicity => Arithmetic.theoryStep step
  | .thaAlasca => Arithmetic.theoryStep step
  | .thaPlusOneGreater => Arithmetic.theoryStep step
  | .thaOrderPlusOneDichotomy => Arithmetic.theoryStep step
  | .thaMinusMinusX => Arithmetic.theoryStep step
  | .thaTimesZero => Arithmetic.theoryStep step
  | .thaDistributivity => Arithmetic.theoryStep step
  | .thaDivisibility => Arithmetic.theoryStep step
  | .thaModuloMultiply => Arithmetic.theoryStep step
  | .thaModuloPositive => Arithmetic.theoryStep step
  | .thaModuloSmall => Arithmetic.theoryStep step
  | .thaDividesMultiply => Arithmetic.theoryStep step
  | .thaNondividesSkolem => Arithmetic.theoryStep step
  | .thaAbsEquals => Arithmetic.theoryStep step
  | .thaAbsMinusEquals => Arithmetic.theoryStep step
  | .thaQuotientNonZero => Arithmetic.theoryStep step
  | .thaQuotientMultiply => Arithmetic.theoryStep step
  | .thaExtraIntegerOrdering => Arithmetic.theoryStep step
  | .thaFloorSmall => Arithmetic.theoryStep step
  | .thaFloorBig => Arithmetic.theoryStep step
  | .thaCeilingBig => Arithmetic.theoryStep step
  | .thaCeilingSmall => Arithmetic.theoryStep step
  | .thaTrunc1 => unimplemented step
  | .thaTrunc2 => unimplemented step
  | .thaTrunc3 => unimplemented step
  | .thaTrunc4 => unimplemented step
  | .thaArrayExtensionality => Arithmetic.theoryStep step
  | .thaBooleanArrayExtensionality => Arithmetic.theoryStep step
  | .thaBooleanArrayWrite1 => unimplemented step
  | .thaBooleanArrayWrite2 => unimplemented step
  | .thaArrayWrite1 => unimplemented step
  | .thaArrayWrite2 => unimplemented step
  | .termAlgebraAcyclicityAxiom => unimplemented step
  | .termAlgebraDirectSubtermsAxiom => unimplemented step
  | .termAlgebraSubtermsTransitiveAxiom => unimplemented step
  | .termAlgebraDiscriminationAxiom => unimplemented step
  | .termAlgebraDistinctnessAxiom => unimplemented step
  | .termAlgebraExhaustivenessAxiom => unimplemented step
  | .termAlgebraInjectivityAxiom => unimplemented step
  | .foolAxiomTrueNeqFalse => unimplemented step
  | .foolAxiomAllIsTrueOrFalse => unimplemented step
  | .structInductionAxiomOne => unimplemented step
  | .structInductionAxiomTwo => unimplemented step
  | .structInductionAxiomThree => unimplemented step
  | .structInductionAxiomRecursion => unimplemented step
  | .intInfUpInductionAxiom => unimplemented step
  | .intInfDownInductionAxiom => unimplemented step
  | .intFinUpInductionAxiom => unimplemented step
  | .intFinDownInductionAxiom => unimplemented step
  | .intDbUpInductionAxiom => unimplemented step
  | .intDbDownInductionAxiom => unimplemented step
  | .functionalExtensionalityAxiom => unimplemented step

end Vampire.Reconstruct
