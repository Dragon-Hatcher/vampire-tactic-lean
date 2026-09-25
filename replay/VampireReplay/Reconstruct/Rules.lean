import VampireReplay.InferenceRule
import VampireReplay.Reconstruct.Basic
import VampireReplay.Reconstruct.Rules.Arithmetic
import VampireReplay.Reconstruct.Rules.Avatar
import VampireReplay.Reconstruct.Rules.Clause
import VampireReplay.Reconstruct.Rules.Closure
import VampireReplay.Reconstruct.Rules.Congruence
import VampireReplay.Reconstruct.Rules.Clausify
import VampireReplay.Reconstruct.Rules.Definition
import VampireReplay.Reconstruct.Rules.Input
import VampireReplay.Reconstruct.Rules.Normalize
import VampireReplay.Reconstruct.Rules.Resolution
import VampireReplay.Reconstruct.Rules.Rewrite
import VampireReplay.Reconstruct.Rules.Simplify
import VampireReplay.Reconstruct.Rules.Skolem
import VampireReplay.Reconstruct.Rules.Splitting
import VampireReplay.Reconstruct.Rules.Subsumption

namespace Vampire.Reconstruct

open Lean Meta

/--
Justifies a step. Every rule vampire can emit has a case, so a rule added to
the fork will not compile until it is accounted for; the ones with no
implementation yet fall to `unimplemented`, which admits the conclusion only
under `+admit`, and the ones that cannot arise to `unreachable`.

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
  | .closure => Congruence.restated step
  | .theoryNormalization => Arithmetic.literalwise step
  | .alascaIntegerTransformation => Arithmetic.theoryStep step
  -- A disequality whose sides unify dropped, the unifier only renaming what
  -- is left; the worker records it as equality resolution at that unifier.
  | .subsumptionEqualityResolution =>
    Resolution.equalityResolutionWithDeletion step
  -- Backward demodulation builds its conclusion with the forward rule's name;
  -- the two are one inference.
  | .alascaFwdDemodulation => Rewrite.alascaDemodulation step
  | .alascaBwdDemodulation => Rewrite.alascaDemodulation step
  | .innerRewriting => Rewrite.innerRewriting step
  | .condensation => Clause.condensation step
  | .evaluation => Arithmetic.literalwise step
  | .alascaNormalization => Arithmetic.literalwise step
  | .alascaAbstraction => Arithmetic.theoryStep step
  | .alascaFloorElimination => Arithmetic.theoryStep step
  | .cancellation => Arithmetic.literalwise step
  | .interpretedSimplification => Arithmetic.theoryStep step
  | .theoryFlattening => Arithmetic.theoryStep step
  -- A literal equating two numbers that are not equal, dropped.
  | .distinctEqualityRemoval => Arithmetic.theoryStep step
  | .gaussianVariableEliminiation => Arithmetic.theoryStep step
  | .arithmeticSubtermGeneralization => Arithmetic.literalwise step
  | .alascaVirasQe => Arithmetic.viras step
  | .constrainedResolution => Resolution.resolution step
  -- Constrained superposition is superposition with the pairs the unifier
  -- could not unify left among the conclusion's literals.
  | .constrainedSuperposition => Rewrite.superposition step
  | .equalityFactoring => Resolution.equalityFactoring step
  | .instantiation => Arithmetic.theoryStep step
  | .alascaFourierMotzkin => Arithmetic.theoryStep step
  | .alascaIntegerFourierMotzkin => Arithmetic.theoryStep step
  | .alascaTermFactoring => Arithmetic.theoryStep step
  | .alascaFloorBounds => Arithmetic.theoryStep step
  | .alascaEqFactoring => Arithmetic.theoryStep step
  | .alascaLiteralFactoring => Arithmetic.theoryStep step
  | .alascaSuperposition => Rewrite.alascaSuperposition step
  | .alascaCoherence => Arithmetic.theoryStep step
  | .alascaCoherenceNormalization => Arithmetic.theoryStep step
  | .alascaVariableElimination => Arithmetic.theoryStep step
  | .equalityProxyReplacement => Definition.equalityProxyReplacement step
  | .equalityProxyDefinition => Definition.definitionStep step
  | .equalityProxyAxiom => Definition.equalityProxyAxiom step
  | .alascaIntegralityAxiom => Arithmetic.theoryStep step
  | .inequalitySplitting => Definition.inequalitySplitting step
  | .inequalitySplittingNameIntroduction => Definition.inequalitySplittingName step
  | .theoryTautologySatConflict => Closure.conflict step
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
  | .thaDivisibility => Arithmetic.divisibility step
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
  | .thaTrunc1 => Arithmetic.theoryStep step
  | .thaTrunc2 => Arithmetic.theoryStep step
  | .thaTrunc3 => Arithmetic.theoryStep step
  | .thaTrunc4 => Arithmetic.theoryStep step
  | .thaArrayExtensionality => Arithmetic.theoryStep step
  | .thaBooleanArrayExtensionality => Arithmetic.theoryStep step

  -- Ruled out: these cannot reach a proof the tactic asked for, and say why.
  | .negatedConjecture => unreachable step "the tactic sends the goal already \
    negated, never as a conjecture to negate"
  | .backwardSubsumptionDemodulation => unreachable step "the bundled Vampire \
    does not record how this rule used its premises, and the tactic turns it \
    off with `bsd=off`"
  | .globalSubsumption => unreachable step "the bundled Vampire does not keep \
    the propositional proof this rule relies on, and the tactic turns it off \
    with `gs=off`"
  | .avatarAssertionReintroduction => unreachable step "only program synthesis \
    uses this rule, and the tactic does not run synthesis"
  | .functionDefinitionDemodulation => unreachable step "this rule rewrites \
    with recursive function definitions, and the tactic does not send any"
  | .constrainedFactoring => unreachable step "no inference in the bundled \
    Vampire produces this rule"

  -- Not implemented yet: admitted only under `+admit`.
  | .genericFormulaClauseTransformation => unimplemented step
  | .answerLiteralInjection => unimplemented step
  | .answerLiteralInputSkolemisation => unimplemented step
  | .claimDefinition => unimplemented step
  | .skolemSymbolIntroduction => unimplemented step
  | .genericFormulaClauseTransformationLast => unimplemented step
  | .genericSimplifyingInference => unimplemented step
  | .reorderLiterals => unimplemented step
  | .termAlgebraDistinctness => unimplemented step
  | .termAlgebraPositiveInjectivitySimplifying => unimplemented step
  | .termAlgebraNegativeInjectivitySimplifying => unimplemented step
  | .answerLiteralRemoval => unimplemented step
  | .answerLiteralJoinWithConstraints => unimplemented step
  | .answerLiteralJoinAsIte => unimplemented step
  | .casesSimp => unimplemented step
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
  | .genericSimplifyingInferenceLast => unimplemented step
  | .genericGeneratingInference => unimplemented step
  | .functionDefinitionRewriting => unimplemented step
  | .termAlgebraInjectivityGenerating => unimplemented step
  | .termAlgebraAcyclicity => unimplemented step
  | .foolParamodulation => unimplemented step
  | .inductionHyperresolution => unimplemented step
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
  | .predicateDefinitionUnfolding => unimplemented step
  | .predicateDefinitionMerging => unimplemented step
  | .predicateElimination => unimplemented step
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
  | .genericAvatarInference => unimplemented step
  | .avatarRefutationSmt => unimplemented step
  | .genericAvatarInferenceLast => unimplemented step
  | .genericNonspecificInferenceLast => unimplemented step
  | .genericTheoryAxiom => unimplemented step
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
