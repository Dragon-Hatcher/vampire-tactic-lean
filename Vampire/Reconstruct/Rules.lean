import Vampire.InferenceRule
import Vampire.Reconstruct.Basic
import Vampire.Reconstruct.Rules.Avatar
import Vampire.Reconstruct.Rules.Clause
import Vampire.Reconstruct.Rules.Congruence
import Vampire.Reconstruct.Rules.Clausify
import Vampire.Reconstruct.Rules.Definition
import Vampire.Reconstruct.Rules.Input
import Vampire.Reconstruct.Rules.Normalize
import Vampire.Reconstruct.Rules.Resolution
import Vampire.Reconstruct.Rules.Rewrite
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
  | .purePredicateRemoval => Congruence.weakened step

  -- Not implemented yet.
  | .genericFormulaClauseTransformation => unimplemented step
  | .negatedConjecture => unimplemented step
  | .answerLiteralInjection => unimplemented step
  | .answerLiteralInputSkolemisation => unimplemented step
  | .claimDefinition => unimplemented step
  | .closure => unimplemented step
  | .reduceFalseTrue => unimplemented step
  | .theoryNormalization => unimplemented step
  | .alascaIntegerTransformation => unimplemented step
  | .skolemSymbolIntroduction => unimplemented step
  | .genericFormulaClauseTransformationLast => unimplemented step
  | .genericSimplifyingInference => unimplemented step
  | .reorderLiterals => unimplemented step
  | .subsumptionEqualityResolution => unimplemented step
  | .alascaFwdDemodulation => unimplemented step
  | .alascaBwdDemodulation => unimplemented step
  | .backwardSubsumptionDemodulation => unimplemented step
  | .innerRewriting => unimplemented step
  | .condensation => unimplemented step
  | .evaluation => unimplemented step
  | .alascaNormalization => unimplemented step
  | .alascaAbstraction => unimplemented step
  | .alascaFloorElimination => unimplemented step
  | .cancellation => unimplemented step
  | .interpretedSimplification => unimplemented step
  | .theoryFlattening => unimplemented step
  | .termAlgebraDistinctness => unimplemented step
  | .termAlgebraPositiveInjectivitySimplifying => unimplemented step
  | .termAlgebraNegativeInjectivitySimplifying => unimplemented step
  | .globalSubsumption => unimplemented step
  | .distinctEqualityRemoval => unimplemented step
  | .gaussianVariableEliminiation => unimplemented step
  | .arithmeticSubtermGeneralization => unimplemented step
  | .answerLiteralRemoval => unimplemented step
  | .answerLiteralJoinWithConstraints => unimplemented step
  | .answerLiteralJoinAsIte => unimplemented step
  | .avatarAssertionReintroduction => unimplemented step
  | .casesSimp => unimplemented step
  | .alascaVirasQe => unimplemented step
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
  | .constrainedResolution => unimplemented step
  | .constrainedFactoring => unimplemented step
  | .functionDefinitionRewriting => unimplemented step
  | .constrainedSuperposition => unimplemented step
  | .equalityFactoring => unimplemented step
  | .termAlgebraInjectivityGenerating => unimplemented step
  | .termAlgebraAcyclicity => unimplemented step
  | .foolParamodulation => unimplemented step
  | .inductionHyperresolution => unimplemented step
  | .instantiation => unimplemented step
  | .alascaFourierMotzkin => unimplemented step
  | .alascaIntegerFourierMotzkin => unimplemented step
  | .alascaTermFactoring => unimplemented step
  | .alascaFloorBounds => unimplemented step
  | .alascaEqFactoring => unimplemented step
  | .alascaLiteralFactoring => unimplemented step
  | .alascaSuperposition => unimplemented step
  | .alascaCoherence => unimplemented step
  | .alascaCoherenceNormalization => unimplemented step
  | .alascaVariableElimination => unimplemented step
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
  | .equalityProxyReplacement => unimplemented step
  | .equalityProxyDefinition => unimplemented step
  | .equalityProxyAxiom => unimplemented step
  | .alascaIntegralityAxiom => unimplemented step
  | .predicateDefinitionUnfolding => unimplemented step
  | .predicateDefinitionMerging => unimplemented step
  | .predicateElimination => unimplemented step
  | .inequalitySplitting => unimplemented step
  | .inequalitySplittingNameIntroduction => unimplemented step
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
  | .theoryTautologySatConflict => unimplemented step
  | .genericAvatarInference => unimplemented step
  | .avatarRefutationSmt => unimplemented step
  | .genericAvatarInferenceLast => unimplemented step
  | .genericNonspecificInferenceLast => unimplemented step
  | .genericTheoryAxiom => unimplemented step
  | .thaCommutativity => unimplemented step
  | .thaAssociativity => unimplemented step
  | .thaRightIdentity => unimplemented step
  | .thaLeftIdentity => unimplemented step
  | .thaInverseOpOpInverses => unimplemented step
  | .thaInverseOpUnit => unimplemented step
  | .thaInverseAssoc => unimplemented step
  | .thaNonreflex => unimplemented step
  | .thaTransitivity => unimplemented step
  | .thaOrderTotality => unimplemented step
  | .thaOrderMonotonicity => unimplemented step
  | .thaAlasca => unimplemented step
  | .thaPlusOneGreater => unimplemented step
  | .thaOrderPlusOneDichotomy => unimplemented step
  | .thaMinusMinusX => unimplemented step
  | .thaTimesZero => unimplemented step
  | .thaDistributivity => unimplemented step
  | .thaDivisibility => unimplemented step
  | .thaModuloMultiply => unimplemented step
  | .thaModuloPositive => unimplemented step
  | .thaModuloSmall => unimplemented step
  | .thaDividesMultiply => unimplemented step
  | .thaNondividesSkolem => unimplemented step
  | .thaAbsEquals => unimplemented step
  | .thaAbsMinusEquals => unimplemented step
  | .thaQuotientNonZero => unimplemented step
  | .thaQuotientMultiply => unimplemented step
  | .thaExtraIntegerOrdering => unimplemented step
  | .thaFloorSmall => unimplemented step
  | .thaFloorBig => unimplemented step
  | .thaCeilingBig => unimplemented step
  | .thaCeilingSmall => unimplemented step
  | .thaTrunc1 => unimplemented step
  | .thaTrunc2 => unimplemented step
  | .thaTrunc3 => unimplemented step
  | .thaTrunc4 => unimplemented step
  | .thaArrayExtensionality => unimplemented step
  | .thaBooleanArrayExtensionality => unimplemented step
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
