/*
** Automatically generated from `calc.m'
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
INIT mercury__calc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/calc.c"
#include "array.mh"

#line 31 "Mercury/cs/calc.c"
#line 32 "Mercury/cs/calc.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/calc.c"
#line 36 "Mercury/cs/calc.c"
#include "calc.mh"

#line 39 "Mercury/cs/calc.c"
#line 40 "Mercury/cs/calc.c"
#include "io.mh"

#line 43 "Mercury/cs/calc.c"
#line 44 "Mercury/cs/calc.c"
#include "string.mh"

#line 47 "Mercury/cs/calc.c"
#line 48 "Mercury/cs/calc.c"
#include "time.mh"

#line 51 "Mercury/cs/calc.c"
#line 52 "Mercury/cs/calc.c"
#ifndef CALC_DECL_GUARD
#define CALC_DECL_GUARD

#line 56 "Mercury/cs/calc.c"
#line 57 "Mercury/cs/calc.c"

#endif
#line 60 "Mercury/cs/calc.c"

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_calc__type_ctor_info_expr_0;
MR_decl_label8(main_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label10(fn__calc__eval_1_0, 29,4,5,30,15,16,31,11,12,32)
MR_decl_label3(fn__calc__eval_1_0, 7,8,13)
MR_decl_label10(fn__calc__show_1_0, 42,4,5,6,7,43,27,28,29,30)
MR_decl_label10(fn__calc__show_1_0, 44,18,19,20,21,45,11,12,13,14)
MR_decl_label2(fn__calc__show_1_0, 15,24)
MR_decl_label10(__Unify___calc__expr_0_0, 5,7,25,27,17,19,11,13,23,36)
MR_decl_label1(__Unify___calc__expr_0_0, 1)
MR_decl_label10(__Compare___calc__expr_0_0, 3,5,9,75,81,83,41,45,47,23)
MR_decl_label8(__Compare___calc__expr_0_0, 26,28,59,104,65,105,66,136)
MR_def_extern_entry(main_2_0)
MR_decl_static(fn__calc__eval_1_0)
MR_decl_static(fn__calc__show_1_0)
MR_decl_static(__Unify___calc__expr_0_0)
MR_decl_static(__Compare___calc__expr_0_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
2
},
{
4
},
{
3
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_TAG_COMMON(4,0,1),
MR_TAG_COMMON(4,0,0)
}
},
{
{
MR_TAG_COMMON(4,0,2),
MR_TAG_COMMON(2,1,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_calc__type_ctor_info_expr_0;

const MR_PseudoTypeInfo mercury_data_calc__field_types_expr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0
};

static const MR_DuFunctorDesc mercury_data_calc__du_functor_desc_expr_0_0 = {
	"add",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_calc__field_types_expr_0_0,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

const MR_PseudoTypeInfo mercury_data_calc__field_types_expr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0
};

static const MR_DuFunctorDesc mercury_data_calc__du_functor_desc_expr_0_1 = {
	"sub",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_calc__field_types_expr_0_1,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

const MR_PseudoTypeInfo mercury_data_calc__field_types_expr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0
};

static const MR_DuFunctorDesc mercury_data_calc__du_functor_desc_expr_0_2 = {
	"mul",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_calc__field_types_expr_0_2,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

const MR_PseudoTypeInfo mercury_data_calc__field_types_expr_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_calc__type_ctor_info_expr_0
};

static const MR_DuFunctorDesc mercury_data_calc__du_functor_desc_expr_0_3 = {
	"div",
	2,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_calc__field_types_expr_0_3,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_calc__field_types_expr_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_calc__du_functor_desc_expr_0_4 = {
	"num",
	1,
	0,
	MR_SECTAG_NONE,
	4,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_calc__field_types_expr_0_4,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

const MR_DuFunctorDescPtr mercury_data_calc__du_stag_ordered_expr_0_0[] = {
	&mercury_data_calc__du_functor_desc_expr_0_0

};

const MR_DuFunctorDescPtr mercury_data_calc__du_stag_ordered_expr_0_1[] = {
	&mercury_data_calc__du_functor_desc_expr_0_1

};

const MR_DuFunctorDescPtr mercury_data_calc__du_stag_ordered_expr_0_2[] = {
	&mercury_data_calc__du_functor_desc_expr_0_2

};

const MR_DuFunctorDescPtr mercury_data_calc__du_stag_ordered_expr_0_3[] = {
	&mercury_data_calc__du_functor_desc_expr_0_3

};

const MR_DuFunctorDescPtr mercury_data_calc__du_stag_ordered_expr_0_4[] = {
	&mercury_data_calc__du_functor_desc_expr_0_4

};

const MR_DuPtagLayout mercury_data_calc__du_ptag_ordered_expr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_calc__du_stag_ordered_expr_0_0,
	-1,
	0,
	1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_calc__du_stag_ordered_expr_0_1,
	-1,
	1,
	1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_calc__du_stag_ordered_expr_0_2,
	-1,
	2,
	1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_calc__du_stag_ordered_expr_0_3,
	-1,
	3,
	1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_calc__du_stag_ordered_expr_0_4,
	-1,
	4,
	1 }

};

const MR_DuFunctorDescPtr mercury_data_calc__du_name_ordered_expr_0[] = {
	&mercury_data_calc__du_functor_desc_expr_0_0,
	&mercury_data_calc__du_functor_desc_expr_0_3,
	&mercury_data_calc__du_functor_desc_expr_0_2,
	&mercury_data_calc__du_functor_desc_expr_0_4,
	&mercury_data_calc__du_functor_desc_expr_0_1
};

const MR_Integer mercury_data_calc__functor_number_map_expr_0[] = {
	0,
	4,
	2,
	1,
	3
};
	
const MR_TypeCtorInfo_Struct mercury_data_calc__type_ctor_info_expr_0 = {
	0,
	18,
	5,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___calc__expr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___calc__expr_0_0)),
	"calc",
	"expr",
	{ (void *) mercury_data_calc__du_name_ordered_expr_0 },
	{ (void *) mercury_data_calc__du_ptag_ordered_expr_0 },
	5,
	12,
	mercury_data_calc__functor_number_map_expr_0
};



MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(calc_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label8(main_2_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	MR_sv(2) = ((MR_Word) MR_TAG_COMMON(0,1,1));
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__calc__eval_1_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = ((MR_Word) MR_string_const("Expression: ", 12));
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,1,1));
	MR_np_call_localret_ent(fn__calc__show_1_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = ((MR_Word) MR_string_const("Result: ", 8));
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		main_2_0_i7);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_47_2_0);

MR_BEGIN_MODULE(calc_module1)
	MR_init_entry1(fn__calc__eval_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calc__eval_1_0);
	MR_init_label10(fn__calc__eval_1_0,29,4,5,30,15,16,31,11,12,32)
	MR_init_label3(fn__calc__eval_1_0,7,8,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calc__eval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_r1)),
		MR_LABEL_AP(fn__calc__eval_1_0_i29) MR_AND
		MR_LABEL_AP(fn__calc__eval_1_0_i30) MR_AND
		MR_LABEL_AP(fn__calc__eval_1_0_i31) MR_AND
		MR_LABEL_AP(fn__calc__eval_1_0_i32) MR_AND
		MR_LABEL_AP(fn__calc__eval_1_0_i13));
MR_def_label(fn__calc__eval_1_0, 29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i4);
MR_def_label(fn__calc__eval_1_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i5);
MR_def_label(fn__calc__eval_1_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(1)) + (MR_Unsigned) ((MR_Integer) MR_r1));
	MR_decr_sp_and_return(2);
MR_def_label(fn__calc__eval_1_0, 30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i15);
MR_def_label(fn__calc__eval_1_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i16);
MR_def_label(fn__calc__eval_1_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(1)) - (MR_Unsigned) ((MR_Integer) MR_r1));
	MR_decr_sp_and_return(2);
MR_def_label(fn__calc__eval_1_0, 31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i11);
MR_def_label(fn__calc__eval_1_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i12);
MR_def_label(fn__calc__eval_1_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_sv(1)) * (MR_Unsigned) ((MR_Integer) MR_r1));
	MR_decr_sp_and_return(2);
MR_def_label(fn__calc__eval_1_0, 32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i7);
MR_def_label(fn__calc__eval_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__eval_1_0,
		fn__calc__eval_1_0_i8);
MR_def_label(fn__calc__eval_1_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_105_110_116_95_95_47_2_0);
	}
MR_def_label(fn__calc__eval_1_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(4, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calc_module2)
	MR_init_entry1(fn__calc__show_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__calc__show_1_0);
	MR_init_label10(fn__calc__show_1_0,42,4,5,6,7,43,27,28,29,30)
	MR_init_label10(fn__calc__show_1_0,44,18,19,20,21,45,11,12,13,14)
	MR_init_label2(fn__calc__show_1_0,15,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__calc__show_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_r1)),
		MR_LABEL_AP(fn__calc__show_1_0_i42) MR_AND
		MR_LABEL_AP(fn__calc__show_1_0_i43) MR_AND
		MR_LABEL_AP(fn__calc__show_1_0_i44) MR_AND
		MR_LABEL_AP(fn__calc__show_1_0_i45) MR_AND
		MR_LABEL_AP(fn__calc__show_1_0_i24));
MR_def_label(fn__calc__show_1_0, 42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = ((MR_Word) MR_string_const("(", 1));
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i4);
MR_def_label(fn__calc__show_1_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = ((MR_Word) MR_string_const(" + ", 3));
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i5);
MR_def_label(fn__calc__show_1_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const(")", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i6);
MR_def_label(fn__calc__show_1_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i7);
MR_def_label(fn__calc__show_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i15);
MR_def_label(fn__calc__show_1_0, 43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = ((MR_Word) MR_string_const("(", 1));
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i27);
MR_def_label(fn__calc__show_1_0, 27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = ((MR_Word) MR_string_const(" - ", 3));
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i28);
MR_def_label(fn__calc__show_1_0, 28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const(")", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i29);
MR_def_label(fn__calc__show_1_0, 29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i30);
MR_def_label(fn__calc__show_1_0, 30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i15);
MR_def_label(fn__calc__show_1_0, 44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(1) = ((MR_Word) MR_string_const("(", 1));
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i18);
MR_def_label(fn__calc__show_1_0, 18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = ((MR_Word) MR_string_const(" * ", 3));
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i19);
MR_def_label(fn__calc__show_1_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const(")", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i20);
MR_def_label(fn__calc__show_1_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i21);
MR_def_label(fn__calc__show_1_0, 21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i15);
MR_def_label(fn__calc__show_1_0, 45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = ((MR_Word) MR_string_const("(", 1));
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i11);
MR_def_label(fn__calc__show_1_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = ((MR_Word) MR_string_const(" / ", 3));
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__calc__show_1_0,
		fn__calc__show_1_0_i12);
MR_def_label(fn__calc__show_1_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const(")", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i13);
MR_def_label(fn__calc__show_1_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i14);
MR_def_label(fn__calc__show_1_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__calc__show_1_0_i15);
MR_def_label(fn__calc__show_1_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__calc__show_1_0, 24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(4, MR_r1, 0);
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calc_module3)
	MR_init_entry1(__Unify___calc__expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___calc__expr_0_0);
	MR_init_label10(__Unify___calc__expr_0_0,5,7,25,27,17,19,11,13,23,36)
	MR_init_label1(__Unify___calc__expr_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___calc__expr_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Unify___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i23));
MR_def_label(__Unify___calc__expr_0_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_localcall_lab(__Unify___calc__expr_0_0,
		__Unify___calc__expr_0_0_i7);
MR_def_label(__Unify___calc__expr_0_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Unify___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i23));
MR_def_label(__Unify___calc__expr_0_0, 25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(__Unify___calc__expr_0_0,
		__Unify___calc__expr_0_0_i27);
MR_def_label(__Unify___calc__expr_0_0, 27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Unify___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i23));
MR_def_label(__Unify___calc__expr_0_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_localcall_lab(__Unify___calc__expr_0_0,
		__Unify___calc__expr_0_0_i19);
MR_def_label(__Unify___calc__expr_0_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Unify___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i23));
MR_def_label(__Unify___calc__expr_0_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	}
	MR_np_localcall_lab(__Unify___calc__expr_0_0,
		__Unify___calc__expr_0_0_i13);
MR_def_label(__Unify___calc__expr_0_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Unify___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___calc__expr_0_0_i23));
MR_def_label(__Unify___calc__expr_0_0, 23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),4)) {
		MR_GOTO_LAB(__Unify___calc__expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(4, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(4, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___calc__expr_0_0, 36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___calc__expr_0_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(calc_module4)
	MR_init_entry1(__Compare___calc__expr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___calc__expr_0_0);
	MR_init_label10(__Compare___calc__expr_0_0,3,5,9,75,81,83,41,45,47,23)
	MR_init_label8(__Compare___calc__expr_0_0,26,28,59,104,65,105,66,136)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___calc__expr_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(2))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i59));
MR_def_label(__Compare___calc__expr_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___calc__expr_0_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i104);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___calc__expr_0_0,
		__Compare___calc__expr_0_0_i9);
MR_def_label(__Compare___calc__expr_0_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i136);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(2))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i59));
MR_def_label(__Compare___calc__expr_0_0, 75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i104));
MR_def_label(__Compare___calc__expr_0_0, 81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___calc__expr_0_0,
		__Compare___calc__expr_0_0_i83);
MR_def_label(__Compare___calc__expr_0_0, 83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i136);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(2))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i59));
MR_def_label(__Compare___calc__expr_0_0, 41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i104));
MR_def_label(__Compare___calc__expr_0_0, 45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___calc__expr_0_0,
		__Compare___calc__expr_0_0_i47);
MR_def_label(__Compare___calc__expr_0_0, 47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i136);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(2))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i59));
MR_def_label(__Compare___calc__expr_0_0, 23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(1))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i104));
MR_def_label(__Compare___calc__expr_0_0, 26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 0);
	MR_r2 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___calc__expr_0_0,
		__Compare___calc__expr_0_0_i28);
MR_def_label(__Compare___calc__expr_0_0, 28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i136);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_tag(MR_sv(2))),
		MR_LABEL_AP(__Compare___calc__expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i41) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i23) MR_AND
		MR_LABEL_AP(__Compare___calc__expr_0_0_i59));
MR_def_label(__Compare___calc__expr_0_0, 59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(1)),4)) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i105);
	}
	MR_r3 = MR_tfield(4, MR_sv(2), 0);
	MR_r4 = MR_tfield(4, MR_sv(1), 0);
	if ((((MR_Integer) MR_r3) >= ((MR_Integer) MR_r4))) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i65);
	}
MR_def_label(__Compare___calc__expr_0_0, 104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___calc__expr_0_0, 65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r3) <= ((MR_Integer) MR_r4))) {
		MR_GOTO_LAB(__Compare___calc__expr_0_0_i66);
	}
MR_def_label(__Compare___calc__expr_0_0, 105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___calc__expr_0_0, 66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___calc__expr_0_0, 136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__calc_maybe_bunch_0(void)
{
	calc_module0();
	calc_module1();
	calc_module2();
	calc_module3();
	calc_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__calc__init(void);
void mercury__calc__init_type_tables(void);
void mercury__calc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__calc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__calc__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__calc__init_threadscope_string_table(void);
#endif
const char *mercury__calc__grade_check(void);

void mercury__calc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__calc_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_calc__type_ctor_info_expr_0,
		calc__expr_0_0);
	mercury__calc__init_debugger();
}

void mercury__calc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_calc__type_ctor_info_expr_0);
	}
}


void mercury__calc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__calc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__calc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__calc__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__calc__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__calc__grade_check(void)
{
    return &MR_GRADE_VAR;
}
