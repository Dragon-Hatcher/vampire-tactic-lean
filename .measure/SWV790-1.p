%------------------------------------------------------------------------------
% File     : SWV790-1 : TPTP v9.3.1. Released v4.1.0.
% Domain   : Software Verification
% Problem  : Needham-Schroeder shared-key protocol 439_1
% Version  : Especial.
% English  :

% Refs     : [BAN89] Burrows et al. (1989), A Logic of Authentication
%          : [Nip10] Nipkow (2010), Email to Geoff Sutcliffe
%          : [BN10]  Boehme & Nipkow (2010), Sledgehammer: Judgement Day
% Source   : [Nip10]
% Names    : NS_Shared-439_1 [Nip10]

% Status   : Unsatisfiable
% Rating   : 0.08 v9.3.0, 0.09 v9.1.0, 0.10 v8.1.0, 0.11 v7.5.0, 0.16 v7.4.0, 0.18 v7.3.0, 0.17 v7.2.0, 0.25 v7.1.0, 0.17 v7.0.0, 0.13 v6.3.0, 0.18 v6.2.0, 0.40 v6.1.0, 0.21 v6.0.0, 0.10 v5.4.0, 0.15 v5.3.0, 0.11 v5.2.0, 0.12 v5.1.0, 0.18 v5.0.0, 0.21 v4.1.0
% Syntax   : Number of clauses     :  546 ( 228 unt;  86 nHn; 307 RR)
%            Number of literals    : 1032 ( 377 equ; 454 neg)
%            Maximal clause size   :    7 (   1 avg)
%            Maximal term depth    :    9 (   2 avg)
%            Number of predicates  :   12 (  11 usr;   0 prp; 1-4 aty)
%            Number of functors    :   74 (  74 usr;  18 con; 0-5 aty)
%            Number of variables   : 1726 ( 445 sgn)
% SPC      : CNF_UNS_RFO_SEQ_NHN

% Comments :
%------------------------------------------------------------------------------
cnf(cls_predicate1D_0,axiom,
    ( hBOOL(hAPP(V_Q,V_x))
    | ~ hBOOL(hAPP(V_P,V_x))
    | ~ c_lessequals(V_P,V_Q,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_order__eq__iff_0,axiom,
    ( ~ class_Orderings_Oorder(T_a)
    | c_lessequals(V_x,V_x,T_a) ) ).

cnf(cls_order__eq__refl_0,axiom,
    ( ~ class_Orderings_Opreorder(T_a)
    | c_lessequals(V_x,V_x,T_a) ) ).

cnf(cls_rev__predicate1D_0,axiom,
    ( hBOOL(hAPP(V_Q,V_x))
    | ~ c_lessequals(V_P,V_Q,tc_fun(T_a,tc_bool))
    | ~ hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_MPair__used_0,axiom,
    ( c_in(V_X,c_Event_Oused(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Event_Oused(V_H),tc_Message_Omsg) ) ).

cnf(cls_MPair__used_1,axiom,
    ( c_in(V_Y,c_Event_Oused(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Event_Oused(V_H),tc_Message_Omsg) ) ).

cnf(cls_image__is__empty_0,axiom,
    ( c_Set_Oimage(V_f,V_A,T_b,T_a) != c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool))
    | V_A = c_Orderings_Obot__class_Obot(tc_fun(T_b,tc_bool)) ) ).

cnf(cls_priK__neq__shrK_0,axiom,
    c_Public_OshrK(V_A) != c_Message_OinvKey(c_Public_OpublicKey(V_b,V_C)) ).

cnf(cls_singleton__iff_1,axiom,
    c_in(V_x,c_Set_Oinsert(V_x,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) ).

cnf(cls_subset__singletonD_0,axiom,
    ( V_A = c_Set_Oinsert(V_x,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a)
    | V_A = c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,c_Set_Oinsert(V_x,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),tc_fun(T_a,tc_bool)) ) ).

cnf(cls_pushes_I1_J_0,axiom,
    c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),c_Set_Oinsert(c_Message_Omsg_OAgent(V_C),V_A,tc_Message_Omsg),tc_Message_Omsg) = c_Set_Oinsert(c_Message_Omsg_OAgent(V_C),c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),V_A,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_Agent__neq__HPair_0,axiom,
    c_Message_Omsg_OAgent(V_A) != c_Message_OHPair(V_X,V_Y) ).

cnf(cls_image__mono_0,axiom,
    ( c_lessequals(c_Set_Oimage(V_f,V_A,T_a,T_b),c_Set_Oimage(V_f,V_B,T_a,T_b),tc_fun(T_b,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_secrecy__lemma_0,axiom,
    ( ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | c_in(c_Event_Oevent_ONotes(c_Message_Oagent_OSpy,c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(v_sko__NS__Shared__Mirabelle__Xsecrecy__lemma__1(V_K,V_NA,V_evs),hAPP(c_Message_Omsg_OKey,V_K)))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_B,c_Event_Obad,tc_Message_Oagent)
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A)))))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_Spy__not__see__encrypted__key_0,axiom,
    ( ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_B,c_Event_Obad,tc_Message_Oagent)
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | c_in(c_Event_Oevent_ONotes(c_Message_Oagent_OSpy,c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(v_sko__NS__Shared__Mirabelle__XSpy__not__see__encrypted__key__1(V_K,V_NA,V_evs),hAPP(c_Message_Omsg_OKey,V_K)))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(V_K_H,c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_B__trusts__NS3_0,axiom,
    ( c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(v_sko__NS__Shared__Mirabelle__XB__trusts__NS3__1(V_A,V_B,V_K,V_evs),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A)))))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_B,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ) ).

cnf(cls_NS4__implies__NS3_0,axiom,
    ( c_in(c_Event_Oevent_OSays(v_sko__NS__Shared__Mirabelle__XNS4__implies__NS3__1(V_B,V_X,V_evs),V_B,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_ONonce(V_NB)),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_knows__imp__Says__Gets__Notes__initState_0,axiom,
    ( c_in(V_X,c_Event_OinitState(V_A),tc_Message_Omsg)
    | c_in(c_Event_Oevent_ONotes(V_A,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | c_in(c_Event_Oevent_OGets(V_A,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | c_in(c_Event_Oevent_OSays(V_A,c_Event_Osko__Event__Xknows__imp__Says__Gets__Notes__initState__1__1(V_A,V_X,V_evs),V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | V_A = c_Message_Oagent_OSpy
    | ~ c_in(V_X,c_Event_Oknows(V_A,V_evs),tc_Message_Omsg) ) ).

cnf(cls_B__trusts__NS5_0,axiom,
    ( c_in(c_Event_Oevent_OSays(V_A,V_B,c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NB),c_Message_Omsg_ONonce(V_NB)))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_B,c_Event_Obad,tc_Message_Oagent)
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | c_in(c_Event_Oevent_ONotes(c_Message_Oagent_OSpy,c_Message_Omsg_OMPair(v_sko__NS__Shared__Mirabelle__XB__trusts__NS5__1(V_K,V_evs),c_Message_Omsg_OMPair(v_sko__NS__Shared__Mirabelle__XB__trusts__NS5__2(V_K,V_evs),hAPP(c_Message_Omsg_OKey,V_K)))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NB),c_Message_Omsg_ONonce(V_NB))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ) ).

cnf(cls_subset__trans_0,axiom,
    ( c_lessequals(V_A,V_C,tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_B,V_C,tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_subset__refl_0,axiom,
    c_lessequals(V_A,V_A,tc_fun(T_a,tc_bool)) ).

cnf(cls_equalityE_0,axiom,
    c_lessequals(V_x,V_x,tc_fun(T_a,tc_bool)) ).

cnf(cls_order__trans_0,axiom,
    ( ~ class_Orderings_Opreorder(T_a)
    | c_lessequals(V_x,V_z,T_a)
    | ~ c_lessequals(V_y,V_z,T_a)
    | ~ c_lessequals(V_x,V_y,T_a) ) ).

cnf(cls_xt1_I6_J_0,axiom,
    ( ~ class_Orderings_Oorder(T_a)
    | c_lessequals(V_z,V_x,T_a)
    | ~ c_lessequals(V_z,V_y,T_a)
    | ~ c_lessequals(V_y,V_x,T_a) ) ).

cnf(cls_event_Osimps_I9_J_0,axiom,
    c_Event_Oevent_ONotes(V_agent_H,V_msg_H) != c_Event_Oevent_OGets(V_agent,V_msg) ).

cnf(cls_pubK__neq__shrK_0,axiom,
    c_Public_OshrK(V_A) != c_Public_OpublicKey(V_b,V_C) ).

cnf(cls_invKey_0,axiom,
    c_Message_OinvKey(c_Message_OinvKey(V_K)) = V_K ).

cnf(cls_insert__subset_2,axiom,
    ( c_lessequals(c_Set_Oinsert(V_x,V_A,T_a),V_B,tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool))
    | ~ c_in(V_x,V_B,T_a) ) ).

cnf(cls_insert__code_1,axiom,
    hBOOL(hAPP(c_Set_Oinsert(V_x,V_A,T_a),V_x)) ).

cnf(cls_image__insert_0,axiom,
    c_Set_Oimage(V_f,c_Set_Oinsert(V_a,V_B,T_b),T_b,T_a) = c_Set_Oinsert(hAPP(V_f,V_a),c_Set_Oimage(V_f,V_B,T_b,T_a),T_a) ).

cnf(cls_Issues__def_1,axiom,
    ( c_in(V_X,c_Message_Oparts(c_Set_Oinsert(v_sko__NS__Shared__Mirabelle__XIssues__def__1(V_A,V_B,V_X,V_evs),c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool)),tc_Message_Omsg)),tc_Message_Omsg)
    | ~ c_NS__Shared__Mirabelle_OIssues(V_A,V_B,V_X,V_evs) ) ).

cnf(cls_empty__not__insert_0,axiom,
    c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) != c_Set_Oinsert(V_a,V_A,T_a) ).

cnf(cls_subset__empty_1,axiom,
    c_lessequals(c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),tc_fun(T_a,tc_bool)) ).

cnf(cls_subset__empty_0,axiom,
    ( V_A = c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),tc_fun(T_a,tc_bool)) ) ).

cnf(cls_filter__replicate_1,axiom,
    ( c_List_Ofilter(V_P,c_List_Oreplicate(V_n,V_x,T_a),T_a) = c_List_Olist_ONil(T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_remove1__filter__not_0,axiom,
    ( c_List_Oremove1(V_x,c_List_Ofilter(V_P,V_xs,T_a),T_a) = c_List_Ofilter(V_P,V_xs,T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_doubleton__eq__iff_3,axiom,
    ( c_Set_Oinsert(V_a,c_Set_Oinsert(V_b,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) != c_Set_Oinsert(V_c,c_Set_Oinsert(V_d,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a)
    | V_b = V_c
    | V_b = V_d ) ).

cnf(cls_doubleton__eq__iff_2,axiom,
    ( c_Set_Oinsert(V_a,c_Set_Oinsert(V_b,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) != c_Set_Oinsert(V_c,c_Set_Oinsert(V_d,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a)
    | V_a = V_d
    | V_b = V_d ) ).

cnf(cls_doubleton__eq__iff_1,axiom,
    ( c_Set_Oinsert(V_a,c_Set_Oinsert(V_b,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) != c_Set_Oinsert(V_c,c_Set_Oinsert(V_d,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a)
    | V_b = V_c
    | V_a = V_c ) ).

cnf(cls_doubleton__eq__iff_0,axiom,
    ( c_Set_Oinsert(V_a,c_Set_Oinsert(V_b,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) != c_Set_Oinsert(V_c,c_Set_Oinsert(V_d,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a)
    | V_a = V_d
    | V_a = V_c ) ).

cnf(cls_event_Osimps_I3_J_0,axiom,
    ( c_Event_Oevent_ONotes(V_agent,V_msg) != c_Event_Oevent_ONotes(V_agent_H,V_msg_H)
    | V_agent = V_agent_H ) ).

cnf(cls_event_Osimps_I3_J_1,axiom,
    ( c_Event_Oevent_ONotes(V_agent,V_msg) != c_Event_Oevent_ONotes(V_agent_H,V_msg_H)
    | V_msg = V_msg_H ) ).

cnf(cls_parts__insert__subset_0,axiom,
    c_lessequals(c_Set_Oinsert(V_X,c_Message_Oparts(V_H),tc_Message_Omsg),c_Message_Oparts(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_event_Osimps_I8_J_0,axiom,
    c_Event_Oevent_OGets(V_agent,V_msg) != c_Event_Oevent_ONotes(V_agent_H,V_msg_H) ).

cnf(cls_order__antisym__conv_0,axiom,
    ( ~ class_Orderings_Oorder(T_a)
    | V_x = V_y
    | ~ c_lessequals(V_x,V_y,T_a)
    | ~ c_lessequals(V_y,V_x,T_a) ) ).

cnf(cls_order__antisym_0,axiom,
    ( ~ class_Orderings_Oorder(T_a)
    | V_x = V_y
    | ~ c_lessequals(V_y,V_x,T_a)
    | ~ c_lessequals(V_x,V_y,T_a) ) ).

cnf(cls_order__eq__iff_2,axiom,
    ( ~ class_Orderings_Oorder(T_a)
    | V_x = V_y
    | ~ c_lessequals(V_y,V_x,T_a)
    | ~ c_lessequals(V_x,V_y,T_a) ) ).

cnf(cls_set__eq__subset_2,axiom,
    ( V_A = V_B
    | ~ c_lessequals(V_B,V_A,tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_equalityI_0,axiom,
    ( V_A = V_B
    | ~ c_lessequals(V_B,V_A,tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_event_Osimps_I2_J_0,axiom,
    ( c_Event_Oevent_OGets(V_agent,V_msg) != c_Event_Oevent_OGets(V_agent_H,V_msg_H)
    | V_agent = V_agent_H ) ).

cnf(cls_event_Osimps_I2_J_1,axiom,
    ( c_Event_Oevent_OGets(V_agent,V_msg) != c_Event_Oevent_OGets(V_agent_H,V_msg_H)
    | V_msg = V_msg_H ) ).

cnf(cls_distinct__remove1_0,axiom,
    ( c_List_Odistinct(c_List_Oremove1(V_x,V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a) ) ).

cnf(cls_bot1E_0,axiom,
    ~ hBOOL(hAPP(c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),V_x)) ).

cnf(cls_msg_Osimps_I17_J_0,axiom,
    c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H) != c_Message_Omsg_OAgent(V_agent) ).

cnf(cls_shrK__neq__pubK_0,axiom,
    c_Public_OpublicKey(V_b,V_C) != c_Public_OshrK(V_A) ).

cnf(cls_filter__replicate_0,axiom,
    ( c_List_Ofilter(V_P,c_List_Oreplicate(V_n,V_x,T_a),T_a) = c_List_Oreplicate(V_n,V_x,T_a)
    | ~ hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_parts__insert__Agent_0,axiom,
    c_Message_Oparts(c_Set_Oinsert(c_Message_Omsg_OAgent(V_agt),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_OAgent(V_agt),c_Message_Oparts(V_H),tc_Message_Omsg) ).

cnf(cls_parts__insert__MPair_0,axiom,
    c_Message_Oparts(c_Set_Oinsert(c_Message_Omsg_OMPair(V_X,V_Y),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Oparts(c_Set_Oinsert(V_X,c_Set_Oinsert(V_Y,V_H,tc_Message_Omsg),tc_Message_Omsg)),tc_Message_Omsg) ).

cnf(cls_synth__insert_0,axiom,
    c_lessequals(c_Set_Oinsert(V_X,c_Message_Osynth(V_H),tc_Message_Omsg),c_Message_Osynth(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_subset__insertI_0,axiom,
    c_lessequals(V_B,c_Set_Oinsert(V_a,V_B,T_a),tc_fun(T_a,tc_bool)) ).

cnf(cls_msg_Osimps_I16_J_0,axiom,
    c_Message_Omsg_OAgent(V_agent) != c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H) ).

cnf(cls_insert__code_0,axiom,
    ( hBOOL(hAPP(V_A,V_x))
    | V_y = V_x
    | ~ hBOOL(hAPP(c_Set_Oinsert(V_y,V_A,T_a),V_x)) ) ).

cnf(cls_insert__absorb2_0,axiom,
    c_Set_Oinsert(V_x,c_Set_Oinsert(V_x,V_A,T_a),T_a) = c_Set_Oinsert(V_x,V_A,T_a) ).

cnf(cls_HPair__eq__MPair_1,axiom,
    ( c_Message_OHPair(V_X,V_Y) != c_Message_Omsg_OMPair(V_X_H,V_Y_H)
    | V_Y_H = V_Y ) ).

cnf(cls_distinct__dropWhile_0,axiom,
    ( c_List_Odistinct(c_List_OdropWhile(V_P,V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a) ) ).

cnf(cls_insert__not__empty_0,axiom,
    c_Set_Oinsert(V_a,V_A,T_a) != c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) ).

cnf(cls_initState__subset__knows_0,axiom,
    c_lessequals(c_Event_OinitState(V_A),c_Event_Oknows(V_A,V_evs),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_bot__least_0,axiom,
    ( ~ class_Orderings_Obot(T_a)
    | c_lessequals(c_Orderings_Obot__class_Obot(T_a),V_x,T_a) ) ).

cnf(cls_empty__subsetI_0,axiom,
    c_lessequals(c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),V_A,tc_fun(T_a,tc_bool)) ).

cnf(cls_used__nil__subset_0,axiom,
    c_lessequals(c_Event_Oused(c_List_Olist_ONil(tc_Event_Oevent)),c_Event_Oused(V_evs),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_empty__is__image_0,axiom,
    ( c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) != c_Set_Oimage(V_f,V_A,T_b,T_a)
    | V_A = c_Orderings_Obot__class_Obot(tc_fun(T_b,tc_bool)) ) ).

cnf(cls_used__parts__subset__parts_0,axiom,
    ( c_lessequals(c_Message_Oparts(c_Set_Oinsert(V_X,c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool)),tc_Message_Omsg)),c_Event_Oused(V_evs),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(V_X,c_Event_Oused(V_evs),tc_Message_Omsg) ) ).

cnf(cls_replicate__eq__replicate_0,axiom,
    ( c_List_Oreplicate(V_m,V_x,T_a) != c_List_Oreplicate(V_n,V_y,T_a)
    | V_m = V_n ) ).

cnf(cls_invKey__eq_0,axiom,
    ( c_Message_OinvKey(V_K) != c_Message_OinvKey(V_K_H)
    | V_K = V_K_H ) ).

cnf(cls_subset__insertI2_0,axiom,
    ( c_lessequals(V_A,c_Set_Oinsert(V_b,V_B,T_a),tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_insert__subset_1,axiom,
    ( c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool))
    | ~ c_lessequals(c_Set_Oinsert(V_x,V_A,T_a),V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_invKey__shrK_0,axiom,
    c_Message_OinvKey(c_Public_OshrK(V_A)) = c_Public_OshrK(V_A) ).

cnf(cls_image__subset__iff_0,axiom,
    ( c_in(hAPP(V_f,V_x),V_B,T_a)
    | ~ c_in(V_x,V_A,T_b)
    | ~ c_lessequals(c_Set_Oimage(V_f,V_A,T_b,T_a),V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_privateKey__neq__publicKey_0,axiom,
    c_Message_OinvKey(c_Public_OpublicKey(V_b,V_A)) != c_Public_OpublicKey(V_c,V_A_H) ).

cnf(cls_singletonE_0,axiom,
    ( V_b = V_a
    | ~ c_in(V_b,c_Set_Oinsert(V_a,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) ) ).

cnf(cls_publicKey__inject_1,axiom,
    ( c_Public_OpublicKey(V_b,V_A) != c_Public_OpublicKey(V_c,V_A_H)
    | V_A = V_A_H ) ).

cnf(cls_publicKey__inject_0,axiom,
    ( c_Public_OpublicKey(V_b,V_A) != c_Public_OpublicKey(V_c,V_A_H)
    | V_b = V_c ) ).

cnf(cls_pushes_I12_J_0,axiom,
    c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K),c_Set_Oinsert(c_Message_Omsg_OMPair(V_X_H,V_Y),V_A,tc_Message_Omsg),tc_Message_Omsg) = c_Set_Oinsert(c_Message_Omsg_OMPair(V_X_H,V_Y),c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K),V_A,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_insert__commute_0,axiom,
    c_Set_Oinsert(V_x,c_Set_Oinsert(V_y,V_A,T_a),T_a) = c_Set_Oinsert(V_y,c_Set_Oinsert(V_x,V_A,T_a),T_a) ).

cnf(cls_HPair__eq_1,axiom,
    ( c_Message_OHPair(V_X_H,V_Y_H) != c_Message_OHPair(V_X,V_Y)
    | V_Y_H = V_Y ) ).

cnf(cls_HPair__eq_0,axiom,
    ( c_Message_OHPair(V_X_H,V_Y_H) != c_Message_OHPair(V_X,V_Y)
    | V_X_H = V_X ) ).

cnf(cls_doubleton__eq__iff_4,axiom,
    c_Set_Oinsert(V_xa,c_Set_Oinsert(V_x,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) = c_Set_Oinsert(V_x,c_Set_Oinsert(V_xa,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a),T_a) ).

cnf(cls_image__empty_0,axiom,
    c_Set_Oimage(V_f,c_Orderings_Obot__class_Obot(tc_fun(T_b,tc_bool)),T_b,T_a) = c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) ).

cnf(cls_priK__in__initState_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(c_Public_OpublicKey(V_b,V_A))),c_Event_OinitState(V_A),tc_Message_Omsg) ).

cnf(cls_filter__is__subset_0,axiom,
    c_lessequals(c_List_Oset(c_List_Ofilter(V_P,V_xs,T_a),T_a),c_List_Oset(V_xs,T_a),tc_fun(T_a,tc_bool)) ).

cnf(cls_singleton__inject_0,axiom,
    ( c_Set_Oinsert(V_a,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a) != c_Set_Oinsert(V_b,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a)
    | V_a = V_b ) ).

cnf(cls_pushes_I8_J_0,axiom,
    c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K),c_Set_Oinsert(c_Message_Omsg_OAgent(V_C),V_A,tc_Message_Omsg),tc_Message_Omsg) = c_Set_Oinsert(c_Message_Omsg_OAgent(V_C),c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K),V_A,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_msg_Osimps_I6_J_0,axiom,
    ( c_Message_Omsg_OMPair(V_msg1,V_msg2) != c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H)
    | V_msg1 = V_msg1_H ) ).

cnf(cls_msg_Osimps_I6_J_1,axiom,
    ( c_Message_Omsg_OMPair(V_msg1,V_msg2) != c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H)
    | V_msg2 = V_msg2_H ) ).

cnf(cls_distinct1__rotate_1,axiom,
    ( c_List_Odistinct(c_List_Orotate1(V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a) ) ).

cnf(cls_distinct1__rotate_0,axiom,
    ( c_List_Odistinct(V_xs,T_a)
    | ~ c_List_Odistinct(c_List_Orotate1(V_xs,T_a),T_a) ) ).

cnf(cls_distinct__filter_0,axiom,
    ( c_List_Odistinct(c_List_Ofilter(V_P,V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a) ) ).

cnf(cls_comm__monoid__add_Ononempty__iff_2,axiom,
    ( c_Set_Oinsert(V_x,V_xa,T_a) != c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool))
    | c_in(V_x,V_xa,T_a) ) ).

cnf(cls_insert__subset_0,axiom,
    ( c_in(V_x,V_B,T_a)
    | ~ c_lessequals(c_Set_Oinsert(V_x,V_A,T_a),V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_insert__code_2,axiom,
    ( hBOOL(hAPP(c_Set_Oinsert(V_y,V_A,T_a),V_x))
    | ~ hBOOL(hAPP(V_A,V_x)) ) ).

cnf(cls_insert__image_0,axiom,
    ( c_Set_Oinsert(hAPP(V_f,V_x),c_Set_Oimage(V_f,V_A,T_a,T_b),T_b) = c_Set_Oimage(V_f,V_A,T_a,T_b)
    | ~ c_in(V_x,V_A,T_a) ) ).

cnf(cls_subset__insert__iff_2,axiom,
    ( c_lessequals(V_A,c_Set_Oinsert(V_x,V_B,T_a),tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool))
    | c_in(V_x,V_A,T_a) ) ).

cnf(cls_subset__insert__iff_1,axiom,
    ( c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool))
    | c_in(V_x,V_A,T_a)
    | ~ c_lessequals(V_A,c_Set_Oinsert(V_x,V_B,T_a),tc_fun(T_a,tc_bool)) ) ).

cnf(cls_subset__insert_1,axiom,
    ( c_lessequals(V_A,c_Set_Oinsert(V_x,V_B,T_a),tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool))
    | c_in(V_x,V_A,T_a) ) ).

cnf(cls_subset__insert_0,axiom,
    ( c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_A,c_Set_Oinsert(V_x,V_B,T_a),tc_fun(T_a,tc_bool))
    | c_in(V_x,V_A,T_a) ) ).

cnf(cls_analz__insert__Agent_0,axiom,
    c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_OAgent(V_agt),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_OAgent(V_agt),c_Message_Oanalz(V_H),tc_Message_Omsg) ).

cnf(cls_analz__insert__MPair_0,axiom,
    c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_OMPair(V_X,V_Y),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Oanalz(c_Set_Oinsert(V_X,c_Set_Oinsert(V_Y,V_H,tc_Message_Omsg),tc_Message_Omsg)),tc_Message_Omsg) ).

cnf(cls_empty__is__image_1,axiom,
    c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) = c_Set_Oimage(V_f,c_Orderings_Obot__class_Obot(tc_fun(T_b,tc_bool)),T_b,T_a) ).

cnf(cls_set__remove1__subset_0,axiom,
    c_lessequals(c_List_Oset(c_List_Oremove1(V_x,V_xs,T_a),T_a),c_List_Oset(V_xs,T_a),tc_fun(T_a,tc_bool)) ).

cnf(cls_MPair__eq__HPair_1,axiom,
    ( c_Message_Omsg_OMPair(V_X_H,V_Y_H) != c_Message_OHPair(V_X,V_Y)
    | V_Y_H = V_Y ) ).

cnf(cls_analz__image__freshK__simps_I56_J_0,axiom,
    c_Set_Oinsert(hAPP(V_f,V_a),c_Set_Oimage(V_f,V_B,T_b,T_a),T_a) = c_Set_Oimage(V_f,c_Set_Oinsert(V_a,V_B,T_b),T_b,T_a) ).

cnf(cls_shrK__injective_0,axiom,
    ( c_Public_OshrK(V_x) != c_Public_OshrK(V_y)
    | V_x = V_y ) ).

cnf(cls_pushes_I5_J_0,axiom,
    c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),c_Set_Oinsert(c_Message_Omsg_OMPair(V_X,V_Y),V_A,tc_Message_Omsg),tc_Message_Omsg) = c_Set_Oinsert(c_Message_Omsg_OMPair(V_X,V_Y),c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),V_A,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_privateKey__into__used_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(c_Public_OpublicKey(V_b,V_A))),c_Event_Oused(V_evs),tc_Message_Omsg) ).

cnf(cls_le__funD_0,axiom,
    ( ~ class_HOL_Oord(T_b)
    | c_lessequals(hAPP(V_f,V_x),hAPP(V_g,V_x),T_b)
    | ~ c_lessequals(V_f,V_g,tc_fun(T_a,T_b)) ) ).

cnf(cls_ns__sharedp_ONS1_0,axiom,
    ( c_NS__Shared__Mirabelle_Ons__sharedp(c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,c_Message_Oagent_OServer,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_ONonce(V_NA)))),V_evs1,tc_Event_Oevent))
    | c_in(c_Message_Omsg_ONonce(V_NA),c_Event_Oused(V_evs1),tc_Message_Omsg)
    | ~ c_NS__Shared__Mirabelle_Ons__sharedp(V_evs1) ) ).

cnf(cls_insert__iff_2,axiom,
    ( c_in(V_a,c_Set_Oinsert(V_b,V_A,T_a),T_a)
    | ~ c_in(V_a,V_A,T_a) ) ).

cnf(cls_insertCI_0,axiom,
    ( c_in(V_a,c_Set_Oinsert(V_b,V_B,T_a),T_a)
    | ~ c_in(V_a,V_B,T_a) ) ).

cnf(cls_subset__iff_0,axiom,
    ( c_in(V_t,V_B,T_a)
    | ~ c_in(V_t,V_A,T_a)
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_subset__image__iff_2,axiom,
    ( ~ c_lessequals(V_x,V_A,tc_fun(T_b,tc_bool))
    | c_lessequals(c_Set_Oimage(V_f,V_x,T_b,T_a),c_Set_Oimage(V_f,V_A,T_b,T_a),tc_fun(T_a,tc_bool)) ) ).

cnf(cls_used__Gets_0,axiom,
    c_Event_Oused(c_List_Olist_OCons(c_Event_Oevent_OGets(V_A,V_X),V_evs,tc_Event_Oevent)) = c_Event_Oused(V_evs) ).

cnf(cls_insert__mono_0,axiom,
    ( c_lessequals(c_Set_Oinsert(V_a,V_C,T_a),c_Set_Oinsert(V_a,V_D,T_a),tc_fun(T_a,tc_bool))
    | ~ c_lessequals(V_C,V_D,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_shrK__neq__priK_0,axiom,
    c_Message_OinvKey(c_Public_OpublicKey(V_b,V_C)) != c_Public_OshrK(V_A) ).

cnf(cls_analz__insert_0,axiom,
    c_lessequals(c_Set_Oinsert(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg),c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_msg_Osimps_I1_J_0,axiom,
    ( c_Message_Omsg_OAgent(V_agent) != c_Message_Omsg_OAgent(V_agent_H)
    | V_agent = V_agent_H ) ).

cnf(cls_publicKey__neq__privateKey_0,axiom,
    c_Public_OpublicKey(V_c,V_A_H) != c_Message_OinvKey(c_Public_OpublicKey(V_b,V_A)) ).

cnf(cls_linorder__linear_0,axiom,
    ( ~ class_Orderings_Olinorder(T_a)
    | c_lessequals(V_y,V_x,T_a)
    | c_lessequals(V_x,V_y,T_a) ) ).

cnf(cls_ns__sharedp_OOops_0,axiom,
    ( c_NS__Shared__Mirabelle_Ons__sharedp(c_List_Olist_OCons(c_Event_Oevent_ONotes(c_Message_Oagent_OSpy,c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NA),c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NB),hAPP(c_Message_Omsg_OKey,V_K)))),V_evso,tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NA),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evso,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(V_B,V_A,c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_ONonce(V_NB))),c_List_Oset(V_evso,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_NS__Shared__Mirabelle_Ons__sharedp(V_evso) ) ).

cnf(cls_append__butlast__last__id_0,axiom,
    ( c_List_Oappend(c_List_Obutlast(V_xs,T_a),c_List_Olist_OCons(c_List_Olast(V_xs,T_a),c_List_Olist_ONil(T_a),T_a),T_a) = V_xs
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_ns__sharedp_ONS3_0,axiom,
    ( c_NS__Shared__Mirabelle_Ons__sharedp(c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,V_B,V_X),V_evs3,tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(V_A,c_Message_Oagent_OServer,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_ONonce(V_NA)))),c_List_Oset(V_evs3,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(V_S,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NA),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs3,tc_Event_Oevent),tc_Event_Oevent)
    | V_A = c_Message_Oagent_OServer
    | ~ c_NS__Shared__Mirabelle_Ons__sharedp(V_evs3) ) ).

cnf(cls_parts__knows__Spy__subset__used_0,axiom,
    c_lessequals(c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),c_Event_Oused(V_evs),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_Notes__imp__used_0,axiom,
    ( c_in(V_X,c_Event_Oused(V_evs),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_ONotes(V_A,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_knows__Spy__subset__knows__Spy__Notes_0,axiom,
    c_lessequals(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A,V_X),V_evs,tc_Event_Oevent)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_knows__Spy__subset__knows__Spy__Gets_0,axiom,
    c_lessequals(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_OGets(V_A,V_X),V_evs,tc_Event_Oevent)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_knows__Gets_0,axiom,
    ( c_Event_Oknows(V_A,c_List_Olist_OCons(c_Event_Oevent_OGets(V_A,V_X),V_evs,tc_Event_Oevent)) = c_Set_Oinsert(V_X,c_Event_Oknows(V_A,V_evs),tc_Message_Omsg)
    | V_A = c_Message_Oagent_OSpy ) ).

cnf(cls_ns__shared_ONS1_0,axiom,
    ( c_in(c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,c_Message_Oagent_OServer,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_ONonce(V_NA)))),V_evs1,tc_Event_Oevent),c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(c_Message_Omsg_ONonce(V_NA),c_Event_Oused(V_evs1),tc_Message_Omsg)
    | ~ c_in(V_evs1,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_Issues__def_0,axiom,
    ( c_in(c_Event_Oevent_OSays(V_A,V_B,v_sko__NS__Shared__Mirabelle__XIssues__def__1(V_A,V_B,V_X,V_evs)),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_NS__Shared__Mirabelle_OIssues(V_A,V_B,V_X,V_evs) ) ).

cnf(cls_Says__Server__message__form_1,axiom,
    ( V_X = c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A)))
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(V_K_H,c_Message_Omsg_OMPair(V_N,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_unique__session__keys_3,axiom,
    ( V_X = V_X_H
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A_H,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A_H),c_Message_Omsg_OMPair(V_NA_H,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B_H),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X_H))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_unique__session__keys_2,axiom,
    ( V_B = V_B_H
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A_H,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A_H),c_Message_Omsg_OMPair(V_NA_H,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B_H),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X_H))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_unique__session__keys_1,axiom,
    ( V_NA = V_NA_H
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A_H,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A_H),c_Message_Omsg_OMPair(V_NA_H,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B_H),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X_H))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_unique__session__keys_0,axiom,
    ( V_A = V_A_H
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A_H,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A_H),c_Message_Omsg_OMPair(V_NA_H,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B_H),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X_H))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_Says__Server__message__form_2,axiom,
    ( V_K_H = c_Public_OshrK(V_A)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(V_K_H,c_Message_Omsg_OMPair(V_N,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_filter__id__conv_0,axiom,
    ( c_List_Ofilter(V_P,V_xs,T_a) != V_xs
    | hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_notin__set__remove1_0,axiom,
    ( ~ c_in(V_x,c_List_Oset(c_List_Oremove1(V_y,V_xs,T_a),T_a),T_a)
    | c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_in__set__replicateD_0,axiom,
    ( V_x = V_y
    | ~ c_in(V_x,c_List_Oset(c_List_Oreplicate(V_n,V_y,T_a),T_a),T_a) ) ).

cnf(cls_in__set__butlastD_0,axiom,
    ( c_in(V_x,c_List_Oset(V_xs,T_a),T_a)
    | ~ c_in(V_x,c_List_Oset(c_List_Obutlast(V_xs,T_a),T_a),T_a) ) ).

cnf(cls_in__set__remove1_0,axiom,
    ( c_in(V_a,c_List_Oset(V_xs,T_a),T_a)
    | ~ c_in(V_a,c_List_Oset(c_List_Oremove1(V_b,V_xs,T_a),T_a),T_a)
    | V_a = V_b ) ).

cnf(cls_in__set__remove1_1,axiom,
    ( c_in(V_a,c_List_Oset(c_List_Oremove1(V_b,V_xs,T_a),T_a),T_a)
    | ~ c_in(V_a,c_List_Oset(V_xs,T_a),T_a)
    | V_a = V_b ) ).

cnf(cls_last_Osimps_1,axiom,
    ( c_List_Olast(c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olast(V_xs,T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_butlast_Osimps_I2_J_0,axiom,
    c_List_Obutlast(c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_last_Osimps_0,axiom,
    c_List_Olast(c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) = V_x ).

cnf(cls_butlast_Osimps_I2_J_1,axiom,
    ( c_List_Obutlast(c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olist_OCons(V_x,c_List_Obutlast(V_xs,T_a),T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_set__subset__Cons_0,axiom,
    c_lessequals(c_List_Oset(V_xs,T_a),c_List_Oset(c_List_Olist_OCons(V_x,V_xs,T_a),T_a),tc_fun(T_a,tc_bool)) ).

cnf(cls_List_Oset_Osimps_I2_J_0,axiom,
    c_List_Oset(c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_Set_Oinsert(V_x,c_List_Oset(V_xs,T_a),T_a) ).

cnf(cls_set__empty_1,axiom,
    c_List_Oset(c_List_Olist_ONil(T_a),T_a) = c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) ).

cnf(cls_set__empty2_0,axiom,
    ( c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) != c_List_Oset(V_xs,T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_set__empty2_1,axiom,
    c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)) = c_List_Oset(c_List_Olist_ONil(T_a),T_a) ).

cnf(cls_set__empty_0,axiom,
    ( c_List_Oset(V_xs,T_a) != c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool))
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_parts__emptyE_0,axiom,
    ~ c_in(V_X,c_Message_Oparts(c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool))),tc_Message_Omsg) ).

cnf(cls_parts__trans_0,axiom,
    ( c_in(V_X,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_lessequals(V_G,c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(V_X,c_Message_Oparts(V_G),tc_Message_Omsg) ) ).

cnf(cls_parts__cut__eq_0,axiom,
    ( c_Message_Oparts(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)) = c_Message_Oparts(V_H)
    | ~ c_in(V_X,c_Message_Oparts(V_H),tc_Message_Omsg) ) ).

cnf(cls_parts_OFst_0,axiom,
    ( c_in(V_X,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Oparts(V_H),tc_Message_Omsg) ) ).

cnf(cls_parts_OSnd_0,axiom,
    ( c_in(V_Y,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Oparts(V_H),tc_Message_Omsg) ) ).

cnf(cls_parts__insertI_0,axiom,
    ( c_in(V_c,c_Message_Oparts(c_Set_Oinsert(V_a,V_G,tc_Message_Omsg)),tc_Message_Omsg)
    | ~ c_in(V_c,c_Message_Oparts(V_G),tc_Message_Omsg) ) ).

cnf(cls_append__eq__Cons__conv_3,axiom,
    ( c_List_Oappend(V_ys,V_zs,T_a) != c_List_Olist_OCons(V_x,V_xs,T_a)
    | c_List_Oappend(c_List_Osko__List__Xappend__eq__Cons__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),V_zs,T_a) = V_xs
    | V_zs = c_List_Olist_OCons(V_x,V_xs,T_a) ) ).

cnf(cls_Cons__eq__append__conv_2,axiom,
    ( c_List_Olist_OCons(V_x,V_xs,T_a) != c_List_Oappend(V_ys,V_zs,T_a)
    | c_List_Olist_OCons(V_x,c_List_Osko__List__XCons__eq__append__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),T_a) = V_ys
    | c_List_Olist_OCons(V_x,V_xs,T_a) = V_zs ) ).

cnf(cls_split__list__last__prop__iff_6,axiom,
    ( hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a)))
    | hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,V_xb,T_a)))
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_split__list__first__prop__iff_6,axiom,
    ( hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a)))
    | hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,V_x,T_a)))
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_append__eq__Cons__conv_2,axiom,
    ( c_List_Oappend(V_ys,V_zs,T_a) != c_List_Olist_OCons(V_x,V_xs,T_a)
    | V_ys = c_List_Olist_OCons(V_x,c_List_Osko__List__Xappend__eq__Cons__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),T_a)
    | V_zs = c_List_Olist_OCons(V_x,V_xs,T_a) ) ).

cnf(cls_Cons__eq__append__conv_3,axiom,
    ( c_List_Olist_OCons(V_x,V_xs,T_a) != c_List_Oappend(V_ys,V_zs,T_a)
    | V_xs = c_List_Oappend(c_List_Osko__List__XCons__eq__append__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),V_zs,T_a)
    | c_List_Olist_OCons(V_x,V_xs,T_a) = V_zs ) ).

cnf(cls_replicate__app__Cons__same_0,axiom,
    c_List_Oappend(c_List_Oreplicate(V_n,V_x,T_a),c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olist_OCons(V_x,c_List_Oappend(c_List_Oreplicate(V_n,V_x,T_a),V_xs,T_a),T_a) ).

cnf(cls_butlast__append_0,axiom,
    c_List_Obutlast(c_List_Oappend(V_xs,c_List_Olist_ONil(T_a),T_a),T_a) = c_List_Obutlast(V_xs,T_a) ).

cnf(cls_last__append_1,axiom,
    ( c_List_Olast(c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Olast(V_ys,T_a)
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_last__append_0,axiom,
    c_List_Olast(c_List_Oappend(V_xs,c_List_Olist_ONil(T_a),T_a),T_a) = c_List_Olast(V_xs,T_a) ).

cnf(cls_butlast__append_1,axiom,
    ( c_List_Obutlast(c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(V_xs,c_List_Obutlast(V_ys,T_a),T_a)
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_analz__insertI_0,axiom,
    ( c_in(V_c,c_Message_Oanalz(c_Set_Oinsert(V_a,V_G,tc_Message_Omsg)),tc_Message_Omsg)
    | ~ c_in(V_c,c_Message_Oanalz(V_G),tc_Message_Omsg) ) ).

cnf(cls_analz__insert__eq_0,axiom,
    ( c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)) = c_Message_Oanalz(V_H)
    | ~ c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_analz__cut_0,axiom,
    ( c_in(V_Y,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(V_Y,c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_Message_Omsg) ) ).

cnf(cls_analz__trans_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_lessequals(V_G,c_Message_Oanalz(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(V_X,c_Message_Oanalz(V_G),tc_Message_Omsg) ) ).

cnf(cls_analz_OFst_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_analz_OSnd_0,axiom,
    ( c_in(V_Y,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_parts__insert__Crypt_0,axiom,
    c_Message_Oparts(c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oparts(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_Message_Omsg) ).

cnf(cls_analz__Crypt__if_1,axiom,
    ( c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oanalz(V_H),tc_Message_Omsg)
    | c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(V_K)),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_analz__Crypt__if_0,axiom,
    ( c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(V_K)),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_parts__image__Key_0,axiom,
    c_Message_Oparts(c_Set_Oimage(c_Message_Omsg_OKey,V_N,tc_nat,tc_Message_Omsg)) = c_Set_Oimage(c_Message_Omsg_OKey,V_N,tc_nat,tc_Message_Omsg) ).

cnf(cls_parts__insert__Key_0,axiom,
    c_Message_Oparts(c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),V_H,tc_Message_Omsg)) = c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oparts(V_H),tc_Message_Omsg) ).

cnf(cls_analz__subset__parts_0,axiom,
    c_lessequals(c_Message_Oanalz(V_H),c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_Agent__synth_0,axiom,
    c_in(c_Message_Omsg_OAgent(V_A),c_Message_Osynth(V_H),tc_Message_Omsg) ).

cnf(cls_synth_OAgent_0,axiom,
    c_in(c_Message_Omsg_OAgent(V_agt),c_Message_Osynth(V_H),tc_Message_Omsg) ).

cnf(cls_synth__cut_0,axiom,
    ( c_in(V_Y,c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(V_Y,c_Message_Osynth(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_Message_Omsg) ) ).

cnf(cls_MPair__synth_0,axiom,
    ( c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg)
    | c_in(c_Message_Omsg_OMPair(V_X,V_Y),V_H,tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_MPair__synth_1,axiom,
    ( c_in(V_Y,c_Message_Osynth(V_H),tc_Message_Omsg)
    | c_in(c_Message_Omsg_OMPair(V_X,V_Y),V_H,tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_synth_OMPair_0,axiom,
    ( c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(V_Y,c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_synth__trans_0,axiom,
    ( c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_lessequals(V_G,c_Message_Osynth(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(V_X,c_Message_Osynth(V_G),tc_Message_Omsg) ) ).

cnf(cls_pushes_I6_J_0,axiom,
    c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K_H),V_A,tc_Message_Omsg),tc_Message_Omsg) = c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K_H),c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),V_A,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_synth__analz__insert__eq_0,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(V_G),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(c_Set_Oinsert(V_X,V_G,tc_Message_Omsg)),tc_Message_Omsg)
    | ~ c_lessequals(V_H,V_G,tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_synth__analz__insert__eq_1,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(c_Set_Oinsert(V_X,V_G,tc_Message_Omsg)),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(V_G),tc_Message_Omsg)
    | ~ c_lessequals(V_H,V_G,tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_analz__image__Key_0,axiom,
    c_Message_Oanalz(c_Set_Oimage(c_Message_Omsg_OKey,V_N,tc_nat,tc_Message_Omsg)) = c_Set_Oimage(c_Message_Omsg_OKey,V_N,tc_nat,tc_Message_Omsg) ).

cnf(cls_parts__insert__Nonce_0,axiom,
    c_Message_Oparts(c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),c_Message_Oparts(V_H),tc_Message_Omsg) ).

cnf(cls_lists_ONil_0,axiom,
    c_in(c_List_Olist_ONil(T_a),c_List_Olists(V_A,T_a),tc_List_Olist(T_a)) ).

cnf(cls_synth__analz__mono_0,axiom,
    ( c_lessequals(c_Message_Osynth(c_Message_Oanalz(V_G)),c_Message_Osynth(c_Message_Oanalz(V_H)),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(V_G,V_H,tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_pushes_I9_J_0,axiom,
    c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K),c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),V_A,tc_Message_Omsg),tc_Message_Omsg) = c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),c_Set_Oinsert(c_Message_Omsg_OCrypt(V_X,V_K),V_A,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_pushes_I2_J_0,axiom,
    c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),V_A,tc_Message_Omsg),tc_Message_Omsg) = c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),c_Set_Oinsert(hAPP(c_Message_Omsg_OKey,V_K),V_A,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_analz__insert__Nonce_0,axiom,
    c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),V_H,tc_Message_Omsg)) = c_Set_Oinsert(c_Message_Omsg_ONonce(V_N),c_Message_Oanalz(V_H),tc_Message_Omsg) ).

cnf(cls_append__in__lists__conv_2,axiom,
    ( c_in(c_List_Oappend(V_xs,V_ys,T_a),c_List_Olists(V_A,T_a),tc_List_Olist(T_a))
    | ~ c_in(V_ys,c_List_Olists(V_A,T_a),tc_List_Olist(T_a))
    | ~ c_in(V_xs,c_List_Olists(V_A,T_a),tc_List_Olist(T_a)) ) ).

cnf(cls_append__in__lists__conv_0,axiom,
    ( c_in(V_xs,c_List_Olists(V_A,T_a),tc_List_Olist(T_a))
    | ~ c_in(c_List_Oappend(V_xs,V_ys,T_a),c_List_Olists(V_A,T_a),tc_List_Olist(T_a)) ) ).

cnf(cls_append__in__lists__conv_1,axiom,
    ( c_in(V_ys,c_List_Olists(V_A,T_a),tc_List_Olist(T_a))
    | ~ c_in(c_List_Oappend(V_xs,V_ys,T_a),c_List_Olists(V_A,T_a),tc_List_Olist(T_a)) ) ).

cnf(cls_takeWhile__dropWhile__id_0,axiom,
    c_List_Oappend(c_List_OtakeWhile(V_P,V_xs,T_a),c_List_OdropWhile(V_P,V_xs,T_a),T_a) = V_xs ).

cnf(cls_takeWhile__append2_1,axiom,
    ( c_List_OtakeWhile(V_P,c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(V_xs,c_List_OtakeWhile(V_P,V_ys,T_a),T_a)
    | ~ hBOOL(hAPP(V_P,c_List_Osko__List__XtakeWhile__append2__1__1(V_P,V_xs,T_a))) ) ).

cnf(cls_ns__shared_OOops_0,axiom,
    ( c_in(c_List_Olist_OCons(c_Event_Oevent_ONotes(c_Message_Oagent_OSpy,c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NA),c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NB),hAPP(c_Message_Omsg_OKey,V_K)))),V_evso,tc_Event_Oevent),c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NA),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evso,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(V_B,V_A,c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_ONonce(V_NB))),c_List_Oset(V_evso,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(V_evso,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_knows__subset__knows__Cons_0,axiom,
    c_lessequals(c_Event_Oknows(V_A,V_evs),c_Event_Oknows(V_A,c_List_Olist_OCons(V_e,V_evs,tc_Event_Oevent)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_Server__not__bad_0,axiom,
    ~ c_in(c_Message_Oagent_OServer,c_Event_Obad,tc_Message_Oagent) ).

cnf(cls_knows__Nil_0,axiom,
    c_Event_Oknows(V_A,c_List_Olist_ONil(tc_Event_Oevent)) = c_Event_OinitState(V_A) ).

cnf(cls_ns__shared_ONS3_0,axiom,
    ( c_in(c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,V_B,V_X),V_evs3,tc_Event_Oevent),c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(V_A,c_Message_Oagent_OServer,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_ONonce(V_NA)))),c_List_Oset(V_evs3,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Event_Oevent_OSays(V_S,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NA),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs3,tc_Event_Oevent),tc_Event_Oevent)
    | V_A = c_Message_Oagent_OServer
    | ~ c_in(V_evs3,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_Oops__parts__spies_0,axiom,
    ( c_in(V_K,c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(V_B,c_Message_Omsg_OMPair(V_K,V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_knows__Spy__Notes_0,axiom,
    ( c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A,V_X),V_evs,tc_Event_Oevent)) = c_Set_Oinsert(V_X,c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent) ) ).

cnf(cls_distinct_Osimps_I2_J_2,axiom,
    ( c_List_Odistinct(c_List_Olist_OCons(V_x,V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a)
    | c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_distinct_Osimps_I2_J_0,axiom,
    ( ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a)
    | ~ c_List_Odistinct(c_List_Olist_OCons(V_x,V_xs,T_a),T_a) ) ).

cnf(cls_set__rev__mp_0,axiom,
    ( c_in(V_x,V_B,T_a)
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool))
    | ~ c_in(V_x,V_A,T_a) ) ).

cnf(cls_subsetD_0,axiom,
    ( c_in(V_c,V_B,T_a)
    | ~ c_in(V_c,V_A,T_a)
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_set__mp_0,axiom,
    ( c_in(V_x,V_B,T_a)
    | ~ c_in(V_x,V_A,T_a)
    | ~ c_lessequals(V_A,V_B,tc_fun(T_a,tc_bool)) ) ).

cnf(cls_ex__in__conv_0,axiom,
    ~ c_in(V_x,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a) ).

cnf(cls_ball__empty_0,axiom,
    ( hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a) ) ).

cnf(cls_empty__iff_0,axiom,
    ~ c_in(V_c,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a) ).

cnf(cls_emptyE_0,axiom,
    ~ c_in(V_a,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a) ).

cnf(cls_insertE_0,axiom,
    ( c_in(V_a,V_A,T_a)
    | V_a = V_b
    | ~ c_in(V_a,c_Set_Oinsert(V_b,V_A,T_a),T_a) ) ).

cnf(cls_insert__iff_1,axiom,
    c_in(V_x,c_Set_Oinsert(V_x,V_A,T_a),T_a) ).

cnf(cls_insertI1_0,axiom,
    c_in(V_a,c_Set_Oinsert(V_a,V_B,T_a),T_a) ).

cnf(cls_insertCI_1,axiom,
    c_in(V_x,c_Set_Oinsert(V_x,V_B,T_a),T_a) ).

cnf(cls_bex__empty_0,axiom,
    ( ~ hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_Orderings_Obot__class_Obot(tc_fun(T_a,tc_bool)),T_a) ) ).

cnf(cls_insert__ident_0,axiom,
    ( c_Set_Oinsert(V_x,V_A,T_a) != c_Set_Oinsert(V_x,V_B,T_a)
    | c_in(V_x,V_B,T_a)
    | c_in(V_x,V_A,T_a)
    | V_A = V_B ) ).

cnf(cls_insert__absorb_0,axiom,
    ( c_Set_Oinsert(V_a,V_A,T_a) = V_A
    | ~ c_in(V_a,V_A,T_a) ) ).

cnf(cls_rev__image__eqI_0,axiom,
    ( ~ c_in(V_x,V_A,T_aa)
    | c_in(hAPP(V_f,V_x),c_Set_Oimage(V_f,V_A,T_aa,T_a),T_a) ) ).

cnf(cls_image__iff_2,axiom,
    ( ~ c_in(V_x,V_A,T_b)
    | c_in(hAPP(V_f,V_x),c_Set_Oimage(V_f,V_A,T_b,T_a),T_a) ) ).

cnf(cls_image__eqI_0,axiom,
    ( c_in(hAPP(V_f,V_x),c_Set_Oimage(V_f,V_A,T_b,T_a),T_a)
    | ~ c_in(V_x,V_A,T_b) ) ).

cnf(cls_imageI_0,axiom,
    ( c_in(hAPP(V_f,V_x),c_Set_Oimage(V_f,V_A,T_a,T_b),T_b)
    | ~ c_in(V_x,V_A,T_a) ) ).

cnf(cls_image__image_0,axiom,
    c_Set_Oimage(V_f,c_Set_Oimage(V_g,V_A,T_c,T_b),T_b,T_a) = c_Set_Oimage(c_COMBB(V_f,V_g,T_b,T_a,T_c),V_A,T_c,T_a) ).

cnf(cls_filter_Osimps_I2_J_1,axiom,
    ( c_List_Ofilter(V_P,c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Ofilter(V_P,V_xs,T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_dropWhile_Osimps_I2_J_1,axiom,
    ( c_List_OdropWhile(V_P,c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olist_OCons(V_x,V_xs,T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_dropWhile_Osimps_I2_J_0,axiom,
    ( c_List_OdropWhile(V_P,c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_OdropWhile(V_P,V_xs,T_a)
    | ~ hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_remove1_Osimps_I2_J_1,axiom,
    ( c_List_Oremove1(V_x,c_List_Olist_OCons(V_y,V_xs,T_a),T_a) = c_List_Olist_OCons(V_y,c_List_Oremove1(V_x,V_xs,T_a),T_a)
    | V_x = V_y ) ).

cnf(cls_dropWhile__eq__Cons__conv_1,axiom,
    ( c_List_OdropWhile(V_P,V_xs,T_a) != c_List_Olist_OCons(V_y,V_ys,T_a)
    | ~ hBOOL(hAPP(V_P,V_y)) ) ).

cnf(cls_filter__eq__ConsD_2,axiom,
    ( c_List_Ofilter(V_P,V_ys,T_a) != c_List_Olist_OCons(V_x,V_xs,T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_filter_Osimps_I2_J_0,axiom,
    ( c_List_Ofilter(V_P,c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olist_OCons(V_x,c_List_Ofilter(V_P,V_xs,T_a),T_a)
    | ~ hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_Cons__eq__filterD_2,axiom,
    ( c_List_Olist_OCons(V_x,V_xs,T_a) != c_List_Ofilter(V_P,V_ys,T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_remove1_Osimps_I2_J_0,axiom,
    c_List_Oremove1(V_x,c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = V_xs ).

cnf(cls_distinct_Osimps_I2_J_1,axiom,
    ( c_List_Odistinct(V_xs,T_a)
    | ~ c_List_Odistinct(c_List_Olist_OCons(V_x,V_xs,T_a),T_a) ) ).

cnf(cls_butlast_Osimps_I1_J_0,axiom,
    c_List_Obutlast(c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_distinct_Osimps_I1_J_0,axiom,
    c_List_Odistinct(c_List_Olist_ONil(T_a),T_a) ).

cnf(cls_dropWhile_Osimps_I1_J_0,axiom,
    c_List_OdropWhile(V_P,c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_rotate1__is__Nil__conv_0,axiom,
    ( c_List_Orotate1(V_xs,T_a) != c_List_Olist_ONil(T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_rotate__simps_0,axiom,
    c_List_Orotate1(c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_filter_Osimps_I1_J_0,axiom,
    c_List_Ofilter(V_P,c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_remove1_Osimps_I1_J_0,axiom,
    c_List_Oremove1(V_x,c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_initState__into__used_0,axiom,
    ( c_in(V_X,c_Event_Oused(V_evs),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Oparts(c_Event_OinitState(V_B)),tc_Message_Omsg) ) ).

cnf(cls_set__rotate1_0,axiom,
    c_List_Oset(c_List_Orotate1(V_xs,T_a),T_a) = c_List_Oset(V_xs,T_a) ).

cnf(cls_publicKey__into__used_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OpublicKey(V_b,V_A)),c_Event_Oused(V_evs),tc_Message_Omsg) ).

cnf(cls_shrK__in__initState_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Event_OinitState(V_A),tc_Message_Omsg) ).

cnf(cls_publicKey__in__initState_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OpublicKey(V_b,V_A)),c_Event_OinitState(V_B),tc_Message_Omsg) ).

cnf(cls_shrK__in__used_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Event_Oused(V_evs),tc_Message_Omsg) ).

cnf(cls_neq__shrK_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_B)),c_Event_Oused(V_evs),tc_Message_Omsg) ).

cnf(cls_parts__increasing_0,axiom,
    c_lessequals(V_H,c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_parts__mono_0,axiom,
    ( c_lessequals(c_Message_Oparts(V_G),c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(V_G,V_H,tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_parts__empty_0,axiom,
    c_Message_Oparts(c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool))) = c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_parts__subset__iff_1,axiom,
    ( c_lessequals(c_Message_Oparts(V_G),c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(V_G,c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_parts__subset__iff_0,axiom,
    ( c_lessequals(V_G,c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(c_Message_Oparts(V_G),c_Message_Oparts(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_gen__analz__insert__eq_0,axiom,
    ( c_Message_Oanalz(c_Set_Oinsert(V_X,V_G,tc_Message_Omsg)) = c_Message_Oanalz(V_G)
    | ~ c_lessequals(V_H,V_G,tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_append__replicate__commute_0,axiom,
    c_List_Oappend(c_List_Oreplicate(V_n,V_x,T_a),c_List_Oreplicate(V_k,V_x,T_a),T_a) = c_List_Oappend(c_List_Oreplicate(V_k,V_x,T_a),c_List_Oreplicate(V_n,V_x,T_a),T_a) ).

cnf(cls_distinct__append_1,axiom,
    ( c_List_Odistinct(V_ys,T_a)
    | ~ c_List_Odistinct(c_List_Oappend(V_xs,V_ys,T_a),T_a) ) ).

cnf(cls_distinct__append_0,axiom,
    ( c_List_Odistinct(V_xs,T_a)
    | ~ c_List_Odistinct(c_List_Oappend(V_xs,V_ys,T_a),T_a) ) ).

cnf(cls_filter__append_0,axiom,
    c_List_Ofilter(V_P,c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(c_List_Ofilter(V_P,V_xs,T_a),c_List_Ofilter(V_P,V_ys,T_a),T_a) ).

cnf(cls_Crypt__neq__HPair_0,axiom,
    c_Message_Omsg_OCrypt(V_K,V_X_H) != c_Message_OHPair(V_X,V_Y) ).

cnf(cls_msg_Osimps_I18_J_0,axiom,
    c_Message_Omsg_OAgent(V_agent) != c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) ).

cnf(cls_msg_Osimps_I48_J_0,axiom,
    c_Message_Omsg_OMPair(V_msg1,V_msg2) != c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) ).

cnf(cls_msg_Osimps_I19_J_0,axiom,
    c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) != c_Message_Omsg_OAgent(V_agent) ).

cnf(cls_msg_Osimps_I49_J_0,axiom,
    c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) != c_Message_Omsg_OMPair(V_msg1,V_msg2) ).

cnf(cls_analz__insert__Crypt__subset_0,axiom,
    c_lessequals(c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)),c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_Message_Omsg),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_msg_Osimps_I12_J_0,axiom,
    c_Message_Omsg_OAgent(V_agent) != hAPP(c_Message_Omsg_OKey,V_nat_H) ).

cnf(cls_msg_Osimps_I13_J_0,axiom,
    hAPP(c_Message_Omsg_OKey,V_nat_H) != c_Message_Omsg_OAgent(V_agent) ).

cnf(cls_Key__neq__HPair_0,axiom,
    hAPP(c_Message_Omsg_OKey,V_K) != c_Message_OHPair(V_X,V_Y) ).

cnf(cls_msg_Osimps_I40_J_0,axiom,
    hAPP(c_Message_Omsg_OKey,V_nat) != c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H) ).

cnf(cls_msg_Osimps_I41_J_0,axiom,
    c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H) != hAPP(c_Message_Omsg_OKey,V_nat) ).

cnf(cls_analz__insert__cong_0,axiom,
    ( c_Message_Oanalz(V_H) != c_Message_Oanalz(V_H_H)
    | c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)) = c_Message_Oanalz(c_Set_Oinsert(V_X,V_H_H,tc_Message_Omsg)) ) ).

cnf(cls_analz__mono_0,axiom,
    ( c_lessequals(c_Message_Oanalz(V_G),c_Message_Oanalz(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(V_G,V_H,tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_analz__empty_0,axiom,
    c_Message_Oanalz(c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool))) = c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_analz__subset__iff_1,axiom,
    ( c_lessequals(c_Message_Oanalz(V_G),c_Message_Oanalz(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(V_G,c_Message_Oanalz(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_analz__subset__iff_0,axiom,
    ( c_lessequals(V_G,c_Message_Oanalz(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(c_Message_Oanalz(V_G),c_Message_Oanalz(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_analz__increasing_0,axiom,
    c_lessequals(V_H,c_Message_Oanalz(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_synth__increasing_0,axiom,
    c_lessequals(V_H,c_Message_Osynth(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_synth__mono_0,axiom,
    ( c_lessequals(c_Message_Osynth(V_G),c_Message_Osynth(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(V_G,V_H,tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_synth__subset__iff_1,axiom,
    ( c_lessequals(c_Message_Osynth(V_G),c_Message_Osynth(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(V_G,c_Message_Osynth(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_synth__subset__iff_0,axiom,
    ( c_lessequals(V_G,c_Message_Osynth(V_H),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_lessequals(c_Message_Osynth(V_G),c_Message_Osynth(V_H),tc_fun(tc_Message_Omsg,tc_bool)) ) ).

cnf(cls_agent_Osimps_I4_J_0,axiom,
    c_Message_Oagent_OServer != c_Message_Oagent_OSpy ).

cnf(cls_agent_Osimps_I5_J_0,axiom,
    c_Message_Oagent_OSpy != c_Message_Oagent_OServer ).

cnf(cls_Nonce__neq__HPair_0,axiom,
    c_Message_Omsg_ONonce(V_N) != c_Message_OHPair(V_X,V_Y) ).

cnf(cls_msg_Osimps_I11_J_0,axiom,
    c_Message_Omsg_ONonce(V_nat_H) != c_Message_Omsg_OAgent(V_agent) ).

cnf(cls_msg_Osimps_I34_J_0,axiom,
    c_Message_Omsg_ONonce(V_nat) != c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H) ).

cnf(cls_msg_Osimps_I10_J_0,axiom,
    c_Message_Omsg_OAgent(V_agent) != c_Message_Omsg_ONonce(V_nat_H) ).

cnf(cls_msg_Osimps_I35_J_0,axiom,
    c_Message_Omsg_OMPair(V_msg1_H,V_msg2_H) != c_Message_Omsg_ONonce(V_nat) ).

cnf(cls_event_Osimps_I4_J_0,axiom,
    c_Event_Oevent_OSays(V_agent1,V_agent2,V_msg) != c_Event_Oevent_OGets(V_agent_H,V_msg_H) ).

cnf(cls_event_Osimps_I6_J_0,axiom,
    c_Event_Oevent_OSays(V_agent1,V_agent2,V_msg) != c_Event_Oevent_ONotes(V_agent_H,V_msg_H) ).

cnf(cls_event_Osimps_I5_J_0,axiom,
    c_Event_Oevent_OGets(V_agent_H,V_msg_H) != c_Event_Oevent_OSays(V_agent1,V_agent2,V_msg) ).

cnf(cls_event_Osimps_I7_J_0,axiom,
    c_Event_Oevent_ONotes(V_agent_H,V_msg_H) != c_Event_Oevent_OSays(V_agent1,V_agent2,V_msg) ).

cnf(cls_rev__filter_0,axiom,
    c_List_Orev(c_List_Ofilter(V_P,V_xs,T_a),T_a) = c_List_Ofilter(V_P,c_List_Orev(V_xs,T_a),T_a) ).

cnf(cls_rev__replicate_0,axiom,
    c_List_Orev(c_List_Oreplicate(V_n,V_x,T_a),T_a) = c_List_Oreplicate(V_n,V_x,T_a) ).

cnf(cls_distinct__rev_1,axiom,
    ( c_List_Odistinct(c_List_Orev(V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a) ) ).

cnf(cls_distinct__rev_0,axiom,
    ( c_List_Odistinct(V_xs,T_a)
    | ~ c_List_Odistinct(c_List_Orev(V_xs,T_a),T_a) ) ).

cnf(cls_knows__subset__knows__Notes_0,axiom,
    c_lessequals(c_Event_Oknows(V_A,V_evs),c_Event_Oknows(V_A,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A_H,V_X),V_evs,tc_Event_Oevent)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_knows__Notes_0,axiom,
    c_Event_Oknows(V_A,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A,V_X),V_evs,tc_Event_Oevent)) = c_Set_Oinsert(V_X,c_Event_Oknows(V_A,V_evs),tc_Message_Omsg) ).

cnf(cls_knows__subset__knows__Gets_0,axiom,
    c_lessequals(c_Event_Oknows(V_A,V_evs),c_Event_Oknows(V_A,c_List_Olist_OCons(c_Event_Oevent_OGets(V_A_H,V_X),V_evs,tc_Event_Oevent)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_takeWhile__eq__all__conv_2,axiom,
    ( c_List_OtakeWhile(V_P,V_xs,T_a) = V_xs
    | ~ hBOOL(hAPP(V_P,c_List_Osko__List__XtakeWhile__eq__all__conv__1__1(V_P,V_xs,T_a))) ) ).

cnf(cls_takeWhile__cong_2,axiom,
    ( c_List_OtakeWhile(V_P,V_x,T_a) = c_List_OtakeWhile(V_Q,V_x,T_a)
    | ~ hBOOL(hAPP(V_Q,c_List_Osko__List__XtakeWhile__cong__1__1(V_P,V_Q,V_x,T_a)))
    | ~ hBOOL(hAPP(V_P,c_List_Osko__List__XtakeWhile__cong__1__1(V_P,V_Q,V_x,T_a))) ) ).

cnf(cls_takeWhile__cong_1,axiom,
    ( c_List_OtakeWhile(V_P,V_x,T_a) = c_List_OtakeWhile(V_Q,V_x,T_a)
    | hBOOL(hAPP(V_Q,c_List_Osko__List__XtakeWhile__cong__1__1(V_P,V_Q,V_x,T_a)))
    | hBOOL(hAPP(V_P,c_List_Osko__List__XtakeWhile__cong__1__1(V_P,V_Q,V_x,T_a))) ) ).

cnf(cls_distinct__takeWhile_0,axiom,
    ( c_List_Odistinct(c_List_OtakeWhile(V_P,V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a) ) ).

cnf(cls_lemma1_0,axiom,
    ( c_lessequals(c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)),c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_Message_Omsg),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(V_K)),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_lemma2_0,axiom,
    ( c_lessequals(c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg)),tc_Message_Omsg),c_Message_Oanalz(c_Set_Oinsert(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)),tc_fun(tc_Message_Omsg,tc_bool))
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(V_K)),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_ns__sharedp_ONil_0,axiom,
    c_NS__Shared__Mirabelle_Ons__sharedp(c_List_Olist_ONil(tc_Event_Oevent)) ).

cnf(cls_takeWhile__not__last_0,axiom,
    ( c_List_OtakeWhile(c_COMBB(c_Not,c_COMBC(c_fequal(T_a),c_List_Olast(V_xs,T_a),T_a,T_a,tc_bool),tc_bool,tc_bool,T_a),V_xs,T_a) = c_List_Obutlast(V_xs,T_a)
    | ~ c_List_Odistinct(V_xs,T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_dropWhile__eq__Nil__conv_0,axiom,
    ( c_List_OdropWhile(V_P,V_xs,T_a) != c_List_Olist_ONil(T_a)
    | hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_last__in__set_0,axiom,
    ( c_in(c_List_Olast(V_as,T_a),c_List_Oset(V_as,T_a),T_a)
    | V_as = c_List_Olist_ONil(T_a) ) ).

cnf(cls_filter__empty__conv_0,axiom,
    ( c_List_Ofilter(V_P,V_xs,T_a) != c_List_Olist_ONil(T_a)
    | ~ hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_remove1__append_1,axiom,
    ( c_List_Oremove1(V_x,c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(V_xs,c_List_Oremove1(V_x,V_ys,T_a),T_a)
    | c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_in__set__butlast__appendI_0,axiom,
    ( c_in(V_x,c_List_Oset(c_List_Obutlast(c_List_Oappend(V_xs,V_ys,T_a),T_a),T_a),T_a)
    | ~ c_in(V_x,c_List_Oset(c_List_Obutlast(V_xs,T_a),T_a),T_a) ) ).

cnf(cls_in__set__butlast__appendI_1,axiom,
    ( c_in(V_x,c_List_Oset(c_List_Obutlast(c_List_Oappend(V_xs,V_ys,T_a),T_a),T_a),T_a)
    | ~ c_in(V_x,c_List_Oset(c_List_Obutlast(V_ys,T_a),T_a),T_a) ) ).

cnf(cls_dropWhile__append1_0,axiom,
    ( c_List_OdropWhile(V_P,c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(c_List_OdropWhile(V_P,V_xs,T_a),V_ys,T_a)
    | hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_remove1__append_0,axiom,
    ( c_List_Oremove1(V_x,c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(c_List_Oremove1(V_x,V_xs,T_a),V_ys,T_a)
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_replicate__append__same_0,axiom,
    c_List_Oappend(c_List_Oreplicate(V_i,V_x,T_a),c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) = c_List_Olist_OCons(V_x,c_List_Oreplicate(V_i,V_x,T_a),T_a) ).

cnf(cls_rotate__simps_1,axiom,
    c_List_Orotate1(c_List_Olist_OCons(V_x,V_xs,T_b),T_b) = c_List_Oappend(V_xs,c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_b),T_b),T_b) ).

cnf(cls_Cons__eq__append__conv_0,axiom,
    ( c_List_Olist_OCons(V_x,V_xs,T_a) != c_List_Oappend(V_ys,V_zs,T_a)
    | c_List_Olist_OCons(V_x,c_List_Osko__List__XCons__eq__append__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),T_a) = V_ys
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_append__eq__Cons__conv_1,axiom,
    ( c_List_Oappend(V_ys,V_zs,T_a) != c_List_Olist_OCons(V_x,V_xs,T_a)
    | c_List_Oappend(c_List_Osko__List__Xappend__eq__Cons__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),V_zs,T_a) = V_xs
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_butlast__snoc_0,axiom,
    c_List_Obutlast(c_List_Oappend(V_xs,c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a),T_a) = V_xs ).

cnf(cls_last__snoc_0,axiom,
    c_List_Olast(c_List_Oappend(V_xs,c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a),T_a) = V_x ).

cnf(cls_append__eq__Cons__conv_0,axiom,
    ( c_List_Oappend(V_ys,V_zs,T_a) != c_List_Olist_OCons(V_x,V_xs,T_a)
    | V_ys = c_List_Olist_OCons(V_x,c_List_Osko__List__Xappend__eq__Cons__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),T_a)
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_Cons__eq__append__conv_1,axiom,
    ( c_List_Olist_OCons(V_x,V_xs,T_a) != c_List_Oappend(V_ys,V_zs,T_a)
    | V_xs = c_List_Oappend(c_List_Osko__List__XCons__eq__append__conv__1__1(V_x,V_xs,V_ys,V_zs,T_a),V_zs,T_a)
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_Crypt__notin__initState_0,axiom,
    ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oparts(c_Event_OinitState(V_B)),tc_Message_Omsg) ).

cnf(cls_in__lists__conv__set_0,axiom,
    ( c_in(V_x,V_A,T_a)
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a)
    | ~ c_in(V_xs,c_List_Olists(V_A,T_a),tc_List_Olist(T_a)) ) ).

cnf(cls_Crypt__notin__image__Key_0,axiom,
    ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Set_Oimage(c_Message_Omsg_OKey,V_A,tc_nat,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_A__trusts__NS4_0,axiom,
    ( c_in(c_Event_Oevent_OSays(V_B,V_A,c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_ONonce(V_NB))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_B,c_Event_Obad,tc_Message_Oagent)
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | c_in(c_Event_Oevent_ONotes(c_Message_Oagent_OSpy,c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(v_sko__NS__Shared__Mirabelle__XA__trusts__NS4__1(V_K,V_NA,V_evs),hAPP(c_Message_Omsg_OKey,V_K)))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X)))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_ONonce(V_NB)),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ) ).

cnf(cls_takeWhile__cong_0,axiom,
    ( c_List_OtakeWhile(V_P,V_x,T_a) = c_List_OtakeWhile(V_Q,V_x,T_a)
    | c_in(c_List_Osko__List__XtakeWhile__cong__1__1(V_P,V_Q,V_x,T_a),c_List_Oset(V_x,T_a),T_a) ) ).

cnf(cls_takeWhile__eq__all__conv_1,axiom,
    ( c_List_OtakeWhile(V_P,V_xs,T_a) = V_xs
    | c_in(c_List_Osko__List__XtakeWhile__eq__all__conv__1__1(V_P,V_xs,T_a),c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_Nonce__notin__initState_0,axiom,
    ~ c_in(c_Message_Omsg_ONonce(V_N),c_Message_Oparts(c_Event_OinitState(V_B)),tc_Message_Omsg) ).

cnf(cls_Fake__analz__eq_0,axiom,
    ( c_Message_Osynth(c_Message_Oanalz(c_Set_Oinsert(V_X,V_H,tc_Message_Omsg))) = c_Message_Osynth(c_Message_Oanalz(V_H))
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_MPair__synth__analz_2,axiom,
    ( c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(V_Y,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_HPair__synth__analz_1,axiom,
    ( c_in(V_Y,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(c_Message_OHPair(V_X,V_Y),c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_MPair__synth__analz_0,axiom,
    ( c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_MPair__synth__analz_1,axiom,
    ( c_in(V_Y,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OMPair(V_X,V_Y),c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_shrK__in__knows_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Event_Oknows(V_A,V_evs),tc_Message_Omsg) ).

cnf(cls_Nonce__Key__image__eq_0,axiom,
    ~ c_in(c_Message_Omsg_ONonce(V_x),c_Set_Oimage(c_Message_Omsg_OKey,V_A,tc_nat,tc_Message_Omsg),tc_Message_Omsg) ).

cnf(cls_dropWhile__eq__Cons__conv_0,axiom,
    ( c_List_OdropWhile(V_P,V_xs,T_a) != c_List_Olist_OCons(V_y,V_ys,T_a)
    | V_xs = c_List_Oappend(c_List_OtakeWhile(V_P,V_xs,T_a),c_List_Olist_OCons(V_y,V_ys,T_a),T_a) ) ).

cnf(cls_dropWhile__eq__Cons__conv_2,axiom,
    ( V_xs != c_List_Oappend(c_List_OtakeWhile(V_P,V_xs,T_a),c_List_Olist_OCons(V_y,V_ys,T_a),T_a)
    | c_List_OdropWhile(V_P,V_xs,T_a) = c_List_Olist_OCons(V_y,V_ys,T_a)
    | hBOOL(hAPP(V_P,V_y)) ) ).

cnf(cls_Spy__spies__bad__privateKey_0,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(c_Public_OpublicKey(V_b,V_A))),c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent) ) ).

cnf(cls_knows__Spy__Gets_0,axiom,
    c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_OGets(V_A,V_X),V_evs,tc_Event_Oevent)) = c_Event_Oknows(c_Message_Oagent_OSpy,V_evs) ).

cnf(cls_knows__subset__knows__Says_0,axiom,
    c_lessequals(c_Event_Oknows(V_A,V_evs),c_Event_Oknows(V_A,c_List_Olist_OCons(c_Event_Oevent_OSays(V_A_H,V_B,V_X),V_evs,tc_Event_Oevent)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_knows__Says_0,axiom,
    c_Event_Oknows(V_A,c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,V_B,V_X),V_evs,tc_Event_Oevent)) = c_Set_Oinsert(V_X,c_Event_Oknows(V_A,V_evs),tc_Message_Omsg) ).

cnf(cls_Crypt__notin__used__empty_0,axiom,
    ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Event_Oused(c_List_Olist_ONil(tc_Event_Oevent)),tc_Message_Omsg) ).

cnf(cls_Nonce__notin__used__empty_0,axiom,
    ~ c_in(c_Message_Omsg_ONonce(V_N),c_Event_Oused(c_List_Olist_ONil(tc_Event_Oevent)),tc_Message_Omsg) ).

cnf(cls_A__trusts__NS4__lemma_0,axiom,
    ( c_in(c_Event_Oevent_OSays(V_B,V_A,c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_ONonce(V_NB))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_ONonce(V_NB)),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_A__trusts__NS2_0,axiom,
    ( c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X)))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ) ).

cnf(cls_cert__A__form_1,axiom,
    ( V_X = c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A)))
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X)))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ) ).

cnf(cls_dropWhile__neq__rev_0,axiom,
    ( c_List_OdropWhile(c_COMBB(c_Not,c_COMBC(c_fequal(T_a),V_x,T_a,T_a,tc_bool),tc_bool,tc_bool,T_a),c_List_Orev(V_xs,T_a),T_a) = c_List_Olist_OCons(V_x,c_List_Orev(c_List_OtakeWhile(c_COMBB(c_Not,c_COMBC(c_fequal(T_a),V_x,T_a,T_a,tc_bool),tc_bool,tc_bool,T_a),V_xs,T_a),T_a),T_a)
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a)
    | ~ c_List_Odistinct(V_xs,T_a) ) ).

cnf(cls_spies__takeWhile_0,axiom,
    c_lessequals(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_OtakeWhile(V_P,V_evs,tc_Event_Oevent)),c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_split__list__first__prop__iff_4,axiom,
    ( hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a)))
    | c_in(c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,V_x,T_a),c_List_Oset(V_x,T_a),T_a)
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_split__list__last__prop__iff_5,axiom,
    ( c_in(c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),c_List_Oset(c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),T_a)
    | hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,V_xb,T_a)))
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_split__list__first__prop__iff_3,axiom,
    ( c_in(c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),c_List_Oset(c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),T_a)
    | c_in(c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,V_x,T_a),c_List_Oset(V_x,T_a),T_a)
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_split__list__last__prop__iff_4,axiom,
    ( hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a)))
    | c_in(c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,V_xb,T_a),c_List_Oset(V_xb,T_a),T_a)
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_split__list__first__prop__iff_5,axiom,
    ( c_in(c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),c_List_Oset(c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),T_a)
    | hBOOL(hAPP(V_P,c_List_Osko__List__Xsplit__list__first__prop__iff__1__5(V_P,V_x,T_a)))
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_split__list__last__prop__iff_3,axiom,
    ( c_in(c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),c_List_Oset(c_List_Oappend(V_x,c_List_Olist_OCons(V_xa,V_xb,T_a),T_a),T_a),T_a)
    | c_in(c_List_Osko__List__Xsplit__list__last__prop__iff__1__5(V_P,V_xb,T_a),c_List_Oset(V_xb,T_a),T_a)
    | ~ hBOOL(hAPP(V_P,V_xa)) ) ).

cnf(cls_B__trusts__NS5__lemma_0,axiom,
    ( c_in(c_Event_Oevent_OSays(V_A,V_B,c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NB),c_Message_Omsg_ONonce(V_NB)))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NB),c_Message_Omsg_ONonce(V_NB))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(c_Message_Oagent_OServer,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(V_NA,c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A)))))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | c_in(V_B,c_Event_Obad,tc_Message_Oagent) ) ).

cnf(cls_analz__shrK__Decrypt_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),V_X),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_analz_ODecrypt_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(V_K)),c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_takeWhile__append2_0,axiom,
    ( c_List_OtakeWhile(V_P,c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(V_xs,c_List_OtakeWhile(V_P,V_ys,T_a),T_a)
    | c_in(c_List_Osko__List__XtakeWhile__append2__1__1(V_P,V_xs,T_a),c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_usedI_0,axiom,
    ( c_in(V_c,c_Event_Oused(V_evs),tc_Message_Omsg)
    | ~ c_in(V_c,c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ) ).

cnf(cls_spies__pubK_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OpublicKey(V_b,V_A)),c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg) ).

cnf(cls_Says__S__message__form_1,axiom,
    ( c_in(V_X,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | V_X = c_Message_Omsg_OCrypt(c_Public_OshrK(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Omsg_OAgent(V_A)))
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(c_Event_Oevent_OSays(V_S,V_A,c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),c_Message_Omsg_OMPair(c_Message_Omsg_ONonce(V_NA),c_Message_Omsg_OMPair(c_Message_Omsg_OAgent(V_B),c_Message_Omsg_OMPair(hAPP(c_Message_Omsg_OKey,V_K),V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_Notes__imp__knows_0,axiom,
    ( c_in(V_X,c_Event_Oknows(V_A,V_evs),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_ONotes(V_A,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_Says__imp__used_0,axiom,
    ( c_in(V_X,c_Event_Oused(V_evs),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(V_A,V_B,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_spies__Notes__rev_0,axiom,
    ( c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Oappend(V_evs,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A,V_X),c_List_Olist_ONil(tc_Event_Oevent),tc_Event_Oevent),tc_Event_Oevent)) = c_Set_Oinsert(V_X,c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent) ) ).

cnf(cls_knows__Spy__subset__knows__Spy__Says_0,axiom,
    c_lessequals(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,V_B,V_X),V_evs,tc_Event_Oevent)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_knows__Spy__Says_0,axiom,
    c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,V_B,V_X),V_evs,tc_Event_Oevent)) = c_Set_Oinsert(V_X,c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg) ).

cnf(cls_parts__spies__takeWhile__mono_0,axiom,
    c_lessequals(c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_OtakeWhile(V_P,V_evs,tc_Event_Oevent))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_parts__spies__evs__revD2_0,axiom,
    c_lessequals(c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Orev(V_evs,tc_Event_Oevent))),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_fun(tc_Message_Omsg,tc_bool)) ).

cnf(cls_Issues__def_3,axiom,
    ( c_NS__Shared__Mirabelle_OIssues(V_A,V_B,V_X,V_evs)
    | c_in(V_X,c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_OtakeWhile(c_COMBB(c_Not,c_COMBC(c_fequal(tc_Event_Oevent),c_Event_Oevent_OSays(V_A,V_B,V_x),tc_Event_Oevent,tc_Event_Oevent,tc_bool),tc_bool,tc_bool,tc_Event_Oevent),c_List_Orev(V_evs,tc_Event_Oevent),tc_Event_Oevent))),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Oparts(c_Set_Oinsert(V_x,c_Orderings_Obot__class_Obot(tc_fun(tc_Message_Omsg,tc_bool)),tc_Message_Omsg)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(V_A,V_B,V_x),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_Crypt__synth__analz_0,axiom,
    ( c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(V_K)),c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_Crypt__synth__analz_1,axiom,
    ( c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Oanalz(V_H)),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Message_OinvKey(V_K)),c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_analz__spies__pubK_0,axiom,
    c_in(hAPP(c_Message_Omsg_OKey,c_Public_OpublicKey(V_b,V_A)),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ).

cnf(cls_analz__mono__contra_I3_J_0,axiom,
    ( ~ c_in(V_c,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | c_in(V_c,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_OGets(V_A,V_X),V_evs,tc_Event_Oevent))),tc_Message_Omsg) ) ).

cnf(cls_analz__mono__contra_I2_J_0,axiom,
    ( ~ c_in(V_c,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | c_in(V_c,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A,V_X),V_evs,tc_Event_Oevent))),tc_Message_Omsg) ) ).

cnf(cls_Gets__imp__knows__agents_0,axiom,
    ( c_in(V_X,c_Event_Oknows(V_A,V_evs),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OGets(V_A,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent)
    | V_A = c_Message_Oagent_OSpy ) ).

cnf(cls_knows__Spy__Notes_1,axiom,
    ( c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A,V_X),V_evs,tc_Event_Oevent)) = c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent) ) ).

cnf(cls_spies__Gets__rev_0,axiom,
    c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Oappend(V_evs,c_List_Olist_OCons(c_Event_Oevent_OGets(V_A,V_X),c_List_Olist_ONil(tc_Event_Oevent),tc_Event_Oevent),tc_Event_Oevent)) = c_Event_Oknows(c_Message_Oagent_OSpy,V_evs) ).

cnf(cls_Issues__def_2,axiom,
    ( ~ c_in(V_X,c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_OtakeWhile(c_COMBB(c_Not,c_COMBC(c_fequal(tc_Event_Oevent),c_Event_Oevent_OSays(V_A,V_B,v_sko__NS__Shared__Mirabelle__XIssues__def__1(V_A,V_B,V_X,V_evs)),tc_Event_Oevent,tc_Event_Oevent,tc_bool),tc_bool,tc_bool,tc_Event_Oevent),c_List_Orev(V_evs,tc_Event_Oevent),tc_Event_Oevent))),tc_Message_Omsg)
    | ~ c_NS__Shared__Mirabelle_OIssues(V_A,V_B,V_X,V_evs) ) ).

cnf(cls_Spy__spies__bad__shrK_0,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent) ) ).

cnf(cls_spies__Says__rev_0,axiom,
    c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Oappend(V_evs,c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,V_B,V_X),c_List_Olist_ONil(tc_Event_Oevent),tc_Event_Oevent),tc_Event_Oevent)) = c_Set_Oinsert(V_X,c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg) ).

cnf(cls_ns__sharedp_OFake_0,axiom,
    ( c_NS__Shared__Mirabelle_Ons__sharedp(c_List_Olist_OCons(c_Event_Oevent_OSays(c_Message_Oagent_OSpy,V_B,V_X),V_evsf,tc_Event_Oevent))
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evsf))),tc_Message_Omsg)
    | ~ c_NS__Shared__Mirabelle_Ons__sharedp(V_evsf) ) ).

cnf(cls_Crypt__Spy__analz__bad_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(c_Message_Omsg_OCrypt(c_Public_OshrK(V_A),V_X),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg) ) ).

cnf(cls_Notes__imp__knows__Spy_0,axiom,
    ( c_in(V_X,c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(c_Event_Oevent_ONotes(V_A,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_NS3__msg__in__parts__spies_0,axiom,
    ( c_in(V_X,c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(V_S,V_A,c_Message_Omsg_OCrypt(V_KA,c_Message_Omsg_OMPair(V_N,c_Message_Omsg_OMPair(V_B,c_Message_Omsg_OMPair(V_K,V_X))))),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_spies__Notes__rev_1,axiom,
    ( c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Oappend(V_evs,c_List_Olist_OCons(c_Event_Oevent_ONotes(V_A,V_X),c_List_Olist_ONil(tc_Event_Oevent),tc_Event_Oevent),tc_Event_Oevent)) = c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)
    | c_in(V_A,c_Event_Obad,tc_Message_Oagent) ) ).

cnf(cls_Spy__see__shrK_0,axiom,
    ( c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_Spy__see__shrK_1,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_Spy__analz__shrK_1,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_Spy__analz__shrK_0,axiom,
    ( c_in(V_A,c_Event_Obad,tc_Message_Oagent)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,c_Public_OshrK(V_A)),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(V_evs,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_spies__evs__rev_0,axiom,
    c_Event_Oknows(c_Message_Oagent_OSpy,V_evs) = c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Orev(V_evs,tc_Event_Oevent)) ).

cnf(cls_list_Oinject_0,axiom,
    ( c_List_Olist_OCons(V_a,V_list,T_a) != c_List_Olist_OCons(V_a_H,V_list_H,T_a)
    | V_a = V_a_H ) ).

cnf(cls_list_Oinject_1,axiom,
    ( c_List_Olist_OCons(V_a,V_list,T_a) != c_List_Olist_OCons(V_a_H,V_list_H,T_a)
    | V_list = V_list_H ) ).

cnf(cls_takeWhile__eq__all__conv_0,axiom,
    ( c_List_OtakeWhile(V_P,V_xs,T_a) != V_xs
    | hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_Nil__is__rev__conv_1,axiom,
    c_List_Olist_ONil(T_a) = c_List_Orev(c_List_Olist_ONil(T_a),T_a) ).

cnf(cls_ns__shared_ONil_0,axiom,
    c_in(c_List_Olist_ONil(tc_Event_Oevent),c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ).

cnf(cls_analz__idem_0,axiom,
    c_Message_Oanalz(c_Message_Oanalz(V_H)) = c_Message_Oanalz(V_H) ).

cnf(cls_Says__imp__knows_0,axiom,
    ( c_in(V_X,c_Event_Oknows(V_A,V_evs),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(V_A,V_B,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_parts__analz_0,axiom,
    c_Message_Oparts(c_Message_Oanalz(V_H)) = c_Message_Oparts(V_H) ).

cnf(cls_append1__eq__conv_0,axiom,
    ( c_List_Oappend(V_xs,c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) != c_List_Oappend(V_ys,c_List_Olist_OCons(V_y,c_List_Olist_ONil(T_a),T_a),T_a)
    | V_xs = V_ys ) ).

cnf(cls_append1__eq__conv_1,axiom,
    ( c_List_Oappend(V_xs,c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) != c_List_Oappend(V_ys,c_List_Olist_OCons(V_y,c_List_Olist_ONil(T_a),T_a),T_a)
    | V_x = V_y ) ).

cnf(cls_append__is__Nil__conv_2,axiom,
    c_List_Oappend(c_List_Olist_ONil(T_a),c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_append__assoc_0,axiom,
    c_List_Oappend(c_List_Oappend(V_xs,V_ys,T_a),V_zs,T_a) = c_List_Oappend(V_xs,c_List_Oappend(V_ys,V_zs,T_a),T_a) ).

cnf(cls_append__eq__appendI_0,axiom,
    c_List_Oappend(V_xs,c_List_Oappend(V_xs1,V_us,T_a),T_a) = c_List_Oappend(c_List_Oappend(V_xs,V_xs1,T_a),V_us,T_a) ).

cnf(cls_append__eq__append__conv2_4,axiom,
    c_List_Oappend(c_List_Oappend(V_zs,V_x,T_a),V_ys,T_a) = c_List_Oappend(V_zs,c_List_Oappend(V_x,V_ys,T_a),T_a) ).

cnf(cls_append__eq__append__conv2_5,axiom,
    c_List_Oappend(V_xs,c_List_Oappend(V_x,V_ts,T_a),T_a) = c_List_Oappend(c_List_Oappend(V_xs,V_x,T_a),V_ts,T_a) ).

cnf(cls_msg_Osimps_I37_J_0,axiom,
    c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) != c_Message_Omsg_ONonce(V_nat) ).

cnf(cls_msg_Osimps_I31_J_0,axiom,
    hAPP(c_Message_Omsg_OKey,V_nat_H) != c_Message_Omsg_ONonce(V_nat) ).

cnf(cls_takeWhile_Osimps_I1_J_0,axiom,
    c_List_OtakeWhile(V_P,c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_append__eq__Cons__conv_4,axiom,
    c_List_Oappend(c_List_Olist_ONil(T_a),c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olist_OCons(V_x,V_xs,T_a) ).

cnf(cls_self__append__conv2_0,axiom,
    ( V_ys != c_List_Oappend(V_xs,V_ys,T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_append__self__conv2_0,axiom,
    ( c_List_Oappend(V_xs,V_ys,T_a) != V_ys
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_self__append__conv_0,axiom,
    ( V_xs != c_List_Oappend(V_xs,V_ys,T_a)
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_append__self__conv_0,axiom,
    ( c_List_Oappend(V_xs,V_ys,T_a) != V_xs
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_event_Osimps_I1_J_0,axiom,
    ( c_Event_Oevent_OSays(V_agent1,V_agent2,V_msg) != c_Event_Oevent_OSays(V_agent1_H,V_agent2_H,V_msg_H)
    | V_agent1 = V_agent1_H ) ).

cnf(cls_event_Osimps_I1_J_1,axiom,
    ( c_Event_Oevent_OSays(V_agent1,V_agent2,V_msg) != c_Event_Oevent_OSays(V_agent1_H,V_agent2_H,V_msg_H)
    | V_agent2 = V_agent2_H ) ).

cnf(cls_event_Osimps_I1_J_2,axiom,
    ( c_Event_Oevent_OSays(V_agent1,V_agent2,V_msg) != c_Event_Oevent_OSays(V_agent1_H,V_agent2_H,V_msg_H)
    | V_msg = V_msg_H ) ).

cnf(cls_parts_OInj_0,axiom,
    ( c_in(V_X,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,V_H,tc_Message_Omsg) ) ).

cnf(cls_analz_OInj_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,V_H,tc_Message_Omsg) ) ).

cnf(cls_Nil__is__rev__conv_0,axiom,
    ( c_List_Olist_ONil(T_a) != c_List_Orev(V_xs,T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_Says__imp__parts__knows__Spy_0,axiom,
    ( c_in(V_X,c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(V_A,V_B,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_rev__is__rev__conv_0,axiom,
    ( c_List_Orev(V_xs,T_a) != c_List_Orev(V_ys,T_a)
    | V_xs = V_ys ) ).

cnf(cls_Says__imp__spies_0,axiom,
    ( c_in(V_X,c_Event_Oknows(c_Message_Oagent_OSpy,V_evs),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(V_A,V_B,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_Spy__in__bad_0,axiom,
    c_in(c_Message_Oagent_OSpy,c_Event_Obad,tc_Message_Oagent) ).

cnf(cls_ns__shared_OFake_0,axiom,
    ( c_in(c_List_Olist_OCons(c_Event_Oevent_OSays(c_Message_Oagent_OSpy,V_B,V_X),V_evsf,tc_Event_Oevent),c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent))
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evsf))),tc_Message_Omsg)
    | ~ c_in(V_evsf,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ) ).

cnf(cls_list_Osimps_I2_J_0,axiom,
    c_List_Olist_ONil(T_a) != c_List_Olist_OCons(V_a_H,V_list_H,T_a) ).

cnf(cls_msg_Osimps_I43_J_0,axiom,
    c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) != hAPP(c_Message_Omsg_OKey,V_nat) ).

cnf(cls_parts__idem_0,axiom,
    c_Message_Oparts(c_Message_Oparts(V_H)) = c_Message_Oparts(V_H) ).

cnf(cls_set__rev_0,axiom,
    c_List_Oset(c_List_Orev(V_xs,T_a),T_a) = c_List_Oset(V_xs,T_a) ).

cnf(cls_msg_Osimps_I30_J_0,axiom,
    c_Message_Omsg_ONonce(V_nat) != hAPP(c_Message_Omsg_OKey,V_nat_H) ).

cnf(cls_takeWhile__tail_0,axiom,
    ( c_List_OtakeWhile(V_P,c_List_Oappend(V_xs,c_List_Olist_OCons(V_x,V_l,T_a),T_a),T_a) = c_List_OtakeWhile(V_P,V_xs,T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_analz__parts_0,axiom,
    c_Message_Oanalz(c_Message_Oparts(V_H)) = c_Message_Oparts(V_H) ).

cnf(cls_Key__synth__eq_1,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),V_H,tc_Message_Omsg) ) ).

cnf(cls_Key__synth_0,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,V_K),V_H,tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_append__is__Nil__conv_1,axiom,
    ( c_List_Oappend(V_xs,V_ys,T_a) != c_List_Olist_ONil(T_a)
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_append__is__Nil__conv_0,axiom,
    ( c_List_Oappend(V_xs,V_ys,T_a) != c_List_Olist_ONil(T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_in__set__conv__decomp__first_2,axiom,
    ( c_in(V_x,c_List_Oset(c_List_Oappend(V_xa,c_List_Olist_OCons(V_x,V_xb,T_a),T_a),T_a),T_a)
    | c_in(V_x,c_List_Oset(V_xa,T_a),T_a) ) ).

cnf(cls_in__set__conv__decomp__last_2,axiom,
    ( c_in(V_x,c_List_Oset(c_List_Oappend(V_xa,c_List_Olist_OCons(V_x,V_xb,T_a),T_a),T_a),T_a)
    | c_in(V_x,c_List_Oset(V_xb,T_a),T_a) ) ).

cnf(cls_Nil__is__append__conv_1,axiom,
    ( c_List_Olist_ONil(T_a) != c_List_Oappend(V_xs,V_ys,T_a)
    | V_ys = c_List_Olist_ONil(T_a) ) ).

cnf(cls_Nil__is__append__conv_0,axiom,
    ( c_List_Olist_ONil(T_a) != c_List_Oappend(V_xs,V_ys,T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_takeWhile__append1_0,axiom,
    ( c_List_OtakeWhile(V_P,c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_OtakeWhile(V_P,V_xs,T_a)
    | hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_List_Oset(V_xs,T_a),T_a) ) ).

cnf(cls_in__set__conv__decomp_1,axiom,
    c_in(V_x,c_List_Oset(c_List_Oappend(V_xa,c_List_Olist_OCons(V_x,V_xb,T_a),T_a),T_a),T_a) ).

cnf(cls_parts_OBody_0,axiom,
    ( c_in(V_X,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Oparts(V_H),tc_Message_Omsg) ) ).

cnf(cls_Says__imp__analz__Spy_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(V_A,V_B,V_X),c_List_Oset(V_evs,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(cls_parts__partsD_0,axiom,
    ( c_in(V_X,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Oparts(c_Message_Oparts(V_H)),tc_Message_Omsg) ) ).

cnf(cls_rev__singleton__conv_0,axiom,
    ( c_List_Orev(V_xs,T_a) != c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a)
    | V_xs = c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a) ) ).

cnf(cls_msg_Osimps_I4_J_0,axiom,
    ( hAPP(c_Message_Omsg_OKey,V_nat) != hAPP(c_Message_Omsg_OKey,V_nat_H)
    | V_nat = V_nat_H ) ).

cnf(cls_rev__rev__ident_0,axiom,
    c_List_Orev(c_List_Orev(V_xs,T_a),T_a) = V_xs ).

cnf(cls_rev__swap_1,axiom,
    c_List_Orev(c_List_Orev(V_ys,T_a),T_a) = V_ys ).

cnf(cls_rev__swap_0,axiom,
    V_xs = c_List_Orev(c_List_Orev(V_xs,T_a),T_a) ).

cnf(cls_self__append__conv2_1,axiom,
    V_ys = c_List_Oappend(c_List_Olist_ONil(T_a),V_ys,T_a) ).

cnf(cls_append__Nil_0,axiom,
    c_List_Oappend(c_List_Olist_ONil(T_a),V_ys,T_a) = V_ys ).

cnf(cls_self__append__conv_1,axiom,
    V_xs = c_List_Oappend(V_xs,c_List_Olist_ONil(T_a),T_a) ).

cnf(cls_eq__Nil__appendI_0,axiom,
    V_x = c_List_Oappend(c_List_Olist_ONil(T_a),V_x,T_a) ).

cnf(cls_append__Nil2_0,axiom,
    c_List_Oappend(V_xs,c_List_Olist_ONil(T_a),T_a) = V_xs ).

cnf(cls_same__append__eq_0,axiom,
    ( c_List_Oappend(V_xs,V_ys,T_a) != c_List_Oappend(V_xs,V_zs,T_a)
    | V_ys = V_zs ) ).

cnf(cls_append__same__eq_0,axiom,
    ( c_List_Oappend(V_ys,V_xs,T_a) != c_List_Oappend(V_zs,V_xs,T_a)
    | V_ys = V_zs ) ).

cnf(cls_takeWhile_Osimps_I2_J_1,axiom,
    ( c_List_OtakeWhile(V_P,c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olist_ONil(T_a)
    | hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_singleton__rev__conv_0,axiom,
    ( c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a) != c_List_Orev(V_xs,T_a)
    | V_xs = c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a) ) ).

cnf(cls_analz__analzD_0,axiom,
    ( c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Oanalz(c_Message_Oanalz(V_H)),tc_Message_Omsg) ) ).

cnf(cls_msg_Osimps_I3_J_0,axiom,
    ( c_Message_Omsg_ONonce(V_nat) != c_Message_Omsg_ONonce(V_nat_H)
    | V_nat = V_nat_H ) ).

cnf(cls_mem__def_1,axiom,
    ( c_in(V_x,V_S,T_a)
    | ~ hBOOL(hAPP(V_S,V_x)) ) ).

cnf(cls_mem__def_0,axiom,
    ( hBOOL(hAPP(V_S,V_x))
    | ~ c_in(V_x,V_S,T_a) ) ).

cnf(cls_COMBB__def_0,axiom,
    hAPP(c_COMBB(V_P,V_Q,T_b,T_a,T_c),V_R) = hAPP(V_P,hAPP(V_Q,V_R)) ).

cnf(cls_COMBC__def_0,axiom,
    hAPP(c_COMBC(V_P,V_Q,T_b,T_c,T_a),V_R) = hAPP(hAPP(V_P,V_R),V_Q) ).

cnf(cls_msg_Osimps_I36_J_0,axiom,
    c_Message_Omsg_ONonce(V_nat) != c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) ).

cnf(cls_msg_Osimps_I7_J_0,axiom,
    ( c_Message_Omsg_OCrypt(V_nat,V_msg) != c_Message_Omsg_OCrypt(V_nat_H,V_msg_H)
    | V_nat = V_nat_H ) ).

cnf(cls_msg_Osimps_I7_J_1,axiom,
    ( c_Message_Omsg_OCrypt(V_nat,V_msg) != c_Message_Omsg_OCrypt(V_nat_H,V_msg_H)
    | V_msg = V_msg_H ) ).

cnf(cls_rev_Osimps_I2_J_0,axiom,
    c_List_Orev(c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Oappend(c_List_Orev(V_xs,T_a),c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) ).

cnf(cls_set__ConsD_0,axiom,
    ( c_in(V_y,c_List_Oset(V_xs,T_a),T_a)
    | V_y = V_x
    | ~ c_in(V_y,c_List_Oset(c_List_Olist_OCons(V_x,V_xs,T_a),T_a),T_a) ) ).

cnf(cls_rev__singleton__conv_1,axiom,
    c_List_Orev(c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) = c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a) ).

cnf(cls_rev__eq__Cons__iff_0,axiom,
    ( c_List_Orev(V_xs,T_a) != c_List_Olist_OCons(V_y,V_ys,T_a)
    | V_xs = c_List_Oappend(c_List_Orev(V_ys,T_a),c_List_Olist_OCons(V_y,c_List_Olist_ONil(T_a),T_a),T_a) ) ).

cnf(cls_append__eq__Cons__conv_5,axiom,
    c_List_Oappend(c_List_Olist_OCons(V_x,V_xa,T_a),V_zs,T_a) = c_List_Olist_OCons(V_x,c_List_Oappend(V_xa,V_zs,T_a),T_a) ).

cnf(cls_append__Cons_0,axiom,
    c_List_Oappend(c_List_Olist_OCons(V_x,V_xs,T_a),V_ys,T_a) = c_List_Olist_OCons(V_x,c_List_Oappend(V_xs,V_ys,T_a),T_a) ).

cnf(cls_Cons__eq__append__conv_5,axiom,
    c_List_Olist_OCons(V_x,c_List_Oappend(V_xa,V_zs,T_a),T_a) = c_List_Oappend(c_List_Olist_OCons(V_x,V_xa,T_a),V_zs,T_a) ).

cnf(cls_Cons__eq__appendI_0,axiom,
    c_List_Olist_OCons(V_x,c_List_Oappend(V_xs1,V_zs,T_a),T_a) = c_List_Oappend(c_List_Olist_OCons(V_x,V_xs1,T_a),V_zs,T_a) ).

cnf(cls_synth_OInj_0,axiom,
    ( c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,V_H,tc_Message_Omsg) ) ).

cnf(cls_neq__Nil__conv_1,axiom,
    c_List_Olist_OCons(V_x,V_xa,T_a) != c_List_Olist_ONil(T_a) ).

cnf(cls_list_Osimps_I3_J_0,axiom,
    c_List_Olist_OCons(V_a_H,V_list_H,T_a) != c_List_Olist_ONil(T_a) ).

cnf(cls_Crypt__synth__eq_1,axiom,
    ( c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)
    | c_in(hAPP(c_Message_Omsg_OKey,V_K),V_H,tc_Message_Omsg) ) ).

cnf(cls_Crypt__synth__eq_0,axiom,
    ( c_in(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Osynth(V_H),tc_Message_Omsg)
    | c_in(hAPP(c_Message_Omsg_OKey,V_K),V_H,tc_Message_Omsg) ) ).

cnf(cls_Crypt__synth_1,axiom,
    ( c_in(hAPP(c_Message_Omsg_OKey,V_K),V_H,tc_Message_Omsg)
    | c_in(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_synth__synthD_0,axiom,
    ( c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Osynth(c_Message_Osynth(V_H)),tc_Message_Omsg) ) ).

cnf(cls_rev__eq__Cons__iff_1,axiom,
    c_List_Orev(c_List_Oappend(c_List_Orev(V_ys,T_a),c_List_Olist_OCons(V_y,c_List_Olist_ONil(T_a),T_a),T_a),T_a) = c_List_Olist_OCons(V_y,V_ys,T_a) ).

cnf(cls_takeWhile_Osimps_I2_J_0,axiom,
    ( c_List_OtakeWhile(V_P,c_List_Olist_OCons(V_x,V_xs,T_a),T_a) = c_List_Olist_OCons(V_x,c_List_OtakeWhile(V_P,V_xs,T_a),T_a)
    | ~ hBOOL(hAPP(V_P,V_x)) ) ).

cnf(cls_synth__idem_0,axiom,
    c_Message_Osynth(c_Message_Osynth(V_H)) = c_Message_Osynth(V_H) ).

cnf(cls_Crypt__synth_0,axiom,
    ( c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg)
    | c_in(c_Message_Omsg_OCrypt(V_K,V_X),V_H,tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_rev__is__Nil__conv_0,axiom,
    ( c_List_Orev(V_xs,T_a) != c_List_Olist_ONil(T_a)
    | V_xs = c_List_Olist_ONil(T_a) ) ).

cnf(cls_not__Cons__self2_0,axiom,
    c_List_Olist_OCons(V_x,V_t,T_a) != V_t ).

cnf(cls_not__Cons__self_0,axiom,
    V_xs != c_List_Olist_OCons(V_x,V_xs,T_a) ).

cnf(cls_analz__mono__contra_I1_J_0,axiom,
    ( ~ c_in(V_c,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,V_evs)),tc_Message_Omsg)
    | c_in(V_c,c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_Olist_OCons(c_Event_Oevent_OSays(V_A,V_B,V_X),V_evs,tc_Event_Oevent))),tc_Message_Omsg) ) ).

cnf(cls_Cons__eq__append__conv_4,axiom,
    c_List_Olist_OCons(V_x,V_xs,T_a) = c_List_Oappend(c_List_Olist_ONil(T_a),c_List_Olist_OCons(V_x,V_xs,T_a),T_a) ).

cnf(cls_singleton__rev__conv_1,axiom,
    c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a) = c_List_Orev(c_List_Olist_OCons(V_x,c_List_Olist_ONil(T_a),T_a),T_a) ).

cnf(cls_set__takeWhileD_0,axiom,
    ( c_in(V_x,c_List_Oset(V_xs,T_a),T_a)
    | ~ c_in(V_x,c_List_Oset(c_List_OtakeWhile(V_P,V_xs,T_a),T_a),T_a) ) ).

cnf(cls_Nonce__synth__eq_1,axiom,
    ( c_in(c_Message_Omsg_ONonce(V_N),c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_ONonce(V_N),V_H,tc_Message_Omsg) ) ).

cnf(cls_Nonce__synth__eq_0,axiom,
    ( c_in(c_Message_Omsg_ONonce(V_N),V_H,tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_ONonce(V_N),c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_Nonce__synth_0,axiom,
    ( c_in(c_Message_Omsg_ONonce(V_n),V_H,tc_Message_Omsg)
    | ~ c_in(c_Message_Omsg_ONonce(V_n),c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_synth_OCrypt_0,axiom,
    ( c_in(c_Message_Omsg_OCrypt(V_K,V_X),c_Message_Osynth(V_H),tc_Message_Omsg)
    | ~ c_in(hAPP(c_Message_Omsg_OKey,V_K),V_H,tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Osynth(V_H),tc_Message_Omsg) ) ).

cnf(cls_Nil__is__append__conv_2,axiom,
    c_List_Olist_ONil(T_a) = c_List_Oappend(c_List_Olist_ONil(T_a),c_List_Olist_ONil(T_a),T_a) ).

cnf(cls_msg_Osimps_I42_J_0,axiom,
    hAPP(c_Message_Omsg_OKey,V_nat) != c_Message_Omsg_OCrypt(V_nat_H,V_msg_H) ).

cnf(cls_rev__is__Nil__conv_1,axiom,
    c_List_Orev(c_List_Olist_ONil(T_a),T_a) = c_List_Olist_ONil(T_a) ).

cnf(cls_rev__append_0,axiom,
    c_List_Orev(c_List_Oappend(V_xs,V_ys,T_a),T_a) = c_List_Oappend(c_List_Orev(V_ys,T_a),c_List_Orev(V_xs,T_a),T_a) ).

cnf(cls_set__takeWhileD_1,axiom,
    ( hBOOL(hAPP(V_P,V_x))
    | ~ c_in(V_x,c_List_Oset(c_List_OtakeWhile(V_P,V_xs,T_a),T_a),T_a) ) ).

cnf(cls_not__parts__not__analz_0,axiom,
    ( ~ c_in(V_c,c_Message_Oanalz(V_H),tc_Message_Omsg)
    | c_in(V_c,c_Message_Oparts(V_H),tc_Message_Omsg) ) ).

cnf(cls_analz__into__parts_0,axiom,
    ( c_in(V_c,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_in(V_c,c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_analz__conj__parts_0,axiom,
    ( c_in(V_X,c_Message_Oparts(V_H),tc_Message_Omsg)
    | ~ c_in(V_X,c_Message_Oanalz(V_H),tc_Message_Omsg) ) ).

cnf(cls_conjecture_0,negated_conjecture,
    ~ c_in(v_A,c_Event_Obad,tc_Message_Oagent) ).

cnf(cls_conjecture_1,negated_conjecture,
    ~ c_in(v_B,c_Event_Obad,tc_Message_Oagent) ).

cnf(cls_conjecture_2,negated_conjecture,
    c_in(v_evsf,c_NS__Shared__Mirabelle_Ons__shared,tc_List_Olist(tc_Event_Oevent)) ).

cnf(cls_conjecture_3,negated_conjecture,
    c_in(v_X,c_Message_Osynth(c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,v_evsf))),tc_Message_Omsg) ).

cnf(cls_conjecture_4,negated_conjecture,
    ~ c_in(hAPP(c_Message_Omsg_OKey,v_K),c_Message_Oanalz(c_Event_Oknows(c_Message_Oagent_OSpy,v_evsf)),tc_Message_Omsg) ).

cnf(cls_conjecture_5,negated_conjecture,
    v_B = c_Message_Oagent_OSpy ).

cnf(cls_conjecture_6,negated_conjecture,
    v_A = v_Ba ).

cnf(cls_conjecture_7,negated_conjecture,
    c_Message_Omsg_OCrypt(v_K,c_Message_Omsg_ONonce(v_Nb)) = v_X ).

cnf(cls_conjecture_8,negated_conjecture,
    c_in(v_X,c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_OtakeWhile(c_COMBB(c_Not,c_COMBC(c_fequal(tc_Event_Oevent),c_Event_Oevent_OSays(c_Message_Oagent_OSpy,v_Ba,v_X),tc_Event_Oevent,tc_Event_Oevent,tc_bool),tc_bool,tc_bool,tc_Event_Oevent),c_List_Oappend(c_List_Orev(v_evsf,tc_Event_Oevent),c_List_Olist_OCons(c_Event_Oevent_OSays(c_Message_Oagent_OSpy,v_Ba,v_X),c_List_Olist_ONil(tc_Event_Oevent),tc_Event_Oevent),tc_Event_Oevent),tc_Event_Oevent))),tc_Message_Omsg) ).

cnf(cls_conjecture_9,negated_conjecture,
    ( ~ c_in(c_Message_Omsg_OCrypt(v_K,c_Message_Omsg_ONonce(v_Nb)),c_Message_Oparts(c_Event_Oknows(c_Message_Oagent_OSpy,c_List_OtakeWhile(c_COMBB(c_Not,c_COMBC(c_fequal(tc_Event_Oevent),c_Event_Oevent_OSays(v_B,v_A,c_Message_Omsg_OCrypt(v_K,c_Message_Omsg_ONonce(v_Nb))),tc_Event_Oevent,tc_Event_Oevent,tc_bool),tc_bool,tc_bool,tc_Event_Oevent),c_List_Orev(v_evsf,tc_Event_Oevent),tc_Event_Oevent))),tc_Message_Omsg)
    | ~ c_in(c_Event_Oevent_OSays(v_B,v_A,c_Message_Omsg_OCrypt(v_K,c_Message_Omsg_ONonce(v_Nb))),c_List_Oset(v_evsf,tc_Event_Oevent),tc_Event_Oevent) ) ).

cnf(clsarity_fun__Orderings_Opreorder,axiom,
    ( class_Orderings_Opreorder(tc_fun(T_2,T_1))
    | ~ class_Orderings_Opreorder(T_1) ) ).

cnf(clsarity_fun__Orderings_Oorder,axiom,
    ( class_Orderings_Oorder(tc_fun(T_2,T_1))
    | ~ class_Orderings_Oorder(T_1) ) ).

cnf(clsarity_fun__Orderings_Obot,axiom,
    ( class_Orderings_Obot(tc_fun(T_2,T_1))
    | ~ class_Orderings_Obot(T_1) ) ).

cnf(clsarity_fun__HOL_Oord,axiom,
    ( class_HOL_Oord(tc_fun(T_2,T_1))
    | ~ class_HOL_Oord(T_1) ) ).

cnf(clsarity_nat__Orderings_Opreorder,axiom,
    class_Orderings_Opreorder(tc_nat) ).

cnf(clsarity_nat__Orderings_Olinorder,axiom,
    class_Orderings_Olinorder(tc_nat) ).

cnf(clsarity_nat__Orderings_Oorder,axiom,
    class_Orderings_Oorder(tc_nat) ).

cnf(clsarity_nat__Orderings_Obot,axiom,
    class_Orderings_Obot(tc_nat) ).

cnf(clsarity_nat__HOL_Oord,axiom,
    class_HOL_Oord(tc_nat) ).

cnf(clsarity_bool__Orderings_Opreorder,axiom,
    class_Orderings_Opreorder(tc_bool) ).

cnf(clsarity_bool__Orderings_Oorder,axiom,
    class_Orderings_Oorder(tc_bool) ).

cnf(clsarity_bool__Orderings_Obot,axiom,
    class_Orderings_Obot(tc_bool) ).

cnf(clsarity_bool__HOL_Oord,axiom,
    class_HOL_Oord(tc_bool) ).

cnf(cls_ATP__Linkup_OCOMBC__def_0,axiom,
    hAPP(c_COMBC(V_P,V_Q,T_b,T_c,T_a),V_R) = hAPP(hAPP(V_P,V_R),V_Q) ).

cnf(cls_ATP__Linkup_OCOMBB__def_0,axiom,
    hAPP(c_COMBB(V_P,V_Q,T_b,T_a,T_c),V_R) = hAPP(V_P,hAPP(V_Q,V_R)) ).

cnf(cls_ATP__Linkup_Oequal__imp__fequal_0,axiom,
    hBOOL(hAPP(hAPP(c_fequal(T_a),V_x),V_x)) ).

cnf(cls_ATP__Linkup_Ofequal__imp__equal_0,axiom,
    ( V_X = V_Y
    | ~ hBOOL(hAPP(hAPP(c_fequal(T_a),V_X),V_Y)) ) ).

%------------------------------------------------------------------------------
