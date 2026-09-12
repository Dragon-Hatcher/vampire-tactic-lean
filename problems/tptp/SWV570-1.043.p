%------------------------------------------------------------------------------
% File     : SWV570-1.043 : TPTP v9.3.1. Bugfixed v5.0.0.
% Domain   : Software Verification
% Problem  : Circular queue (t1_native_record_ios_mod_np_sf_ai_00043)
% Version  : Especial.
% English  : If q[n+1] is obtained from a properly initialized circular queue 
%            q[0] by inserting n+1 elements e0, e1, ..., en, for n > 0, and n
%            mod k = 0, then first(q[n+1]) =~ last(q[n+1]).

% Refs     : [Arm08] Armando (2008), Email to Geoff Sutcliffe
%          : [AB+09] Armando et al. (2009), New Results on Rewrite-based Sa
% Source   : [Arm08]
% Names    : circular_queue_t1_native_record_ios_mod_np_sf_ai_00043_001 [Arm08]

% Status   : Unsatisfiable
% Rating   : 0.08 v9.3.0, 0.18 v9.1.0, 0.27 v9.0.0, 0.13 v8.2.0, 0.12 v8.1.0, 0.11 v7.5.0, 0.12 v7.4.0, 0.24 v7.3.0, 0.08 v7.1.0, 0.00 v7.0.0, 0.15 v6.4.0, 0.29 v6.3.0, 0.10 v6.2.0, 0.30 v6.1.0, 0.18 v6.0.0, 0.14 v5.5.0, 0.25 v5.4.0, 0.33 v5.3.0, 0.50 v5.2.0, 0.38 v5.1.0, 0.56 v5.0.0, 0.50 v4.1.0, 0.33 v4.0.1, 0.38 v4.0.0
% Syntax   : Number of clauses     :  327 ( 326 unt;   1 nHn; 313 RR)
%            Number of literals    :  328 ( 328 equ;   3 neg)
%            Maximal clause size   :    2 (   1 avg)
%            Maximal term depth    :    4 (   1 avg)
%            Number of predicates  :    1 (   0 usr;   0 prp; 2-2 aty)
%            Number of functors    :  364 ( 364 usr; 354 con; 0-3 aty)
%            Number of variables   :   30 (  11 sgn)
% SPC      : CNF_UNS_RFO_PEQ_NUE

% Comments : 
% Bugfixes : v5.0.0 - Removed duplicate ps and sp axioms.
%------------------------------------------------------------------------------
cnf(a1,axiom,
    select(store(A,I,E),I) = E ).

cnf(a2,axiom,
    ( I = J
    | select(store(A,I,E),J) = select(A,J) ) ).

cnf(a1_seq,axiom,
    rselect_seq(rstore_seq(A,E)) = E ).

cnf(a1_head,axiom,
    rselect_head(rstore_head(A,E)) = E ).

cnf(a1_tail,axiom,
    rselect_tail(rstore_tail(A,E)) = E ).

cnf(a2_seq_head,axiom,
    rselect_seq(rstore_head(A,E)) = rselect_seq(A) ).

cnf(a2_seq_tail,axiom,
    rselect_seq(rstore_tail(A,E)) = rselect_seq(A) ).

cnf(a2_head_tail,axiom,
    rselect_head(rstore_tail(A,E)) = rselect_head(A) ).

cnf(a2_head_seq,axiom,
    rselect_head(rstore_seq(A,E)) = rselect_head(A) ).

cnf(a2_tail_seq,axiom,
    rselect_tail(rstore_seq(A,E)) = rselect_tail(A) ).

cnf(a2_tail_head,axiom,
    rselect_tail(rstore_head(A,E)) = rselect_tail(A) ).

cnf(ps,axiom,
    p(s(X)) = X ).

cnf(sp,axiom,
    s(p(X)) = X ).

cnf(as2,axiom,
    s(s(X)) != X ).

cnf(as1,axiom,
    s(X) != X ).

cnf(circular,axiom,
    s(s(s(X))) = X ).

cnf(hyp0,hypothesis,
    earray_10 = store(earray_8,index_9,e9) ).

cnf(hyp1,hypothesis,
    earray_100 = store(earray_98,index_99,e23) ).

cnf(hyp2,hypothesis,
    earray_104 = rselect_seq(q24) ).

cnf(hyp3,hypothesis,
    earray_106 = store(earray_104,index_105,e24) ).

cnf(hyp4,hypothesis,
    earray_110 = rselect_seq(q25) ).

cnf(hyp5,hypothesis,
    earray_112 = store(earray_110,index_111,e25) ).

cnf(hyp6,hypothesis,
    earray_116 = rselect_seq(q26) ).

cnf(hyp7,hypothesis,
    earray_118 = store(earray_116,index_117,e26) ).

cnf(hyp8,hypothesis,
    earray_122 = rselect_seq(q27) ).

cnf(hyp9,hypothesis,
    earray_124 = store(earray_122,index_123,e27) ).

cnf(hyp10,hypothesis,
    earray_128 = rselect_seq(q28) ).

cnf(hyp11,hypothesis,
    earray_130 = store(earray_128,index_129,e28) ).

cnf(hyp12,hypothesis,
    earray_134 = rselect_seq(q2) ).

cnf(hyp13,hypothesis,
    earray_136 = store(earray_134,index_135,e2) ).

cnf(hyp14,hypothesis,
    earray_14 = rselect_seq(q10) ).

cnf(hyp15,hypothesis,
    earray_140 = rselect_seq(q29) ).

cnf(hyp16,hypothesis,
    earray_142 = store(earray_140,index_141,e29) ).

cnf(hyp17,hypothesis,
    earray_146 = rselect_seq(q30) ).

cnf(hyp18,hypothesis,
    earray_148 = store(earray_146,index_147,e30) ).

cnf(hyp19,hypothesis,
    earray_152 = rselect_seq(q31) ).

cnf(hyp20,hypothesis,
    earray_154 = store(earray_152,index_153,e31) ).

cnf(hyp21,hypothesis,
    earray_158 = rselect_seq(q32) ).

cnf(hyp22,hypothesis,
    earray_16 = store(earray_14,index_15,e10) ).

cnf(hyp23,hypothesis,
    earray_160 = store(earray_158,index_159,e32) ).

cnf(hyp24,hypothesis,
    earray_164 = rselect_seq(q33) ).

cnf(hyp25,hypothesis,
    earray_166 = store(earray_164,index_165,e33) ).

cnf(hyp26,hypothesis,
    earray_170 = rselect_seq(q34) ).

cnf(hyp27,hypothesis,
    earray_172 = store(earray_170,index_171,e34) ).

cnf(hyp28,hypothesis,
    earray_176 = rselect_seq(q35) ).

cnf(hyp29,hypothesis,
    earray_178 = store(earray_176,index_177,e35) ).

cnf(hyp30,hypothesis,
    earray_182 = rselect_seq(q36) ).

cnf(hyp31,hypothesis,
    earray_184 = store(earray_182,index_183,e36) ).

cnf(hyp32,hypothesis,
    earray_188 = rselect_seq(q37) ).

cnf(hyp33,hypothesis,
    earray_190 = store(earray_188,index_189,e37) ).

cnf(hyp34,hypothesis,
    earray_194 = rselect_seq(q38) ).

cnf(hyp35,hypothesis,
    earray_196 = store(earray_194,index_195,e38) ).

cnf(hyp36,hypothesis,
    earray_2 = rselect_seq(q0) ).

cnf(hyp37,hypothesis,
    earray_20 = rselect_seq(q11) ).

cnf(hyp38,hypothesis,
    earray_200 = rselect_seq(q3) ).

cnf(hyp39,hypothesis,
    earray_202 = store(earray_200,index_201,e3) ).

cnf(hyp40,hypothesis,
    earray_206 = rselect_seq(q39) ).

cnf(hyp41,hypothesis,
    earray_208 = store(earray_206,index_207,e39) ).

cnf(hyp42,hypothesis,
    earray_212 = rselect_seq(q40) ).

cnf(hyp43,hypothesis,
    earray_214 = store(earray_212,index_213,e40) ).

cnf(hyp44,hypothesis,
    earray_218 = rselect_seq(q41) ).

cnf(hyp45,hypothesis,
    earray_22 = store(earray_20,index_21,e11) ).

cnf(hyp46,hypothesis,
    earray_220 = store(earray_218,index_219,e41) ).

cnf(hyp47,hypothesis,
    earray_224 = rselect_seq(q42) ).

cnf(hyp48,hypothesis,
    earray_226 = store(earray_224,index_225,e42) ).

cnf(hyp49,hypothesis,
    earray_230 = rselect_seq(q4) ).

cnf(hyp50,hypothesis,
    earray_232 = store(earray_230,index_231,e4) ).

cnf(hyp51,hypothesis,
    earray_236 = rselect_seq(q5) ).

cnf(hyp52,hypothesis,
    earray_238 = store(earray_236,index_237,e5) ).

cnf(hyp53,hypothesis,
    earray_242 = rselect_seq(q6) ).

cnf(hyp54,hypothesis,
    earray_244 = store(earray_242,index_243,e6) ).

cnf(hyp55,hypothesis,
    earray_248 = rselect_seq(q7) ).

cnf(hyp56,hypothesis,
    earray_250 = store(earray_248,index_249,e7) ).

cnf(hyp57,hypothesis,
    earray_254 = rselect_seq(q8) ).

cnf(hyp58,hypothesis,
    earray_256 = store(earray_254,index_255,e8) ).

cnf(hyp59,hypothesis,
    earray_26 = rselect_seq(q12) ).

cnf(hyp60,hypothesis,
    earray_260 = rselect_seq(q43) ).

cnf(hyp61,hypothesis,
    earray_28 = store(earray_26,index_27,e12) ).

cnf(hyp62,hypothesis,
    earray_32 = rselect_seq(q13) ).

cnf(hyp63,hypothesis,
    earray_34 = store(earray_32,index_33,e13) ).

cnf(hyp64,hypothesis,
    earray_38 = rselect_seq(q14) ).

cnf(hyp65,hypothesis,
    earray_4 = store(earray_2,index_3,e0) ).

cnf(hyp66,hypothesis,
    earray_40 = store(earray_38,index_39,e14) ).

cnf(hyp67,hypothesis,
    earray_44 = rselect_seq(q15) ).

cnf(hyp68,hypothesis,
    earray_46 = store(earray_44,index_45,e15) ).

cnf(hyp69,hypothesis,
    earray_50 = rselect_seq(q16) ).

cnf(hyp70,hypothesis,
    earray_52 = store(earray_50,index_51,e16) ).

cnf(hyp71,hypothesis,
    earray_56 = rselect_seq(q17) ).

cnf(hyp72,hypothesis,
    earray_58 = store(earray_56,index_57,e17) ).

cnf(hyp73,hypothesis,
    earray_62 = rselect_seq(q18) ).

cnf(hyp74,hypothesis,
    earray_64 = store(earray_62,index_63,e18) ).

cnf(hyp75,hypothesis,
    earray_68 = rselect_seq(q1) ).

cnf(hyp76,hypothesis,
    earray_70 = store(earray_68,index_69,e1) ).

cnf(hyp77,hypothesis,
    earray_74 = rselect_seq(q19) ).

cnf(hyp78,hypothesis,
    earray_76 = store(earray_74,index_75,e19) ).

cnf(hyp79,hypothesis,
    earray_8 = rselect_seq(q9) ).

cnf(hyp80,hypothesis,
    earray_80 = rselect_seq(q20) ).

cnf(hyp81,hypothesis,
    earray_82 = store(earray_80,index_81,e20) ).

cnf(hyp82,hypothesis,
    earray_86 = rselect_seq(q21) ).

cnf(hyp83,hypothesis,
    earray_88 = store(earray_86,index_87,e21) ).

cnf(hyp84,hypothesis,
    earray_92 = rselect_seq(q22) ).

cnf(hyp85,hypothesis,
    earray_94 = store(earray_92,index_93,e22) ).

cnf(hyp86,hypothesis,
    earray_98 = rselect_seq(q23) ).

cnf(hyp87,hypothesis,
    elem_262 = select(earray_260,index_261) ).

cnf(hyp88,hypothesis,
    elem_265 = select(earray_260,index_264) ).

cnf(hyp89,hypothesis,
    index_0 = rselect_tail(q) ).

cnf(hyp90,hypothesis,
    index_102 = s(index_99) ).

cnf(hyp91,hypothesis,
    index_105 = rselect_tail(q24) ).

cnf(hyp92,hypothesis,
    index_108 = s(index_105) ).

cnf(hyp93,hypothesis,
    index_111 = rselect_tail(q25) ).

cnf(hyp94,hypothesis,
    index_114 = s(index_111) ).

cnf(hyp95,hypothesis,
    index_117 = rselect_tail(q26) ).

cnf(hyp96,hypothesis,
    index_12 = s(index_9) ).

cnf(hyp97,hypothesis,
    index_120 = s(index_117) ).

cnf(hyp98,hypothesis,
    index_123 = rselect_tail(q27) ).

cnf(hyp99,hypothesis,
    index_126 = s(index_123) ).

cnf(hyp100,hypothesis,
    index_129 = rselect_tail(q28) ).

cnf(hyp101,hypothesis,
    index_132 = s(index_129) ).

cnf(hyp102,hypothesis,
    index_135 = rselect_tail(q2) ).

cnf(hyp103,hypothesis,
    index_138 = s(index_135) ).

cnf(hyp104,hypothesis,
    index_141 = rselect_tail(q29) ).

cnf(hyp105,hypothesis,
    index_144 = s(index_141) ).

cnf(hyp106,hypothesis,
    index_147 = rselect_tail(q30) ).

cnf(hyp107,hypothesis,
    index_15 = rselect_tail(q10) ).

cnf(hyp108,hypothesis,
    index_150 = s(index_147) ).

cnf(hyp109,hypothesis,
    index_153 = rselect_tail(q31) ).

cnf(hyp110,hypothesis,
    index_156 = s(index_153) ).

cnf(hyp111,hypothesis,
    index_159 = rselect_tail(q32) ).

cnf(hyp112,hypothesis,
    index_162 = s(index_159) ).

cnf(hyp113,hypothesis,
    index_165 = rselect_tail(q33) ).

cnf(hyp114,hypothesis,
    index_168 = s(index_165) ).

cnf(hyp115,hypothesis,
    index_171 = rselect_tail(q34) ).

cnf(hyp116,hypothesis,
    index_174 = s(index_171) ).

cnf(hyp117,hypothesis,
    index_177 = rselect_tail(q35) ).

cnf(hyp118,hypothesis,
    index_18 = s(index_15) ).

cnf(hyp119,hypothesis,
    index_180 = s(index_177) ).

cnf(hyp120,hypothesis,
    index_183 = rselect_tail(q36) ).

cnf(hyp121,hypothesis,
    index_186 = s(index_183) ).

cnf(hyp122,hypothesis,
    index_189 = rselect_tail(q37) ).

cnf(hyp123,hypothesis,
    index_192 = s(index_189) ).

cnf(hyp124,hypothesis,
    index_195 = rselect_tail(q38) ).

cnf(hyp125,hypothesis,
    index_198 = s(index_195) ).

cnf(hyp126,hypothesis,
    index_201 = rselect_tail(q3) ).

cnf(hyp127,hypothesis,
    index_204 = s(index_201) ).

cnf(hyp128,hypothesis,
    index_207 = rselect_tail(q39) ).

cnf(hyp129,hypothesis,
    index_21 = rselect_tail(q11) ).

cnf(hyp130,hypothesis,
    index_210 = s(index_207) ).

cnf(hyp131,hypothesis,
    index_213 = rselect_tail(q40) ).

cnf(hyp132,hypothesis,
    index_216 = s(index_213) ).

cnf(hyp133,hypothesis,
    index_219 = rselect_tail(q41) ).

cnf(hyp134,hypothesis,
    index_222 = s(index_219) ).

cnf(hyp135,hypothesis,
    index_225 = rselect_tail(q42) ).

cnf(hyp136,hypothesis,
    index_228 = s(index_225) ).

cnf(hyp137,hypothesis,
    index_231 = rselect_tail(q4) ).

cnf(hyp138,hypothesis,
    index_234 = s(index_231) ).

cnf(hyp139,hypothesis,
    index_237 = rselect_tail(q5) ).

cnf(hyp140,hypothesis,
    index_24 = s(index_21) ).

cnf(hyp141,hypothesis,
    index_240 = s(index_237) ).

cnf(hyp142,hypothesis,
    index_243 = rselect_tail(q6) ).

cnf(hyp143,hypothesis,
    index_246 = s(index_243) ).

cnf(hyp144,hypothesis,
    index_249 = rselect_tail(q7) ).

cnf(hyp145,hypothesis,
    index_252 = s(index_249) ).

cnf(hyp146,hypothesis,
    index_255 = rselect_tail(q8) ).

cnf(hyp147,hypothesis,
    index_258 = s(index_255) ).

cnf(hyp148,hypothesis,
    index_261 = rselect_head(q43) ).

cnf(hyp149,hypothesis,
    index_263 = rselect_tail(q43) ).

cnf(hyp150,hypothesis,
    s(index_264) = index_263 ).

cnf(hyp151,hypothesis,
    index_27 = rselect_tail(q12) ).

cnf(hyp152,hypothesis,
    index_3 = rselect_tail(q0) ).

cnf(hyp153,hypothesis,
    index_30 = s(index_27) ).

cnf(hyp154,hypothesis,
    index_33 = rselect_tail(q13) ).

cnf(hyp155,hypothesis,
    index_36 = s(index_33) ).

cnf(hyp156,hypothesis,
    index_39 = rselect_tail(q14) ).

cnf(hyp157,hypothesis,
    index_42 = s(index_39) ).

cnf(hyp158,hypothesis,
    index_45 = rselect_tail(q15) ).

cnf(hyp159,hypothesis,
    index_48 = s(index_45) ).

cnf(hyp160,hypothesis,
    index_51 = rselect_tail(q16) ).

cnf(hyp161,hypothesis,
    index_54 = s(index_51) ).

cnf(hyp162,hypothesis,
    index_57 = rselect_tail(q17) ).

cnf(hyp163,hypothesis,
    index_6 = s(index_3) ).

cnf(hyp164,hypothesis,
    index_60 = s(index_57) ).

cnf(hyp165,hypothesis,
    index_63 = rselect_tail(q18) ).

cnf(hyp166,hypothesis,
    index_66 = s(index_63) ).

cnf(hyp167,hypothesis,
    index_69 = rselect_tail(q1) ).

cnf(hyp168,hypothesis,
    index_72 = s(index_69) ).

cnf(hyp169,hypothesis,
    index_75 = rselect_tail(q19) ).

cnf(hyp170,hypothesis,
    index_78 = s(index_75) ).

cnf(hyp171,hypothesis,
    index_81 = rselect_tail(q20) ).

cnf(hyp172,hypothesis,
    index_84 = s(index_81) ).

cnf(hyp173,hypothesis,
    index_87 = rselect_tail(q21) ).

cnf(hyp174,hypothesis,
    index_9 = rselect_tail(q9) ).

cnf(hyp175,hypothesis,
    index_90 = s(index_87) ).

cnf(hyp176,hypothesis,
    index_93 = rselect_tail(q22) ).

cnf(hyp177,hypothesis,
    index_96 = s(index_93) ).

cnf(hyp178,hypothesis,
    index_99 = rselect_tail(q23) ).

cnf(hyp179,hypothesis,
    queue_1 = rstore_head(q,index_0) ).

cnf(hyp180,hypothesis,
    queue_101 = rstore_seq(q23,earray_100) ).

cnf(hyp181,hypothesis,
    queue_103 = rstore_tail(queue_101,index_102) ).

cnf(hyp182,hypothesis,
    queue_107 = rstore_seq(q24,earray_106) ).

cnf(hyp183,hypothesis,
    queue_109 = rstore_tail(queue_107,index_108) ).

cnf(hyp184,hypothesis,
    queue_11 = rstore_seq(q9,earray_10) ).

cnf(hyp185,hypothesis,
    queue_113 = rstore_seq(q25,earray_112) ).

cnf(hyp186,hypothesis,
    queue_115 = rstore_tail(queue_113,index_114) ).

cnf(hyp187,hypothesis,
    queue_119 = rstore_seq(q26,earray_118) ).

cnf(hyp188,hypothesis,
    queue_121 = rstore_tail(queue_119,index_120) ).

cnf(hyp189,hypothesis,
    queue_125 = rstore_seq(q27,earray_124) ).

cnf(hyp190,hypothesis,
    queue_127 = rstore_tail(queue_125,index_126) ).

cnf(hyp191,hypothesis,
    queue_13 = rstore_tail(queue_11,index_12) ).

cnf(hyp192,hypothesis,
    queue_131 = rstore_seq(q28,earray_130) ).

cnf(hyp193,hypothesis,
    queue_133 = rstore_tail(queue_131,index_132) ).

cnf(hyp194,hypothesis,
    queue_137 = rstore_seq(q2,earray_136) ).

cnf(hyp195,hypothesis,
    queue_139 = rstore_tail(queue_137,index_138) ).

cnf(hyp196,hypothesis,
    queue_143 = rstore_seq(q29,earray_142) ).

cnf(hyp197,hypothesis,
    queue_145 = rstore_tail(queue_143,index_144) ).

cnf(hyp198,hypothesis,
    queue_149 = rstore_seq(q30,earray_148) ).

cnf(hyp199,hypothesis,
    queue_151 = rstore_tail(queue_149,index_150) ).

cnf(hyp200,hypothesis,
    queue_155 = rstore_seq(q31,earray_154) ).

cnf(hyp201,hypothesis,
    queue_157 = rstore_tail(queue_155,index_156) ).

cnf(hyp202,hypothesis,
    queue_161 = rstore_seq(q32,earray_160) ).

cnf(hyp203,hypothesis,
    queue_163 = rstore_tail(queue_161,index_162) ).

cnf(hyp204,hypothesis,
    queue_167 = rstore_seq(q33,earray_166) ).

cnf(hyp205,hypothesis,
    queue_169 = rstore_tail(queue_167,index_168) ).

cnf(hyp206,hypothesis,
    queue_17 = rstore_seq(q10,earray_16) ).

cnf(hyp207,hypothesis,
    queue_173 = rstore_seq(q34,earray_172) ).

cnf(hyp208,hypothesis,
    queue_175 = rstore_tail(queue_173,index_174) ).

cnf(hyp209,hypothesis,
    queue_179 = rstore_seq(q35,earray_178) ).

cnf(hyp210,hypothesis,
    queue_181 = rstore_tail(queue_179,index_180) ).

cnf(hyp211,hypothesis,
    queue_185 = rstore_seq(q36,earray_184) ).

cnf(hyp212,hypothesis,
    queue_187 = rstore_tail(queue_185,index_186) ).

cnf(hyp213,hypothesis,
    queue_19 = rstore_tail(queue_17,index_18) ).

cnf(hyp214,hypothesis,
    queue_191 = rstore_seq(q37,earray_190) ).

cnf(hyp215,hypothesis,
    queue_193 = rstore_tail(queue_191,index_192) ).

cnf(hyp216,hypothesis,
    queue_197 = rstore_seq(q38,earray_196) ).

cnf(hyp217,hypothesis,
    queue_199 = rstore_tail(queue_197,index_198) ).

cnf(hyp218,hypothesis,
    queue_203 = rstore_seq(q3,earray_202) ).

cnf(hyp219,hypothesis,
    queue_205 = rstore_tail(queue_203,index_204) ).

cnf(hyp220,hypothesis,
    queue_209 = rstore_seq(q39,earray_208) ).

cnf(hyp221,hypothesis,
    queue_211 = rstore_tail(queue_209,index_210) ).

cnf(hyp222,hypothesis,
    queue_215 = rstore_seq(q40,earray_214) ).

cnf(hyp223,hypothesis,
    queue_217 = rstore_tail(queue_215,index_216) ).

cnf(hyp224,hypothesis,
    queue_221 = rstore_seq(q41,earray_220) ).

cnf(hyp225,hypothesis,
    queue_223 = rstore_tail(queue_221,index_222) ).

cnf(hyp226,hypothesis,
    queue_227 = rstore_seq(q42,earray_226) ).

cnf(hyp227,hypothesis,
    queue_229 = rstore_tail(queue_227,index_228) ).

cnf(hyp228,hypothesis,
    queue_23 = rstore_seq(q11,earray_22) ).

cnf(hyp229,hypothesis,
    queue_233 = rstore_seq(q4,earray_232) ).

cnf(hyp230,hypothesis,
    queue_235 = rstore_tail(queue_233,index_234) ).

cnf(hyp231,hypothesis,
    queue_239 = rstore_seq(q5,earray_238) ).

cnf(hyp232,hypothesis,
    queue_241 = rstore_tail(queue_239,index_240) ).

cnf(hyp233,hypothesis,
    queue_245 = rstore_seq(q6,earray_244) ).

cnf(hyp234,hypothesis,
    queue_247 = rstore_tail(queue_245,index_246) ).

cnf(hyp235,hypothesis,
    queue_25 = rstore_tail(queue_23,index_24) ).

cnf(hyp236,hypothesis,
    queue_251 = rstore_seq(q7,earray_250) ).

cnf(hyp237,hypothesis,
    queue_253 = rstore_tail(queue_251,index_252) ).

cnf(hyp238,hypothesis,
    queue_257 = rstore_seq(q8,earray_256) ).

cnf(hyp239,hypothesis,
    queue_259 = rstore_tail(queue_257,index_258) ).

cnf(hyp240,hypothesis,
    queue_29 = rstore_seq(q12,earray_28) ).

cnf(hyp241,hypothesis,
    queue_31 = rstore_tail(queue_29,index_30) ).

cnf(hyp242,hypothesis,
    queue_35 = rstore_seq(q13,earray_34) ).

cnf(hyp243,hypothesis,
    queue_37 = rstore_tail(queue_35,index_36) ).

cnf(hyp244,hypothesis,
    queue_41 = rstore_seq(q14,earray_40) ).

cnf(hyp245,hypothesis,
    queue_43 = rstore_tail(queue_41,index_42) ).

cnf(hyp246,hypothesis,
    queue_47 = rstore_seq(q15,earray_46) ).

cnf(hyp247,hypothesis,
    queue_49 = rstore_tail(queue_47,index_48) ).

cnf(hyp248,hypothesis,
    queue_5 = rstore_seq(q0,earray_4) ).

cnf(hyp249,hypothesis,
    queue_53 = rstore_seq(q16,earray_52) ).

cnf(hyp250,hypothesis,
    queue_55 = rstore_tail(queue_53,index_54) ).

cnf(hyp251,hypothesis,
    queue_59 = rstore_seq(q17,earray_58) ).

cnf(hyp252,hypothesis,
    queue_61 = rstore_tail(queue_59,index_60) ).

cnf(hyp253,hypothesis,
    queue_65 = rstore_seq(q18,earray_64) ).

cnf(hyp254,hypothesis,
    queue_67 = rstore_tail(queue_65,index_66) ).

cnf(hyp255,hypothesis,
    queue_7 = rstore_tail(queue_5,index_6) ).

cnf(hyp256,hypothesis,
    queue_71 = rstore_seq(q1,earray_70) ).

cnf(hyp257,hypothesis,
    queue_73 = rstore_tail(queue_71,index_72) ).

cnf(hyp258,hypothesis,
    queue_77 = rstore_seq(q19,earray_76) ).

cnf(hyp259,hypothesis,
    queue_79 = rstore_tail(queue_77,index_78) ).

cnf(hyp260,hypothesis,
    queue_83 = rstore_seq(q20,earray_82) ).

cnf(hyp261,hypothesis,
    queue_85 = rstore_tail(queue_83,index_84) ).

cnf(hyp262,hypothesis,
    queue_89 = rstore_seq(q21,earray_88) ).

cnf(hyp263,hypothesis,
    queue_91 = rstore_tail(queue_89,index_90) ).

cnf(hyp264,hypothesis,
    queue_95 = rstore_seq(q22,earray_94) ).

cnf(hyp265,hypothesis,
    queue_97 = rstore_tail(queue_95,index_96) ).

cnf(hyp266,hypothesis,
    q0 = queue_1 ).

cnf(hyp267,hypothesis,
    q1 = queue_7 ).

cnf(hyp268,hypothesis,
    q10 = queue_13 ).

cnf(hyp269,hypothesis,
    q11 = queue_19 ).

cnf(hyp270,hypothesis,
    q12 = queue_25 ).

cnf(hyp271,hypothesis,
    q13 = queue_31 ).

cnf(hyp272,hypothesis,
    q14 = queue_37 ).

cnf(hyp273,hypothesis,
    q15 = queue_43 ).

cnf(hyp274,hypothesis,
    q16 = queue_49 ).

cnf(hyp275,hypothesis,
    q17 = queue_55 ).

cnf(hyp276,hypothesis,
    q18 = queue_61 ).

cnf(hyp277,hypothesis,
    q19 = queue_67 ).

cnf(hyp278,hypothesis,
    q2 = queue_73 ).

cnf(hyp279,hypothesis,
    q20 = queue_79 ).

cnf(hyp280,hypothesis,
    q21 = queue_85 ).

cnf(hyp281,hypothesis,
    q22 = queue_91 ).

cnf(hyp282,hypothesis,
    q23 = queue_97 ).

cnf(hyp283,hypothesis,
    q24 = queue_103 ).

cnf(hyp284,hypothesis,
    q25 = queue_109 ).

cnf(hyp285,hypothesis,
    q26 = queue_115 ).

cnf(hyp286,hypothesis,
    q27 = queue_121 ).

cnf(hyp287,hypothesis,
    q28 = queue_127 ).

cnf(hyp288,hypothesis,
    q29 = queue_133 ).

cnf(hyp289,hypothesis,
    q3 = queue_139 ).

cnf(hyp290,hypothesis,
    q30 = queue_145 ).

cnf(hyp291,hypothesis,
    q31 = queue_151 ).

cnf(hyp292,hypothesis,
    q32 = queue_157 ).

cnf(hyp293,hypothesis,
    q33 = queue_163 ).

cnf(hyp294,hypothesis,
    q34 = queue_169 ).

cnf(hyp295,hypothesis,
    q35 = queue_175 ).

cnf(hyp296,hypothesis,
    q36 = queue_181 ).

cnf(hyp297,hypothesis,
    q37 = queue_187 ).

cnf(hyp298,hypothesis,
    q38 = queue_193 ).

cnf(hyp299,hypothesis,
    q39 = queue_199 ).

cnf(hyp300,hypothesis,
    q4 = queue_205 ).

cnf(hyp301,hypothesis,
    q40 = queue_211 ).

cnf(hyp302,hypothesis,
    q41 = queue_217 ).

cnf(hyp303,hypothesis,
    q42 = queue_223 ).

cnf(hyp304,hypothesis,
    q43 = queue_229 ).

cnf(hyp305,hypothesis,
    q5 = queue_235 ).

cnf(hyp306,hypothesis,
    q6 = queue_241 ).

cnf(hyp307,hypothesis,
    q7 = queue_247 ).

cnf(hyp308,hypothesis,
    q8 = queue_253 ).

cnf(hyp309,hypothesis,
    q9 = queue_259 ).

cnf(goal,negated_conjecture,
    elem_262 != elem_265 ).

%------------------------------------------------------------------------------
