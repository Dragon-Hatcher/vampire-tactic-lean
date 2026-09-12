%------------------------------------------------------------------------------
% File     : LAT374+1 : TPTP v9.3.1. Released v3.4.0.
% Domain   : Lattice Theory
% Problem  : Duality Based on Galois Connection - Part I T49
% Version  : [Urb08] axioms : Especial.
% English  :

% Refs     : [Ban01] Bancerek (2001), Duality Based on the Galois Connectio
%          : [Urb07] Urban (2007), MPTP 0.2: Design, Implementation, and In
%          : [Urb08] Urban (2006), Email to G. Sutcliffe
% Source   : [Urb08]
% Names    : t49_waybel34 [Urb08]

% Status   : Theorem
% Rating   : 0.48 v9.3.0, 0.55 v9.0.0, 0.61 v8.2.0, 0.58 v8.1.0, 0.61 v7.5.0, 0.69 v7.4.0, 0.53 v7.3.0, 0.62 v7.2.0, 0.59 v7.1.0, 0.61 v7.0.0, 0.60 v6.4.0, 0.62 v6.3.0, 0.67 v6.2.0, 0.76 v6.1.0, 0.80 v6.0.0, 0.78 v5.5.0, 0.81 v5.4.0, 0.82 v5.3.0, 0.85 v5.2.0, 0.80 v5.1.0, 0.81 v5.0.0, 0.88 v4.1.0, 0.91 v4.0.0, 0.92 v3.7.0, 0.85 v3.5.0, 0.89 v3.4.0
% Syntax   : Number of formulae    :  138 (  20 unt;   0 def)
%            Number of atoms       :  752 (  17 equ)
%            Maximal formula atoms :   23 (   5 avg)
%            Number of connectives :  712 (  98   ~;   2   |; 445   &)
%                                         (   8 <=>; 159  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   20 (   6 avg)
%            Maximal term depth    :    4 (   1 avg)
%            Number of predicates  :   62 (  60 usr;   1 prp; 0-4 aty)
%            Number of functors    :   19 (  19 usr;   1 con; 0-4 aty)
%            Number of variables   :  228 ( 200   !;  28   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments : Normal version: includes the axioms (which may be theorems from
%            other articles) and background that are possibly necessary.
%          : Translated by MPTP from the Mizar Mathematical Library 4.48.930.
%          : The problem encoding is based on set theory.
%------------------------------------------------------------------------------
fof(t49_waybel34,conjecture,
    ! [A] :
      ( ~ v2_setfam_1(A)
     => ! [B] :
          ( ( v2_orders_2(B)
            & v3_orders_2(B)
            & v4_orders_2(B)
            & v1_lattice3(B)
            & v2_lattice3(B)
            & l1_orders_2(B) )
         => ( m1_subset_1(B,u1_struct_0(k9_waybel34(A)))
          <=> ( v1_orders_2(B)
              & v3_lattice3(B)
              & r2_hidden(u1_struct_0(B),A) ) ) ) ) ).

fof(abstractness_v1_orders_2,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( v1_orders_2(A)
       => A = g1_orders_2(u1_struct_0(A),u1_orders_2(A)) ) ) ).

fof(abstractness_v6_altcat_1,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => ( v6_altcat_1(A)
       => A = g2_altcat_1(u1_struct_0(A),u1_altcat_1(A),u2_altcat_1(A)) ) ) ).

fof(antisymmetry_r2_hidden,axiom,
    ! [A,B] :
      ( r2_hidden(A,B)
     => ~ r2_hidden(B,A) ) ).

fof(cc10_membered,axiom,
    ! [A] :
      ( v1_membered(A)
     => ! [B] :
          ( m1_subset_1(B,A)
         => v1_xcmplx_0(B) ) ) ).

fof(cc10_waybel_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v3_lattice3(A) )
       => ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v24_waybel_0(A)
          & v25_waybel_0(A) ) ) ) ).

fof(cc11_membered,axiom,
    ! [A] :
      ( v2_membered(A)
     => ! [B] :
          ( m1_subset_1(B,A)
         => ( v1_xcmplx_0(B)
            & v1_xreal_0(B) ) ) ) ).

fof(cc11_waybel_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v25_waybel_0(A) )
       => ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v1_yellow_0(A) ) ) ) ).

fof(cc11_yellow21,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v3_yellow21(A)
        & l2_altcat_1(A) )
     => ! [B] :
          ( m1_altcat_2(B,A)
         => ( ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v3_altcat_2(B,A) )
           => ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v9_altcat_1(B)
              & v11_altcat_1(B)
              & v12_altcat_1(B)
              & v1_altcat_2(B)
              & v3_altcat_2(B,A)
              & v2_yellow18(B)
              & v3_yellow18(B)
              & v4_yellow18(B)
              & v1_yellow21(B)
              & v2_yellow21(B)
              & v3_yellow21(B) ) ) ) ) ).

fof(cc12_membered,axiom,
    ! [A] :
      ( v3_membered(A)
     => ! [B] :
          ( m1_subset_1(B,A)
         => ( v1_xcmplx_0(B)
            & v1_xreal_0(B)
            & v1_rat_1(B) ) ) ) ).

fof(cc12_waybel_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v3_orders_2(A)
          & v4_orders_2(A)
          & v1_lattice3(A)
          & v1_yellow_0(A)
          & v24_waybel_0(A) )
       => ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v3_orders_2(A)
          & v4_orders_2(A)
          & v1_lattice3(A)
          & v2_lattice3(A)
          & v3_lattice3(A)
          & v1_yellow_0(A)
          & v2_yellow_0(A)
          & v3_yellow_0(A) ) ) ) ).

fof(cc13_membered,axiom,
    ! [A] :
      ( v4_membered(A)
     => ! [B] :
          ( m1_subset_1(B,A)
         => ( v1_xcmplx_0(B)
            & v1_xreal_0(B)
            & v1_int_1(B)
            & v1_rat_1(B) ) ) ) ).

fof(cc13_waybel_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v4_orders_2(A)
          & v25_waybel_0(A) )
       => ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v4_orders_2(A)
          & v2_lattice3(A) ) ) ) ).

fof(cc14_membered,axiom,
    ! [A] :
      ( v5_membered(A)
     => ! [B] :
          ( m1_subset_1(B,A)
         => ( v1_xcmplx_0(B)
            & v4_ordinal2(B)
            & v1_xreal_0(B)
            & v1_int_1(B)
            & v1_rat_1(B) ) ) ) ).

fof(cc14_waybel_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v4_orders_2(A)
          & v2_yellow_0(A)
          & v25_waybel_0(A) )
       => ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v4_orders_2(A)
          & v1_lattice3(A)
          & v2_yellow_0(A) ) ) ) ).

fof(cc15_membered,axiom,
    ! [A] :
      ( v1_xboole_0(A)
     => ( v1_membered(A)
        & v2_membered(A)
        & v3_membered(A)
        & v4_membered(A)
        & v5_membered(A) ) ) ).

fof(cc16_membered,axiom,
    ! [A] :
      ( v1_membered(A)
     => ! [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
         => v1_membered(B) ) ) ).

fof(cc17_membered,axiom,
    ! [A] :
      ( v2_membered(A)
     => ! [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
         => ( v1_membered(B)
            & v2_membered(B) ) ) ) ).

fof(cc18_membered,axiom,
    ! [A] :
      ( v3_membered(A)
     => ! [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
         => ( v1_membered(B)
            & v2_membered(B)
            & v3_membered(B) ) ) ) ).

fof(cc19_membered,axiom,
    ! [A] :
      ( v4_membered(A)
     => ! [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
         => ( v1_membered(B)
            & v2_membered(B)
            & v3_membered(B)
            & v4_membered(B) ) ) ) ).

fof(cc1_finset_1,axiom,
    ! [A] :
      ( v1_xboole_0(A)
     => v1_finset_1(A) ) ).

fof(cc1_funct_1,axiom,
    ! [A] :
      ( v1_xboole_0(A)
     => v1_funct_1(A) ) ).

fof(cc1_lattice3,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( v1_lattice3(A)
       => ~ v3_struct_0(A) ) ) ).

fof(cc1_membered,axiom,
    ! [A] :
      ( v5_membered(A)
     => v4_membered(A) ) ).

fof(cc1_relset_1,axiom,
    ! [A,B,C] :
      ( m1_subset_1(C,k1_zfmisc_1(k2_zfmisc_1(A,B)))
     => v1_relat_1(C) ) ).

fof(cc1_waybel17,axiom,
    ! [A,B] :
      ( ( ~ v3_struct_0(A)
        & v2_orders_2(A)
        & v4_orders_2(A)
        & l1_orders_2(A)
        & ~ v3_struct_0(B)
        & v2_orders_2(B)
        & v4_orders_2(B)
        & l1_orders_2(B) )
     => ! [C] :
          ( m1_relset_1(C,u1_struct_0(A),u1_struct_0(B))
         => ( ( v1_funct_1(C)
              & v1_funct_2(C,u1_struct_0(A),u1_struct_0(B))
              & v22_waybel_0(C,A,B) )
           => ( ~ v1_xboole_0(C)
              & v1_funct_1(C)
              & v1_funct_2(C,u1_struct_0(A),u1_struct_0(B))
              & v5_orders_3(C,A,B)
              & v1_partfun1(C,u1_struct_0(A),u1_struct_0(B)) ) ) ) ) ).

fof(cc1_yellow21,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => ( ( ~ v3_struct_0(A)
          & v2_altcat_1(A)
          & v11_altcat_1(A)
          & v12_altcat_1(A)
          & v3_yellow21(A) )
       => ( ~ v3_struct_0(A)
          & v2_altcat_1(A)
          & v11_altcat_1(A)
          & v12_altcat_1(A)
          & v1_altcat_2(A)
          & v2_yellow21(A) ) ) ) ).

fof(cc1_yellow_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v3_lattice3(A) )
       => ( ~ v3_struct_0(A)
          & v1_lattice3(A)
          & v2_lattice3(A) ) ) ) ).

fof(cc1_yellow_2,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v3_orders_2(A)
          & v4_orders_2(A)
          & v2_yellow_0(A)
          & v24_waybel_0(A)
          & v25_waybel_0(A) )
       => ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v3_orders_2(A)
          & v4_orders_2(A)
          & v1_yellow_0(A)
          & v2_yellow_0(A)
          & v3_yellow_0(A)
          & v24_waybel_0(A)
          & v25_waybel_0(A)
          & v1_lattice3(A)
          & v2_lattice3(A)
          & v3_lattice3(A) ) ) ) ).

fof(cc20_membered,axiom,
    ! [A] :
      ( v5_membered(A)
     => ! [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
         => ( v1_membered(B)
            & v2_membered(B)
            & v3_membered(B)
            & v4_membered(B)
            & v5_membered(B) ) ) ) ).

fof(cc2_finset_1,axiom,
    ! [A] :
      ( v1_finset_1(A)
     => ! [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
         => v1_finset_1(B) ) ) ).

fof(cc2_funct_1,axiom,
    ! [A] :
      ( ( v1_relat_1(A)
        & v1_xboole_0(A)
        & v1_funct_1(A) )
     => ( v1_relat_1(A)
        & v1_funct_1(A)
        & v2_funct_1(A) ) ) ).

fof(cc2_functor0,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => ( ( ~ v3_struct_0(A)
          & v12_altcat_1(A) )
       => ( ~ v3_struct_0(A)
          & v1_altcat_2(A) ) ) ) ).

fof(cc2_lattice3,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( v2_lattice3(A)
       => ~ v3_struct_0(A) ) ) ).

fof(cc2_membered,axiom,
    ! [A] :
      ( v4_membered(A)
     => v3_membered(A) ) ).

fof(cc2_setfam_1,axiom,
    ! [A] :
      ( ~ v2_setfam_1(A)
     => ~ v1_xboole_0(A) ) ).

fof(cc2_yellow21,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => ( ( ~ v3_struct_0(A)
          & v2_altcat_1(A)
          & v11_altcat_1(A)
          & v12_altcat_1(A)
          & v2_yellow21(A) )
       => ( ~ v3_struct_0(A)
          & v2_altcat_1(A)
          & v9_altcat_1(A)
          & v11_altcat_1(A)
          & v12_altcat_1(A)
          & v1_altcat_2(A)
          & v2_yellow18(A)
          & v3_yellow18(A)
          & v4_yellow18(A)
          & v1_yellow21(A) ) ) ) ).

fof(cc3_membered,axiom,
    ! [A] :
      ( v3_membered(A)
     => v2_membered(A) ) ).

fof(cc3_yellow_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( ~ v3_struct_0(A)
          & v3_lattice3(A) )
       => ( ~ v3_struct_0(A)
          & v3_yellow_0(A) ) ) ) ).

fof(cc4_membered,axiom,
    ! [A] :
      ( v2_membered(A)
     => v1_membered(A) ) ).

fof(cc4_yellow_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( v3_yellow_0(A)
       => ( v1_yellow_0(A)
          & v2_yellow_0(A) ) ) ) ).

fof(cc5_yellow21,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v3_yellow18(A)
        & l2_altcat_1(A) )
     => ! [B] :
          ( m1_altcat_2(B,A)
         => ( ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v3_altcat_2(B,A) )
           => ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v11_altcat_1(B)
              & v12_altcat_1(B)
              & v1_altcat_2(B)
              & v3_altcat_2(B,A)
              & v3_yellow18(B) ) ) ) ) ).

fof(cc5_yellow_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( v1_yellow_0(A)
          & v2_yellow_0(A) )
       => v3_yellow_0(A) ) ) ).

fof(cc6_yellow21,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v2_yellow18(A)
        & l2_altcat_1(A) )
     => ! [B] :
          ( m1_altcat_2(B,A)
         => ( ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v3_altcat_2(B,A) )
           => ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v11_altcat_1(B)
              & v12_altcat_1(B)
              & v1_altcat_2(B)
              & v3_altcat_2(B,A)
              & v2_yellow18(B) ) ) ) ) ).

fof(cc7_yellow21,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v9_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & l2_altcat_1(A) )
     => ! [B] :
          ( m1_altcat_2(B,A)
         => ( ( ~ v3_struct_0(B)
              & v2_altcat_1(B) )
           => ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v9_altcat_1(B)
              & v11_altcat_1(B) ) ) ) ) ).

fof(cc8_yellow21,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v1_yellow21(A)
        & l2_altcat_1(A) )
     => ! [B] :
          ( m1_altcat_2(B,A)
         => ( ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v3_altcat_2(B,A) )
           => ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v11_altcat_1(B)
              & v12_altcat_1(B)
              & v1_altcat_2(B)
              & v3_altcat_2(B,A)
              & v1_yellow21(B) ) ) ) ) ).

fof(cc9_waybel_0,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => ( ( v2_orders_2(A)
          & v1_lattice3(A)
          & v24_waybel_0(A) )
       => ( ~ v3_struct_0(A)
          & v2_orders_2(A)
          & v1_lattice3(A)
          & v2_yellow_0(A) ) ) ) ).

fof(cc9_yellow21,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v2_yellow21(A)
        & l2_altcat_1(A) )
     => ! [B] :
          ( m1_altcat_2(B,A)
         => ( ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v3_altcat_2(B,A) )
           => ( ~ v3_struct_0(B)
              & v2_altcat_1(B)
              & v9_altcat_1(B)
              & v11_altcat_1(B)
              & v12_altcat_1(B)
              & v1_altcat_2(B)
              & v3_altcat_2(B,A)
              & v2_yellow18(B)
              & v3_yellow18(B)
              & v4_yellow18(B)
              & v1_yellow21(B)
              & v2_yellow21(B) ) ) ) ) ).

fof(d11_altcat_2,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => ! [B] :
          ( l2_altcat_1(B)
         => ( m1_altcat_2(B,A)
          <=> ( r1_tarski(u1_struct_0(B),u1_struct_0(A))
              & r2_altcat_2(k2_zfmisc_1(u1_struct_0(B),u1_struct_0(B)),k2_zfmisc_1(u1_struct_0(A),u1_struct_0(A)),u1_altcat_1(B),u1_altcat_1(A))
              & r2_altcat_2(k3_zfmisc_1(u1_struct_0(B),u1_struct_0(B),u1_struct_0(B)),k3_zfmisc_1(u1_struct_0(A),u1_struct_0(A),u1_struct_0(A)),u2_altcat_1(B),u2_altcat_1(A)) ) ) ) ) ).

fof(d11_waybel34,axiom,
    ! [A] :
      ( ~ v2_setfam_1(A)
     => ! [B] :
          ( ( ~ v3_struct_0(B)
            & v2_altcat_1(B)
            & v6_altcat_1(B)
            & v3_altcat_2(B,k5_waybel34(A))
            & m1_altcat_2(B,k5_waybel34(A)) )
         => ( B = k9_waybel34(A)
          <=> ( ! [C] :
                  ( m1_subset_1(C,u1_struct_0(k5_waybel34(A)))
                 => m1_subset_1(C,u1_struct_0(B)) )
              & ! [C] :
                  ( m1_subset_1(C,u1_struct_0(k5_waybel34(A)))
                 => ! [D] :
                      ( m1_subset_1(D,u1_struct_0(k5_waybel34(A)))
                     => ! [E] :
                          ( m1_subset_1(E,u1_struct_0(B))
                         => ! [F] :
                              ( m1_subset_1(F,u1_struct_0(B))
                             => ( ( E = C
                                  & F = D )
                               => ( k1_altcat_1(k5_waybel34(A),C,D) = k1_xboole_0
                                  | ! [G] :
                                      ( m1_subset_1(G,k1_altcat_1(k5_waybel34(A),C,D))
                                     => ( r2_hidden(G,k1_altcat_1(B,E,F))
                                      <=> v22_waybel_0(k2_waybel34(k3_yellow21(k5_waybel34(A),D),k3_yellow21(k5_waybel34(A),C),k5_yellow21(k5_waybel34(A),C,D,G)),k3_yellow21(k5_waybel34(A),D),k3_yellow21(k5_waybel34(A),C)) ) ) ) ) ) ) ) ) ) ) ) ) ).

fof(d6_yellow21,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v2_yellow21(A)
        & l2_altcat_1(A) )
     => ! [B] :
          ( m1_subset_1(B,u1_struct_0(A))
         => k3_yellow21(A,B) = B ) ) ).

fof(dt_g1_orders_2,axiom,
    ! [A,B] :
      ( m1_relset_1(B,A,A)
     => ( v1_orders_2(g1_orders_2(A,B))
        & l1_orders_2(g1_orders_2(A,B)) ) ) ).

fof(dt_g2_altcat_1,axiom,
    ! [A,B,C] :
      ( ( m1_pboole(B,k2_zfmisc_1(A,A))
        & m3_pboole(C,k3_zfmisc_1(A,A,A),k3_altcat_1(A,B,B),k2_altcat_1(A,B)) )
     => ( v6_altcat_1(g2_altcat_1(A,B,C))
        & l2_altcat_1(g2_altcat_1(A,B,C)) ) ) ).

fof(dt_k1_altcat_1,axiom,
    $true ).

fof(dt_k1_xboole_0,axiom,
    $true ).

fof(dt_k1_yellow21,axiom,
    ! [A] : l1_struct_0(k1_yellow21(A)) ).

fof(dt_k1_zfmisc_1,axiom,
    $true ).

fof(dt_k2_altcat_1,axiom,
    ! [A,B] :
      ( m1_pboole(B,k2_zfmisc_1(A,A))
     => m1_pboole(k2_altcat_1(A,B),k3_zfmisc_1(A,A,A)) ) ).

fof(dt_k2_waybel34,axiom,
    ! [A,B,C] :
      ( ( v2_orders_2(A)
        & v3_orders_2(A)
        & v4_orders_2(A)
        & v1_lattice3(A)
        & v2_lattice3(A)
        & l1_orders_2(A)
        & v2_orders_2(B)
        & v3_orders_2(B)
        & v4_orders_2(B)
        & v1_lattice3(B)
        & v2_lattice3(B)
        & l1_orders_2(B)
        & v1_funct_1(C)
        & v1_funct_2(C,u1_struct_0(B),u1_struct_0(A))
        & m1_relset_1(C,u1_struct_0(B),u1_struct_0(A)) )
     => ( v1_funct_1(k2_waybel34(A,B,C))
        & v1_funct_2(k2_waybel34(A,B,C),u1_struct_0(A),u1_struct_0(B))
        & m2_relset_1(k2_waybel34(A,B,C),u1_struct_0(A),u1_struct_0(B)) ) ) ).

fof(dt_k2_zfmisc_1,axiom,
    $true ).

fof(dt_k3_altcat_1,axiom,
    ! [A,B,C] :
      ( ( m1_pboole(B,k2_zfmisc_1(A,A))
        & m1_pboole(C,k2_zfmisc_1(A,A)) )
     => m1_pboole(k3_altcat_1(A,B,C),k3_zfmisc_1(A,A,A)) ) ).

fof(dt_k3_yellow21,axiom,
    ! [A,B] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v2_yellow21(A)
        & l2_altcat_1(A)
        & m1_subset_1(B,u1_struct_0(A)) )
     => ( v2_orders_2(k3_yellow21(A,B))
        & v3_orders_2(k3_yellow21(A,B))
        & v4_orders_2(k3_yellow21(A,B))
        & v1_lattice3(k3_yellow21(A,B))
        & v2_lattice3(k3_yellow21(A,B))
        & l1_orders_2(k3_yellow21(A,B)) ) ) ).

fof(dt_k3_zfmisc_1,axiom,
    $true ).

fof(dt_k5_waybel34,axiom,
    ! [A] :
      ( ~ v1_xboole_0(A)
     => ( ~ v3_struct_0(k5_waybel34(A))
        & v2_altcat_1(k5_waybel34(A))
        & v6_altcat_1(k5_waybel34(A))
        & v11_altcat_1(k5_waybel34(A))
        & v12_altcat_1(k5_waybel34(A))
        & v2_yellow21(k5_waybel34(A))
        & l2_altcat_1(k5_waybel34(A)) ) ) ).

fof(dt_k5_yellow21,axiom,
    ! [A,B,C,D] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v2_yellow21(A)
        & l2_altcat_1(A)
        & m1_subset_1(B,u1_struct_0(A))
        & m1_subset_1(C,u1_struct_0(A))
        & m1_subset_1(D,k1_altcat_1(A,B,C)) )
     => ( v1_funct_1(k5_yellow21(A,B,C,D))
        & v1_funct_2(k5_yellow21(A,B,C,D),u1_struct_0(k3_yellow21(A,B)),u1_struct_0(k3_yellow21(A,C)))
        & v5_orders_3(k5_yellow21(A,B,C,D),k3_yellow21(A,B),k3_yellow21(A,C))
        & m2_relset_1(k5_yellow21(A,B,C,D),u1_struct_0(k3_yellow21(A,B)),u1_struct_0(k3_yellow21(A,C))) ) ) ).

fof(dt_k9_waybel34,axiom,
    ! [A] :
      ( ~ v2_setfam_1(A)
     => ( ~ v3_struct_0(k9_waybel34(A))
        & v2_altcat_1(k9_waybel34(A))
        & v6_altcat_1(k9_waybel34(A))
        & v3_altcat_2(k9_waybel34(A),k5_waybel34(A))
        & m1_altcat_2(k9_waybel34(A),k5_waybel34(A)) ) ) ).

fof(dt_l1_altcat_1,axiom,
    ! [A] :
      ( l1_altcat_1(A)
     => l1_struct_0(A) ) ).

fof(dt_l1_orders_2,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => l1_struct_0(A) ) ).

fof(dt_l1_struct_0,axiom,
    $true ).

fof(dt_l2_altcat_1,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => l1_altcat_1(A) ) ).

fof(dt_m1_altcat_2,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => ! [B] :
          ( m1_altcat_2(B,A)
         => l2_altcat_1(B) ) ) ).

fof(dt_m1_pboole,axiom,
    ! [A,B] :
      ( m1_pboole(B,A)
     => ( v1_relat_1(B)
        & v1_funct_1(B) ) ) ).

fof(dt_m1_relset_1,axiom,
    $true ).

fof(dt_m1_subset_1,axiom,
    $true ).

fof(dt_m2_relset_1,axiom,
    ! [A,B,C] :
      ( m2_relset_1(C,A,B)
     => m1_subset_1(C,k1_zfmisc_1(k2_zfmisc_1(A,B))) ) ).

fof(dt_m3_pboole,axiom,
    ! [A,B,C] :
      ( ( m1_pboole(B,A)
        & m1_pboole(C,A) )
     => ! [D] :
          ( m3_pboole(D,A,B,C)
         => m1_pboole(D,A) ) ) ).

fof(dt_u1_altcat_1,axiom,
    ! [A] :
      ( l1_altcat_1(A)
     => m1_pboole(u1_altcat_1(A),k2_zfmisc_1(u1_struct_0(A),u1_struct_0(A))) ) ).

fof(dt_u1_orders_2,axiom,
    ! [A] :
      ( l1_orders_2(A)
     => m2_relset_1(u1_orders_2(A),u1_struct_0(A),u1_struct_0(A)) ) ).

fof(dt_u1_struct_0,axiom,
    $true ).

fof(dt_u2_altcat_1,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => m3_pboole(u2_altcat_1(A),k3_zfmisc_1(u1_struct_0(A),u1_struct_0(A),u1_struct_0(A)),k3_altcat_1(u1_struct_0(A),u1_altcat_1(A),u1_altcat_1(A)),k2_altcat_1(u1_struct_0(A),u1_altcat_1(A))) ) ).

fof(existence_l1_altcat_1,axiom,
    ? [A] : l1_altcat_1(A) ).

fof(existence_l1_orders_2,axiom,
    ? [A] : l1_orders_2(A) ).

fof(existence_l1_struct_0,axiom,
    ? [A] : l1_struct_0(A) ).

fof(existence_l2_altcat_1,axiom,
    ? [A] : l2_altcat_1(A) ).

fof(existence_m1_altcat_2,axiom,
    ! [A] :
      ( l2_altcat_1(A)
     => ? [B] : m1_altcat_2(B,A) ) ).

fof(existence_m1_pboole,axiom,
    ! [A] :
    ? [B] : m1_pboole(B,A) ).

fof(existence_m1_relset_1,axiom,
    ! [A,B] :
    ? [C] : m1_relset_1(C,A,B) ).

fof(existence_m1_subset_1,axiom,
    ! [A] :
    ? [B] : m1_subset_1(B,A) ).

fof(existence_m2_relset_1,axiom,
    ! [A,B] :
    ? [C] : m2_relset_1(C,A,B) ).

fof(existence_m3_pboole,axiom,
    ! [A,B,C] :
      ( ( m1_pboole(B,A)
        & m1_pboole(C,A) )
     => ? [D] : m3_pboole(D,A,B,C) ) ).

fof(fc10_waybel_8,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_orders_2(A)
        & v24_waybel_0(A)
        & l1_orders_2(A) )
     => ( ~ v3_struct_0(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v1_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v2_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v24_waybel_0(g1_orders_2(u1_struct_0(A),u1_orders_2(A))) ) ) ).

fof(fc14_finset_1,axiom,
    ! [A,B] :
      ( ( v1_finset_1(A)
        & v1_finset_1(B) )
     => v1_finset_1(k2_zfmisc_1(A,B)) ) ).

fof(fc15_finset_1,axiom,
    ! [A,B,C] :
      ( ( v1_finset_1(A)
        & v1_finset_1(B)
        & v1_finset_1(C) )
     => v1_finset_1(k3_zfmisc_1(A,B,C)) ) ).

fof(fc1_altcat_4,axiom,
    ! [A,B] :
      ( ( ~ v3_struct_0(A)
        & v12_altcat_1(A)
        & l2_altcat_1(A)
        & m1_subset_1(B,u1_struct_0(A)) )
     => ~ v1_xboole_0(k1_altcat_1(A,B,B)) ) ).

fof(fc1_struct_0,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & l1_struct_0(A) )
     => ~ v1_xboole_0(u1_struct_0(A)) ) ).

fof(fc4_waybel_8,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & l1_orders_2(A) )
     => ( ~ v3_struct_0(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v1_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A))) ) ) ).

fof(fc5_waybel_8,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & v2_orders_2(A)
        & l1_orders_2(A) )
     => ( ~ v3_struct_0(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v1_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v2_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A))) ) ) ).

fof(fc6_membered,axiom,
    ( v1_xboole_0(k1_xboole_0)
    & v1_membered(k1_xboole_0)
    & v2_membered(k1_xboole_0)
    & v3_membered(k1_xboole_0)
    & v4_membered(k1_xboole_0)
    & v5_membered(k1_xboole_0) ) ).

fof(fc6_waybel34,axiom,
    ! [A] :
      ( ~ v2_setfam_1(A)
     => ( ~ v3_struct_0(k5_waybel34(A))
        & v2_altcat_1(k5_waybel34(A))
        & v6_altcat_1(k5_waybel34(A))
        & v9_altcat_1(k5_waybel34(A))
        & v11_altcat_1(k5_waybel34(A))
        & v12_altcat_1(k5_waybel34(A))
        & v1_altcat_2(k5_waybel34(A))
        & v2_yellow18(k5_waybel34(A))
        & v3_yellow18(k5_waybel34(A))
        & v4_yellow18(k5_waybel34(A))
        & v1_yellow21(k5_waybel34(A))
        & v2_yellow21(k5_waybel34(A))
        & v3_yellow21(k5_waybel34(A)) ) ) ).

fof(fc6_waybel_8,axiom,
    ! [A] :
      ( ( v3_orders_2(A)
        & l1_orders_2(A) )
     => ( v1_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v3_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A))) ) ) ).

fof(fc7_waybel_8,axiom,
    ! [A] :
      ( ( v4_orders_2(A)
        & l1_orders_2(A) )
     => ( v1_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v4_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A))) ) ) ).

fof(fc8_waybel_8,axiom,
    ! [A] :
      ( ( v2_lattice3(A)
        & l1_orders_2(A) )
     => ( ~ v3_struct_0(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v1_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v2_lattice3(g1_orders_2(u1_struct_0(A),u1_orders_2(A))) ) ) ).

fof(fc9_waybel_8,axiom,
    ! [A] :
      ( ( v1_lattice3(A)
        & l1_orders_2(A) )
     => ( ~ v3_struct_0(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v1_orders_2(g1_orders_2(u1_struct_0(A),u1_orders_2(A)))
        & v1_lattice3(g1_orders_2(u1_struct_0(A),u1_orders_2(A))) ) ) ).

fof(free_g1_orders_2,axiom,
    ! [A,B] :
      ( m1_relset_1(B,A,A)
     => ! [C,D] :
          ( g1_orders_2(A,B) = g1_orders_2(C,D)
         => ( A = C
            & B = D ) ) ) ).

fof(free_g2_altcat_1,axiom,
    ! [A,B,C] :
      ( ( m1_pboole(B,k2_zfmisc_1(A,A))
        & m3_pboole(C,k3_zfmisc_1(A,A,A),k3_altcat_1(A,B,B),k2_altcat_1(A,B)) )
     => ! [D,E,F] :
          ( g2_altcat_1(A,B,C) = g2_altcat_1(D,E,F)
         => ( A = D
            & B = E
            & C = F ) ) ) ).

fof(rc13_waybel_0,axiom,
    ? [A] :
      ( l1_orders_2(A)
      & ~ v3_struct_0(A)
      & v1_orders_2(A)
      & v2_orders_2(A)
      & v3_orders_2(A)
      & v4_orders_2(A)
      & v1_lattice3(A)
      & v2_lattice3(A)
      & v3_lattice3(A)
      & v1_yellow_0(A)
      & v2_yellow_0(A)
      & v3_yellow_0(A)
      & v24_waybel_0(A)
      & v25_waybel_0(A) ) ).

fof(rc1_finset_1,axiom,
    ? [A] :
      ( ~ v1_xboole_0(A)
      & v1_finset_1(A) ) ).

fof(rc1_funct_1,axiom,
    ? [A] :
      ( v1_relat_1(A)
      & v1_funct_1(A) ) ).

fof(rc1_lattice3,axiom,
    ? [A] :
      ( l1_orders_2(A)
      & ~ v3_struct_0(A)
      & v1_orders_2(A)
      & v2_orders_2(A)
      & v3_orders_2(A)
      & v4_orders_2(A)
      & v3_lattice3(A) ) ).

fof(rc1_membered,axiom,
    ? [A] :
      ( ~ v1_xboole_0(A)
      & v1_membered(A)
      & v2_membered(A)
      & v3_membered(A)
      & v4_membered(A)
      & v5_membered(A) ) ).

fof(rc1_waybel10,axiom,
    ! [A,B] :
      ( ( l1_orders_2(A)
        & ~ v3_struct_0(B)
        & v2_orders_2(B)
        & l1_orders_2(B) )
     => ? [C] :
          ( m1_relset_1(C,u1_struct_0(A),u1_struct_0(B))
          & v1_relat_1(C)
          & v1_funct_1(C)
          & v1_funct_2(C,u1_struct_0(A),u1_struct_0(B))
          & v1_partfun1(C,u1_struct_0(A),u1_struct_0(B))
          & v5_orders_3(C,A,B) ) ) ).

fof(rc1_yellow21,axiom,
    ? [A] :
      ( l2_altcat_1(A)
      & ~ v3_struct_0(A)
      & v2_altcat_1(A)
      & v6_altcat_1(A)
      & v9_altcat_1(A)
      & v11_altcat_1(A)
      & v12_altcat_1(A)
      & v1_altcat_2(A)
      & v2_yellow18(A)
      & v3_yellow18(A)
      & v4_yellow18(A)
      & v1_yellow21(A)
      & v2_yellow21(A)
      & v3_yellow21(A) ) ).

fof(rc2_funct_1,axiom,
    ? [A] :
      ( v1_relat_1(A)
      & v1_xboole_0(A)
      & v1_funct_1(A) ) ).

fof(rc2_lattice3,axiom,
    ? [A] :
      ( l1_orders_2(A)
      & ~ v3_struct_0(A)
      & v1_orders_2(A)
      & v2_orders_2(A)
      & v3_orders_2(A)
      & v4_orders_2(A)
      & v1_lattice3(A)
      & v2_lattice3(A)
      & v3_lattice3(A) ) ).

fof(rc2_setfam_1,axiom,
    ? [A] : ~ v2_setfam_1(A) ).

fof(rc2_yellow_0,axiom,
    ? [A] :
      ( l1_orders_2(A)
      & ~ v3_struct_0(A)
      & v2_orders_2(A)
      & v3_orders_2(A)
      & v4_orders_2(A)
      & v1_lattice3(A)
      & v2_lattice3(A)
      & v3_lattice3(A)
      & v1_yellow_0(A)
      & v2_yellow_0(A)
      & v3_yellow_0(A) ) ).

fof(rc3_finset_1,axiom,
    ! [A] :
      ( ~ v1_xboole_0(A)
     => ? [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
          & ~ v1_xboole_0(B)
          & v1_finset_1(B) ) ) ).

fof(rc3_funct_1,axiom,
    ? [A] :
      ( v1_relat_1(A)
      & v1_funct_1(A)
      & v2_funct_1(A) ) ).

fof(rc3_setfam_1,axiom,
    ! [A] :
      ( ~ v2_setfam_1(A)
     => ? [B] :
          ( m1_subset_1(B,A)
          & ~ v1_xboole_0(B) ) ) ).

fof(rc3_struct_0,axiom,
    ? [A] :
      ( l1_struct_0(A)
      & ~ v3_struct_0(A) ) ).

fof(rc4_finset_1,axiom,
    ! [A] :
      ( ~ v1_xboole_0(A)
     => ? [B] :
          ( m1_subset_1(B,k1_zfmisc_1(A))
          & ~ v1_xboole_0(B)
          & v1_finset_1(B) ) ) ).

fof(rc5_struct_0,axiom,
    ! [A] :
      ( ( ~ v3_struct_0(A)
        & l1_struct_0(A) )
     => ? [B] :
          ( m1_subset_1(B,k1_zfmisc_1(u1_struct_0(A)))
          & ~ v1_xboole_0(B) ) ) ).

fof(rc7_functor0,axiom,
    ? [A] :
      ( l2_altcat_1(A)
      & ~ v3_struct_0(A)
      & v1_altcat_2(A) ) ).

fof(redefinition_k3_yellow21,axiom,
    ! [A,B] :
      ( ( ~ v3_struct_0(A)
        & v2_altcat_1(A)
        & v11_altcat_1(A)
        & v12_altcat_1(A)
        & v2_yellow21(A)
        & l2_altcat_1(A)
        & m1_subset_1(B,u1_struct_0(A)) )
     => k3_yellow21(A,B) = k1_yellow21(B) ) ).

fof(redefinition_m2_relset_1,axiom,
    ! [A,B,C] :
      ( m2_relset_1(C,A,B)
    <=> m1_relset_1(C,A,B) ) ).

fof(redefinition_r2_altcat_2,axiom,
    ! [A,B,C,D] :
      ( ( m1_pboole(C,A)
        & m1_pboole(D,B) )
     => ( r2_altcat_2(A,B,C,D)
      <=> r1_altcat_2(C,D) ) ) ).

fof(reflexivity_r1_altcat_2,axiom,
    ! [A,B] :
      ( ( v1_relat_1(A)
        & v1_funct_1(A)
        & v1_relat_1(B)
        & v1_funct_1(B) )
     => r1_altcat_2(A,A) ) ).

fof(reflexivity_r1_tarski,axiom,
    ! [A,B] : r1_tarski(A,A) ).

fof(reflexivity_r2_altcat_2,axiom,
    ! [A,B,C,D] :
      ( ( m1_pboole(C,A)
        & m1_pboole(D,B) )
     => r2_altcat_2(A,B,C,C) ) ).

fof(t15_waybel34,axiom,
    ! [A] :
      ( ~ v2_setfam_1(A)
     => ! [B] :
          ( ( v2_orders_2(B)
            & v3_orders_2(B)
            & v4_orders_2(B)
            & v1_lattice3(B)
            & v2_lattice3(B)
            & l1_orders_2(B) )
         => ( m1_subset_1(B,u1_struct_0(k5_waybel34(A)))
          <=> ( v1_orders_2(B)
              & v3_lattice3(B)
              & r2_hidden(u1_struct_0(B),A) ) ) ) ) ).

fof(t1_subset,axiom,
    ! [A,B] :
      ( r2_hidden(A,B)
     => m1_subset_1(A,B) ) ).

fof(t2_subset,axiom,
    ! [A,B] :
      ( m1_subset_1(A,B)
     => ( v1_xboole_0(B)
        | r2_hidden(A,B) ) ) ).

fof(t3_subset,axiom,
    ! [A,B] :
      ( m1_subset_1(A,k1_zfmisc_1(B))
    <=> r1_tarski(A,B) ) ).

fof(t4_subset,axiom,
    ! [A,B,C] :
      ( ( r2_hidden(A,B)
        & m1_subset_1(B,k1_zfmisc_1(C)) )
     => m1_subset_1(A,C) ) ).

fof(t5_subset,axiom,
    ! [A,B,C] :
      ~ ( r2_hidden(A,B)
        & m1_subset_1(B,k1_zfmisc_1(C))
        & v1_xboole_0(C) ) ).

fof(t6_boole,axiom,
    ! [A] :
      ( v1_xboole_0(A)
     => A = k1_xboole_0 ) ).

fof(t7_boole,axiom,
    ! [A,B] :
      ~ ( r2_hidden(A,B)
        & v1_xboole_0(B) ) ).

fof(t8_boole,axiom,
    ! [A,B] :
      ~ ( v1_xboole_0(A)
        & A != B
        & v1_xboole_0(B) ) ).

%------------------------------------------------------------------------------
