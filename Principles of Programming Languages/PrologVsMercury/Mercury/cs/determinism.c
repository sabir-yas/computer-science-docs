/*
** Automatically generated from `determinism.m'
** by the Mercury compiler,
** version 22.01.8
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** UNBOXED_INT64S=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__determinism__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/determinism.c"
#include "array.mh"

#line 31 "Mercury/cs/determinism.c"
#line 32 "Mercury/cs/determinism.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/determinism.c"
#line 36 "Mercury/cs/determinism.c"
#include "determinism.mh"

#line 39 "Mercury/cs/determinism.c"
#line 40 "Mercury/cs/determinism.c"
#include "io.mh"

#line 43 "Mercury/cs/determinism.c"
#line 44 "Mercury/cs/determinism.c"
#include "string.mh"

#line 47 "Mercury/cs/determinism.c"
#line 48 "Mercury/cs/determinism.c"
#include "time.mh"

#line 51 "Mercury/cs/determinism.c"
#line 52 "Mercury/cs/determinism.c"
#ifndef DETERMINISM_DECL_GUARD
#define DETERMINISM_DECL_GUARD

#line 56 "Mercury/cs/determinism.c"
#line 57 "Mercury/cs/determinism.c"

#endif
#line 60 "Mercury/cs/determinism.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];
MR_decl_label3(determinism__between_3_0, 5,2,1)
MR_decl_label2(determinism__factor_sol_2_0, 1,2)
MR_decl_label10(main_2_0, 2,3,4,5,6,8,7,11,13,15)
MR_decl_label10(main_2_0, 17,14,19,22,23,24,25,26,28,29)
MR_decl_label2(main_2_0, 30,31)
MR_decl_label2(determinism__member_of_2_0, 5,3)
MR_decl_label1(fn__determinism__show_list_1_0, 3)
MR_def_extern_entry(main_2_0)
MR_decl_static(determinism__member_of_2_0)
MR_decl_static(determinism__member_sol_2_0)
MR_decl_static(determinism__between_3_0)
MR_decl_static(determinism__factor_sol_2_0)
MR_decl_static(fn__determinism__show_list_1_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
3,
((MR_Word *) (MR_Unsigned) 0U)
},
{
2,
MR_TAG_COMMON(1,0,0)
},
{
1,
MR_TAG_COMMON(1,0,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__determinism__show_list_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_COMMON(1,0),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
((MR_Word *) (MR_Integer) 0),
2,
MR_COMMON(1,0),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
((MR_Word *) (MR_Integer) 0),
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__determinism__show_list_1_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(determinism__member_sol_2_0),
1,
MR_TAG_COMMON(1,0,2)
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(determinism__member_sol_2_0),
1,
MR_TAG_COMMON(1,0,2)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(2,2),
MR_ENTRY_AP(determinism__factor_sol_2_0),
1,
12
},
};

MR_decl_entry(fn__string__int_to_string_1_0);
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(2,3),
MR_ENTRY_AP(fn__string__int_to_string_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__determinism__show_list_1_0_1 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string",
2,
0
},
"determinism",
"determinism.m",
77,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"determinism",
"determinism",
"factor_sol",
2,
0
},
"determinism",
"determinism.m",
69,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"determinism",
"determinism",
"member_sol",
2,
0
},
"determinism",
"determinism.m",
48,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"determinism",
"determinism",
"member_sol",
2,
0
},
"determinism",
"determinism.m",
48,
"4"
};


MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__int__mod_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__solutions__solutions_1_1);

MR_BEGIN_MODULE(determinism_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,4,5,6,8,7,11,13,15)
	MR_init_label10(main_2_0,17,14,19,22,23,24,25,26,28,29)
	MR_init_label2(main_2_0,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = ((MR_Word) MR_string_const("det: square(5) = ", 17));
	MR_r1 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 5 * (MR_Unsigned) (MR_Integer) 5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("semidet: is_even(4)\? ", 21));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i7);
	}
	MR_r1 = ((MR_Word) MR_string_const("yes\n", 4));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i11);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("no\n", 3));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i11);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("semidet: is_even(5)\? ", 21));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i14);
	}
	MR_r1 = ((MR_Word) MR_string_const("yes\n", 4));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i17);
MR_def_label(main_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,3,0));
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_np_call_localret_ent(fn__solutions__solutions_1_1,
		main_2_0_i22);
MR_def_label(main_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_string_const("no\n", 3));
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i19);
MR_def_label(main_2_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,3,1));
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_np_call_localret_ent(fn__solutions__solutions_1_1,
		main_2_0_i22);
MR_def_label(main_2_0, 22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_string_const("nondet: members of [1,2,3]: [", 29));
	MR_np_call_localret_ent(fn__determinism__show_list_1_0,
		main_2_0_i23);
MR_def_label(main_2_0, 23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("]\n", 2));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i24);
MR_def_label(main_2_0, 24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i25);
MR_def_label(main_2_0, 25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i26);
MR_def_label(main_2_0, 26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_TAG_COMMON(0,4,0));
	MR_np_call_localret_ent(fn__solutions__solutions_1_1,
		main_2_0_i28);
MR_def_label(main_2_0, 28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_string_const("multi: factors of 12: [", 23));
	MR_np_call_localret_ent(fn__determinism__show_list_1_0,
		main_2_0_i29);
MR_def_label(main_2_0, 29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("]\n", 2));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i30);
MR_def_label(main_2_0, 30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i31);
MR_def_label(main_2_0, 31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(determinism_module1)
	MR_init_entry1(determinism__member_of_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__determinism__member_of_2_0);
	MR_init_label2(determinism__member_of_2_0,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member_of'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(determinism__member_of_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred determinism.member_of/2-0", 1);
MR_def_label(determinism__member_of_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_tfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(determinism__member_of_2_0_i3));
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_succeed();
MR_def_label(determinism__member_of_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_r1 = MR_fv(1);
	MR_GOTO_LAB(determinism__member_of_2_0_i5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(determinism_module2)
	MR_init_entry1(determinism__member_sol_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__determinism__member_sol_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member_sol'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(determinism__member_sol_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(determinism__member_of_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(determinism_module3)
	MR_init_entry1(determinism__between_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__determinism__between_3_0);
	MR_init_label3(determinism__between_3_0,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'between'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(determinism__between_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred determinism.between/3-0", 2);
MR_def_label(determinism__between_3_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(determinism__between_3_0_i2));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	if ((((MR_Integer) MR_r1) <= ((MR_Integer) MR_r2))) {
		MR_GOTO_LAB(determinism__between_3_0_i1);
	}
MR_def_label(determinism__between_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r1) + (MR_Unsigned) (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	if ((((MR_Integer) MR_tempr1) > ((MR_Integer) MR_r2))) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(determinism__between_3_0_i5);
	}
MR_def_label(determinism__between_3_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(determinism_module4)
	MR_init_entry1(determinism__factor_sol_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__determinism__factor_sol_2_0);
	MR_init_label2(determinism__factor_sol_2_0,1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'factor_sol'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(determinism__factor_sol_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred determinism.factor_sol/2-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(determinism__between_3_0,
		determinism__factor_sol_2_0_i1);
MR_def_label(determinism__factor_sol_2_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_np_call_localret_ent(fn__int__mod_2_0,
		determinism__factor_sol_2_0_i2);
MR_def_label(determinism__factor_sol_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(determinism_module5)
	MR_init_entry1(fn__determinism__show_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__determinism__show_list_1_0);
	MR_init_label1(fn__determinism__show_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__determinism__show_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = ((MR_Word) MR_string_const(", ", 2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,5,0));
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__determinism__show_list_1_0_i3);
MR_def_label(fn__determinism__show_list_1_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__string__join_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__determinism_maybe_bunch_0(void)
{
	determinism_module0();
	determinism_module1();
	determinism_module2();
	determinism_module3();
	determinism_module4();
	determinism_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__determinism__init(void);
void mercury__determinism__init_type_tables(void);
void mercury__determinism__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__determinism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__determinism__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__determinism__init_threadscope_string_table(void);
#endif
const char *mercury__determinism__grade_check(void);

void mercury__determinism__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__determinism_maybe_bunch_0();
	mercury__determinism__init_debugger();
}

void mercury__determinism__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__determinism__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__determinism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__determinism);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__determinism__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__determinism__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__determinism__grade_check(void)
{
    return &MR_GRADE_VAR;
}
