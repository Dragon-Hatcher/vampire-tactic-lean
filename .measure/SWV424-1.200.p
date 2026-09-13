%------------------------------------------------------------------------------
% File     : SWV424-1.200 : TPTP v9.3.1. Released v3.5.0.
% Domain   : Software Verification
% Problem  : Simple access control busy state k=200
% Version  : Especial.
% English  : Model checking of a simple access control. The property to check
%            is that, if one requests access to the resource, it will
%            eventually enter the busy state.

% Refs     : [CC+02] Cimatti et al (2002), NuSmv 2 An OpenSource Tool for S
%          : [NV07a] Navarro (2007), Email to Geoff Sutcliffe
%          : [NV07b] Navarro & Voronkov (2007), Encodings of Bounded LTL Mo
% Source   : [NV07a]
% Names    : example_cmu/short.smv [CC+02]
%          : short-k200 [NV07a]

% Status   : Unsatisfiable
% Rating   : 0.00 v9.3.0, 0.12 v9.1.0, 0.14 v9.0.0, 0.00 v7.3.0, 0.30 v7.2.0, 0.33 v7.1.0, 0.29 v7.0.0, 0.43 v6.4.0, 0.17 v6.3.0, 0.00 v6.2.0, 0.50 v6.1.0, 0.62 v6.0.0, 0.50 v5.5.0, 0.20 v5.4.0, 0.00 v4.0.1, 0.20 v3.7.0, 0.00 v3.5.0
% Syntax   : Number of clauses     :  223 ( 202 unt;   5 nHn; 222 RR)
%            Number of literals    :  456 (   0 equ;  32 neg)
%            Maximal clause size   :  201 (   2 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :   14 (  14 usr;   1 prp; 0-2 aty)
%            Number of functors    :  202 ( 202 usr; 202 con; 0-0 aty)
%            Number of variables   :   28 (   0 sgn)
% SPC      : CNF_UNS_EPR_NEQ_NHN

% Comments : Darwin run times seem to have a growth of order k^3.
%          : Translated from [CC+02] using [NV07b]
%------------------------------------------------------------------------------
cnf(bound1,axiom,
    succ(s0,s1) ).

cnf(bound2,axiom,
    succ(s1,s2) ).

cnf(bound3,axiom,
    succ(s2,s3) ).

cnf(bound4,axiom,
    succ(s3,s4) ).

cnf(bound5,axiom,
    succ(s4,s5) ).

cnf(bound6,axiom,
    succ(s5,s6) ).

cnf(bound7,axiom,
    succ(s6,s7) ).

cnf(bound8,axiom,
    succ(s7,s8) ).

cnf(bound9,axiom,
    succ(s8,s9) ).

cnf(bound10,axiom,
    succ(s9,s10) ).

cnf(bound11,axiom,
    succ(s10,s11) ).

cnf(bound12,axiom,
    succ(s11,s12) ).

cnf(bound13,axiom,
    succ(s12,s13) ).

cnf(bound14,axiom,
    succ(s13,s14) ).

cnf(bound15,axiom,
    succ(s14,s15) ).

cnf(bound16,axiom,
    succ(s15,s16) ).

cnf(bound17,axiom,
    succ(s16,s17) ).

cnf(bound18,axiom,
    succ(s17,s18) ).

cnf(bound19,axiom,
    succ(s18,s19) ).

cnf(bound20,axiom,
    succ(s19,s20) ).

cnf(bound21,axiom,
    succ(s20,s21) ).

cnf(bound22,axiom,
    succ(s21,s22) ).

cnf(bound23,axiom,
    succ(s22,s23) ).

cnf(bound24,axiom,
    succ(s23,s24) ).

cnf(bound25,axiom,
    succ(s24,s25) ).

cnf(bound26,axiom,
    succ(s25,s26) ).

cnf(bound27,axiom,
    succ(s26,s27) ).

cnf(bound28,axiom,
    succ(s27,s28) ).

cnf(bound29,axiom,
    succ(s28,s29) ).

cnf(bound30,axiom,
    succ(s29,s30) ).

cnf(bound31,axiom,
    succ(s30,s31) ).

cnf(bound32,axiom,
    succ(s31,s32) ).

cnf(bound33,axiom,
    succ(s32,s33) ).

cnf(bound34,axiom,
    succ(s33,s34) ).

cnf(bound35,axiom,
    succ(s34,s35) ).

cnf(bound36,axiom,
    succ(s35,s36) ).

cnf(bound37,axiom,
    succ(s36,s37) ).

cnf(bound38,axiom,
    succ(s37,s38) ).

cnf(bound39,axiom,
    succ(s38,s39) ).

cnf(bound40,axiom,
    succ(s39,s40) ).

cnf(bound41,axiom,
    succ(s40,s41) ).

cnf(bound42,axiom,
    succ(s41,s42) ).

cnf(bound43,axiom,
    succ(s42,s43) ).

cnf(bound44,axiom,
    succ(s43,s44) ).

cnf(bound45,axiom,
    succ(s44,s45) ).

cnf(bound46,axiom,
    succ(s45,s46) ).

cnf(bound47,axiom,
    succ(s46,s47) ).

cnf(bound48,axiom,
    succ(s47,s48) ).

cnf(bound49,axiom,
    succ(s48,s49) ).

cnf(bound50,axiom,
    succ(s49,s50) ).

cnf(bound51,axiom,
    succ(s50,s51) ).

cnf(bound52,axiom,
    succ(s51,s52) ).

cnf(bound53,axiom,
    succ(s52,s53) ).

cnf(bound54,axiom,
    succ(s53,s54) ).

cnf(bound55,axiom,
    succ(s54,s55) ).

cnf(bound56,axiom,
    succ(s55,s56) ).

cnf(bound57,axiom,
    succ(s56,s57) ).

cnf(bound58,axiom,
    succ(s57,s58) ).

cnf(bound59,axiom,
    succ(s58,s59) ).

cnf(bound60,axiom,
    succ(s59,s60) ).

cnf(bound61,axiom,
    succ(s60,s61) ).

cnf(bound62,axiom,
    succ(s61,s62) ).

cnf(bound63,axiom,
    succ(s62,s63) ).

cnf(bound64,axiom,
    succ(s63,s64) ).

cnf(bound65,axiom,
    succ(s64,s65) ).

cnf(bound66,axiom,
    succ(s65,s66) ).

cnf(bound67,axiom,
    succ(s66,s67) ).

cnf(bound68,axiom,
    succ(s67,s68) ).

cnf(bound69,axiom,
    succ(s68,s69) ).

cnf(bound70,axiom,
    succ(s69,s70) ).

cnf(bound71,axiom,
    succ(s70,s71) ).

cnf(bound72,axiom,
    succ(s71,s72) ).

cnf(bound73,axiom,
    succ(s72,s73) ).

cnf(bound74,axiom,
    succ(s73,s74) ).

cnf(bound75,axiom,
    succ(s74,s75) ).

cnf(bound76,axiom,
    succ(s75,s76) ).

cnf(bound77,axiom,
    succ(s76,s77) ).

cnf(bound78,axiom,
    succ(s77,s78) ).

cnf(bound79,axiom,
    succ(s78,s79) ).

cnf(bound80,axiom,
    succ(s79,s80) ).

cnf(bound81,axiom,
    succ(s80,s81) ).

cnf(bound82,axiom,
    succ(s81,s82) ).

cnf(bound83,axiom,
    succ(s82,s83) ).

cnf(bound84,axiom,
    succ(s83,s84) ).

cnf(bound85,axiom,
    succ(s84,s85) ).

cnf(bound86,axiom,
    succ(s85,s86) ).

cnf(bound87,axiom,
    succ(s86,s87) ).

cnf(bound88,axiom,
    succ(s87,s88) ).

cnf(bound89,axiom,
    succ(s88,s89) ).

cnf(bound90,axiom,
    succ(s89,s90) ).

cnf(bound91,axiom,
    succ(s90,s91) ).

cnf(bound92,axiom,
    succ(s91,s92) ).

cnf(bound93,axiom,
    succ(s92,s93) ).

cnf(bound94,axiom,
    succ(s93,s94) ).

cnf(bound95,axiom,
    succ(s94,s95) ).

cnf(bound96,axiom,
    succ(s95,s96) ).

cnf(bound97,axiom,
    succ(s96,s97) ).

cnf(bound98,axiom,
    succ(s97,s98) ).

cnf(bound99,axiom,
    succ(s98,s99) ).

cnf(bound100,axiom,
    succ(s99,s100) ).

cnf(bound101,axiom,
    succ(s100,s101) ).

cnf(bound102,axiom,
    succ(s101,s102) ).

cnf(bound103,axiom,
    succ(s102,s103) ).

cnf(bound104,axiom,
    succ(s103,s104) ).

cnf(bound105,axiom,
    succ(s104,s105) ).

cnf(bound106,axiom,
    succ(s105,s106) ).

cnf(bound107,axiom,
    succ(s106,s107) ).

cnf(bound108,axiom,
    succ(s107,s108) ).

cnf(bound109,axiom,
    succ(s108,s109) ).

cnf(bound110,axiom,
    succ(s109,s110) ).

cnf(bound111,axiom,
    succ(s110,s111) ).

cnf(bound112,axiom,
    succ(s111,s112) ).

cnf(bound113,axiom,
    succ(s112,s113) ).

cnf(bound114,axiom,
    succ(s113,s114) ).

cnf(bound115,axiom,
    succ(s114,s115) ).

cnf(bound116,axiom,
    succ(s115,s116) ).

cnf(bound117,axiom,
    succ(s116,s117) ).

cnf(bound118,axiom,
    succ(s117,s118) ).

cnf(bound119,axiom,
    succ(s118,s119) ).

cnf(bound120,axiom,
    succ(s119,s120) ).

cnf(bound121,axiom,
    succ(s120,s121) ).

cnf(bound122,axiom,
    succ(s121,s122) ).

cnf(bound123,axiom,
    succ(s122,s123) ).

cnf(bound124,axiom,
    succ(s123,s124) ).

cnf(bound125,axiom,
    succ(s124,s125) ).

cnf(bound126,axiom,
    succ(s125,s126) ).

cnf(bound127,axiom,
    succ(s126,s127) ).

cnf(bound128,axiom,
    succ(s127,s128) ).

cnf(bound129,axiom,
    succ(s128,s129) ).

cnf(bound130,axiom,
    succ(s129,s130) ).

cnf(bound131,axiom,
    succ(s130,s131) ).

cnf(bound132,axiom,
    succ(s131,s132) ).

cnf(bound133,axiom,
    succ(s132,s133) ).

cnf(bound134,axiom,
    succ(s133,s134) ).

cnf(bound135,axiom,
    succ(s134,s135) ).

cnf(bound136,axiom,
    succ(s135,s136) ).

cnf(bound137,axiom,
    succ(s136,s137) ).

cnf(bound138,axiom,
    succ(s137,s138) ).

cnf(bound139,axiom,
    succ(s138,s139) ).

cnf(bound140,axiom,
    succ(s139,s140) ).

cnf(bound141,axiom,
    succ(s140,s141) ).

cnf(bound142,axiom,
    succ(s141,s142) ).

cnf(bound143,axiom,
    succ(s142,s143) ).

cnf(bound144,axiom,
    succ(s143,s144) ).

cnf(bound145,axiom,
    succ(s144,s145) ).

cnf(bound146,axiom,
    succ(s145,s146) ).

cnf(bound147,axiom,
    succ(s146,s147) ).

cnf(bound148,axiom,
    succ(s147,s148) ).

cnf(bound149,axiom,
    succ(s148,s149) ).

cnf(bound150,axiom,
    succ(s149,s150) ).

cnf(bound151,axiom,
    succ(s150,s151) ).

cnf(bound152,axiom,
    succ(s151,s152) ).

cnf(bound153,axiom,
    succ(s152,s153) ).

cnf(bound154,axiom,
    succ(s153,s154) ).

cnf(bound155,axiom,
    succ(s154,s155) ).

cnf(bound156,axiom,
    succ(s155,s156) ).

cnf(bound157,axiom,
    succ(s156,s157) ).

cnf(bound158,axiom,
    succ(s157,s158) ).

cnf(bound159,axiom,
    succ(s158,s159) ).

cnf(bound160,axiom,
    succ(s159,s160) ).

cnf(bound161,axiom,
    succ(s160,s161) ).

cnf(bound162,axiom,
    succ(s161,s162) ).

cnf(bound163,axiom,
    succ(s162,s163) ).

cnf(bound164,axiom,
    succ(s163,s164) ).

cnf(bound165,axiom,
    succ(s164,s165) ).

cnf(bound166,axiom,
    succ(s165,s166) ).

cnf(bound167,axiom,
    succ(s166,s167) ).

cnf(bound168,axiom,
    succ(s167,s168) ).

cnf(bound169,axiom,
    succ(s168,s169) ).

cnf(bound170,axiom,
    succ(s169,s170) ).

cnf(bound171,axiom,
    succ(s170,s171) ).

cnf(bound172,axiom,
    succ(s171,s172) ).

cnf(bound173,axiom,
    succ(s172,s173) ).

cnf(bound174,axiom,
    succ(s173,s174) ).

cnf(bound175,axiom,
    succ(s174,s175) ).

cnf(bound176,axiom,
    succ(s175,s176) ).

cnf(bound177,axiom,
    succ(s176,s177) ).

cnf(bound178,axiom,
    succ(s177,s178) ).

cnf(bound179,axiom,
    succ(s178,s179) ).

cnf(bound180,axiom,
    succ(s179,s180) ).

cnf(bound181,axiom,
    succ(s180,s181) ).

cnf(bound182,axiom,
    succ(s181,s182) ).

cnf(bound183,axiom,
    succ(s182,s183) ).

cnf(bound184,axiom,
    succ(s183,s184) ).

cnf(bound185,axiom,
    succ(s184,s185) ).

cnf(bound186,axiom,
    succ(s185,s186) ).

cnf(bound187,axiom,
    succ(s186,s187) ).

cnf(bound188,axiom,
    succ(s187,s188) ).

cnf(bound189,axiom,
    succ(s188,s189) ).

cnf(bound190,axiom,
    succ(s189,s190) ).

cnf(bound191,axiom,
    succ(s190,s191) ).

cnf(bound192,axiom,
    succ(s191,s192) ).

cnf(bound193,axiom,
    succ(s192,s193) ).

cnf(bound194,axiom,
    succ(s193,s194) ).

cnf(bound195,axiom,
    succ(s194,s195) ).

cnf(bound196,axiom,
    succ(s195,s196) ).

cnf(bound197,axiom,
    succ(s196,s197) ).

cnf(bound198,axiom,
    succ(s197,s198) ).

cnf(bound199,axiom,
    succ(s198,s199) ).

cnf(bound200,axiom,
    last(s199) ).

cnf(bound201,axiom,
    ( ~ succ(X,Y)
    | trans(X,Y) ) ).

cnf(bound202,axiom,
    ( ~ loop
    | trans(s199,s0)
    | trans(s199,s1)
    | trans(s199,s2)
    | trans(s199,s3)
    | trans(s199,s4)
    | trans(s199,s5)
    | trans(s199,s6)
    | trans(s199,s7)
    | trans(s199,s8)
    | trans(s199,s9)
    | trans(s199,s10)
    | trans(s199,s11)
    | trans(s199,s12)
    | trans(s199,s13)
    | trans(s199,s14)
    | trans(s199,s15)
    | trans(s199,s16)
    | trans(s199,s17)
    | trans(s199,s18)
    | trans(s199,s19)
    | trans(s199,s20)
    | trans(s199,s21)
    | trans(s199,s22)
    | trans(s199,s23)
    | trans(s199,s24)
    | trans(s199,s25)
    | trans(s199,s26)
    | trans(s199,s27)
    | trans(s199,s28)
    | trans(s199,s29)
    | trans(s199,s30)
    | trans(s199,s31)
    | trans(s199,s32)
    | trans(s199,s33)
    | trans(s199,s34)
    | trans(s199,s35)
    | trans(s199,s36)
    | trans(s199,s37)
    | trans(s199,s38)
    | trans(s199,s39)
    | trans(s199,s40)
    | trans(s199,s41)
    | trans(s199,s42)
    | trans(s199,s43)
    | trans(s199,s44)
    | trans(s199,s45)
    | trans(s199,s46)
    | trans(s199,s47)
    | trans(s199,s48)
    | trans(s199,s49)
    | trans(s199,s50)
    | trans(s199,s51)
    | trans(s199,s52)
    | trans(s199,s53)
    | trans(s199,s54)
    | trans(s199,s55)
    | trans(s199,s56)
    | trans(s199,s57)
    | trans(s199,s58)
    | trans(s199,s59)
    | trans(s199,s60)
    | trans(s199,s61)
    | trans(s199,s62)
    | trans(s199,s63)
    | trans(s199,s64)
    | trans(s199,s65)
    | trans(s199,s66)
    | trans(s199,s67)
    | trans(s199,s68)
    | trans(s199,s69)
    | trans(s199,s70)
    | trans(s199,s71)
    | trans(s199,s72)
    | trans(s199,s73)
    | trans(s199,s74)
    | trans(s199,s75)
    | trans(s199,s76)
    | trans(s199,s77)
    | trans(s199,s78)
    | trans(s199,s79)
    | trans(s199,s80)
    | trans(s199,s81)
    | trans(s199,s82)
    | trans(s199,s83)
    | trans(s199,s84)
    | trans(s199,s85)
    | trans(s199,s86)
    | trans(s199,s87)
    | trans(s199,s88)
    | trans(s199,s89)
    | trans(s199,s90)
    | trans(s199,s91)
    | trans(s199,s92)
    | trans(s199,s93)
    | trans(s199,s94)
    | trans(s199,s95)
    | trans(s199,s96)
    | trans(s199,s97)
    | trans(s199,s98)
    | trans(s199,s99)
    | trans(s199,s100)
    | trans(s199,s101)
    | trans(s199,s102)
    | trans(s199,s103)
    | trans(s199,s104)
    | trans(s199,s105)
    | trans(s199,s106)
    | trans(s199,s107)
    | trans(s199,s108)
    | trans(s199,s109)
    | trans(s199,s110)
    | trans(s199,s111)
    | trans(s199,s112)
    | trans(s199,s113)
    | trans(s199,s114)
    | trans(s199,s115)
    | trans(s199,s116)
    | trans(s199,s117)
    | trans(s199,s118)
    | trans(s199,s119)
    | trans(s199,s120)
    | trans(s199,s121)
    | trans(s199,s122)
    | trans(s199,s123)
    | trans(s199,s124)
    | trans(s199,s125)
    | trans(s199,s126)
    | trans(s199,s127)
    | trans(s199,s128)
    | trans(s199,s129)
    | trans(s199,s130)
    | trans(s199,s131)
    | trans(s199,s132)
    | trans(s199,s133)
    | trans(s199,s134)
    | trans(s199,s135)
    | trans(s199,s136)
    | trans(s199,s137)
    | trans(s199,s138)
    | trans(s199,s139)
    | trans(s199,s140)
    | trans(s199,s141)
    | trans(s199,s142)
    | trans(s199,s143)
    | trans(s199,s144)
    | trans(s199,s145)
    | trans(s199,s146)
    | trans(s199,s147)
    | trans(s199,s148)
    | trans(s199,s149)
    | trans(s199,s150)
    | trans(s199,s151)
    | trans(s199,s152)
    | trans(s199,s153)
    | trans(s199,s154)
    | trans(s199,s155)
    | trans(s199,s156)
    | trans(s199,s157)
    | trans(s199,s158)
    | trans(s199,s159)
    | trans(s199,s160)
    | trans(s199,s161)
    | trans(s199,s162)
    | trans(s199,s163)
    | trans(s199,s164)
    | trans(s199,s165)
    | trans(s199,s166)
    | trans(s199,s167)
    | trans(s199,s168)
    | trans(s199,s169)
    | trans(s199,s170)
    | trans(s199,s171)
    | trans(s199,s172)
    | trans(s199,s173)
    | trans(s199,s174)
    | trans(s199,s175)
    | trans(s199,s176)
    | trans(s199,s177)
    | trans(s199,s178)
    | trans(s199,s179)
    | trans(s199,s180)
    | trans(s199,s181)
    | trans(s199,s182)
    | trans(s199,s183)
    | trans(s199,s184)
    | trans(s199,s185)
    | trans(s199,s186)
    | trans(s199,s187)
    | trans(s199,s188)
    | trans(s199,s189)
    | trans(s199,s190)
    | trans(s199,s191)
    | trans(s199,s192)
    | trans(s199,s193)
    | trans(s199,s194)
    | trans(s199,s195)
    | trans(s199,s196)
    | trans(s199,s197)
    | trans(s199,s198)
    | trans(s199,s199) ) ).

cnf(m_main_1,axiom,
    ( m_main_v_state(X,c_ready)
    | m_main_v_state(X,c_busy) ) ).

cnf(m_main_2,axiom,
    ( ~ m_main_v_state(X,c_ready)
    | ~ m_main_v_state(X,c_busy) ) ).

cnf(m_main_3,axiom,
    m_main_v_state(s0,c_ready) ).

cnf(m_main_4,axiom,
    ( m_main_v_state(X,c_ready)
    | ~ node1(X) ) ).

cnf(m_main_5,axiom,
    ( m_main_v_request(X)
    | ~ node1(X) ) ).

cnf(m_main_6,axiom,
    ( ~ m_main_v_state(X,c_ready)
    | ~ m_main_v_request(X)
    | m_main_v_state(Y,c_busy)
    | ~ node2(X,Y) ) ).

cnf(m_main_7,axiom,
    ( m_main_v_state(Y,c_ready)
    | m_main_v_state(Y,c_busy)
    | node1(X)
    | ~ node2(X,Y) ) ).

cnf(m_main_8,axiom,
    ( ~ trans(X,Y)
    | node2(X,Y) ) ).

cnf(prpty1,negated_conjecture,
    ( ~ m_main_v_state(X,c_busy)
    | ~ always3(X) ) ).

cnf(prpty2,negated_conjecture,
    ( always3(Y)
    | ~ trans(X,Y)
    | ~ always3(X) ) ).

cnf(prpty3,negated_conjecture,
    ( loop
    | ~ always3(X)
    | ~ last(X) ) ).

cnf(prpty4,negated_conjecture,
    ( m_main_v_request(X)
    | ~ node4(X) ) ).

cnf(prpty5,negated_conjecture,
    ( always3(X)
    | ~ node4(X) ) ).

cnf(prpty6,negated_conjecture,
    ( node4(X)
    | xuntil6(X)
    | ~ until5(X) ) ).

cnf(prpty7,negated_conjecture,
    ( until5(Y)
    | ~ succ(X,Y)
    | ~ xuntil6(X) ) ).

cnf(prpty8,negated_conjecture,
    ( loop
    | ~ last(X)
    | ~ xuntil6(X) ) ).

cnf(prpty9,negated_conjecture,
    ( until2p7(Y)
    | ~ trans(X,Y)
    | ~ last(X)
    | ~ xuntil6(X) ) ).

cnf(prpty10,negated_conjecture,
    ( node4(X)
    | xuntil2p8(X)
    | ~ until2p7(X) ) ).

cnf(prpty11,negated_conjecture,
    ( until2p7(Y)
    | ~ succ(X,Y)
    | ~ xuntil2p8(X) ) ).

cnf(prpty12,negated_conjecture,
    ( ~ last(X)
    | ~ xuntil2p8(X) ) ).

cnf(prpty13,negated_conjecture,
    until5(s0) ).

%------------------------------------------------------------------------------
