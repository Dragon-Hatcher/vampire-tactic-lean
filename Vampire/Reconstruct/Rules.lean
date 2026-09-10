import Vampire.InferenceRule
import Vampire.Reconstruct.Basic

namespace Vampire.Reconstruct

open Lean Meta

/-- A step of vampire's proof, with everything needed to justify it. -/
structure Step where
  unit : Vampire.Unit
  rule : InferenceRule
  /-- The step's conclusion, as a Lean proposition. -/
  conclusion : Expr
  /-- The premises: a proof of each, paired with what it proves. -/
  premises : Array (Expr × Expr)

/--
Stands in for a rule that has no implementation yet. The step's conclusion is
still rebuilt and checked, so only the justification is missing.
-/
def unimplemented (step : Step) : ReconstructM Expr := do
  modify fun s => { s with unimplemented := s.unimplemented.insert step.rule.name }
  mkSorry step.conclusion (synthetic := false)

/--
Justifies a step. Every rule vampire can emit has a case; the ones that are not
implemented yet fall to `unimplemented`, which admits the conclusion.
-/
def ofRule (step : Step) : ReconstructM Expr :=
  match step.rule with

  | .input => unimplemented step
  | .genericFormulaClauseTransformation => unimplemented step
  | .negatedConjecture => unimplemented step
  | .answerLiteralInjection => unimplemented step
  | .answerLiteralInputSkolemisation => unimplemented step
  | .claimDefinition => unimplemented step
  | .rectify => unimplemented step
  | .closure => unimplemented step
  | .flatten => unimplemented step
  | .ennf => unimplemented step
  | .nnf => unimplemented step
  | .reduceFalseTrue => unimplemented step
  | .definitionFolding => unimplemented step
  | .theoryNormalization => unimplemented step
  | .alascaIntegerTransformation => unimplemented step
  | .skolemize => unimplemented step
  | .skolemSymbolIntroduction => unimplemented step
  | .clausify => unimplemented step
  | .reorientEquations => unimplemented step
  | .genericFormulaClauseTransformationLast => unimplemented step
  | .genericSimplifyingInference => unimplemented step
  | .reorderLiterals => unimplemented step
  | .removeDuplicateLiterals => unimplemented step
  | .trivialInequalityRemoval => unimplemented step
  | .equalityResolutionWithDeletion => unimplemented step
  | .forwardSubsumptionResolution => unimplemented step
  | .backwardSubsumptionResolution => unimplemented step
  | .subsumptionEqualityResolution => unimplemented step
  | .forwardDemodulation => unimplemented step
  | .backwardDemodulation => unimplemented step
  | .alascaFwdDemodulation => unimplemented step
  | .alascaBwdDemodulation => unimplemented step
  | .forwardSubsumptionDemodulation => unimplemented step
  | .backwardSubsumptionDemodulation => unimplemented step
  | .forwardLiteralRewriting => unimplemented step
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
  | .resolution => unimplemented step
  | .constrainedResolution => unimplemented step
  | .factoring => unimplemented step
  | .constrainedFactoring => unimplemented step
  | .superposition => unimplemented step
  | .functionDefinitionRewriting => unimplemented step
  | .constrainedSuperposition => unimplemented step
  | .equalityFactoring => unimplemented step
  | .equalityResolution => unimplemented step
  | .extensionalityResolution => unimplemented step
  | .termAlgebraInjectivityGenerating => unimplemented step
  | .termAlgebraAcyclicity => unimplemented step
  | .foolParamodulation => unimplemented step
  | .unitResultingResolution => unimplemented step
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
  | .definitionUnfolding => unimplemented step
  | .functionDefinition => unimplemented step
  | .predicateDefinition => unimplemented step
  | .predicateDefinitionUnfolding => unimplemented step
  | .predicateDefinitionMerging => unimplemented step
  | .polarityFlipping => unimplemented step
  | .unusedPredicateDefinitionRemoval => unimplemented step
  | .purePredicateRemoval => unimplemented step
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
  | .generalSplitting => unimplemented step
  | .generalSplittingComponent => unimplemented step
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
  | .avatarDefinition => unimplemented step
  | .avatarComponent => unimplemented step
  | .avatarRefutation => unimplemented step
  | .avatarRefutationSmt => unimplemented step
  | .avatarSplitClause => unimplemented step
  | .avatarContradictionClause => unimplemented step
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
