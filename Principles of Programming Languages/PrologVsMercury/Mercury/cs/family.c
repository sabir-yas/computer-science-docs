/*
** Automatically generated from `family.m'
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
INIT mercury__family__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/family.c"
#include "array.mh"

#line 31 "Mercury/cs/family.c"
#line 32 "Mercury/cs/family.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/family.c"
#line 36 "Mercury/cs/family.c"
#include "family.mh"

#line 39 "Mercury/cs/family.c"
#line 40 "Mercury/cs/family.c"
#include "io.mh"

#line 43 "Mercury/cs/family.c"
#line 44 "Mercury/cs/family.c"
#include "string.mh"

#line 47 "Mercury/cs/family.c"
#line 48 "Mercury/cs/family.c"
#include "time.mh"

#line 51 "Mercury/cs/family.c"
#line 52 "Mercury/cs/family.c"
#ifndef FAMILY_DECL_GUARD
#define FAMILY_DECL_GUARD

#line 56 "Mercury/cs/family.c"
#line 57 "Mercury/cs/family.c"

#endif
#line 60 "Mercury/cs/family.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
	MR_Integer f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_String f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_family__type_ctor_info_person_0;
MR_decl_label4(family__ancestor_2_0, 3,2,4,1)
MR_decl_label8(main_2_0, 7,8,6,13,14,20,19,22)
MR_decl_label2(family__parent_2_0, 2,3)
MR_decl_label2(family__print_group_4_0, 2,3)
MR_decl_label2(family__print_one_3_0, 3,4)
MR_decl_label2(__Compare___family__person_0_0, 2,3)
MR_def_extern_entry(main_2_0)
MR_decl_static(family__parent_2_0)
MR_decl_static(family__ancestor_2_0)
MR_decl_static(family__print_one_3_0)
MR_decl_static(family__print_group_4_0)
MR_decl_static(__Unify___family__person_0_0)
MR_decl_static(__Compare___family__person_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__family__print_group_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_family__type_ctor_info_person_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__family__print_group_4_0_1,
((MR_Word *) (MR_Integer) 0)
},
3,
{
MR_CTOR0_ADDR(family, person),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(family__print_one_3_0),
0
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[6] =
{
{
0,
2
},
{
0,
3
},
{
1,
2
},
{
1,
3
},
{
2,
4
},
{
3,
5
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[6] =
{
{
MR_string_const("john", 4),
MR_string_const("\n", 1)
},
{
MR_string_const("susan", 5),
MR_string_const("\n", 1)
},
{
MR_string_const("mary", 4),
MR_string_const("\n", 1)
},
{
MR_string_const("tom", 3),
MR_string_const("\n", 1)
},
{
MR_string_const("alice", 5),
MR_string_const("\n", 1)
},
{
MR_string_const("bob", 3),
MR_string_const("\n", 1)
},
};

static const MR_EnumFunctorDesc mercury_data_family__enum_functor_desc_person_0_0 = {
	"john",
	0
};

static const MR_EnumFunctorDesc mercury_data_family__enum_functor_desc_person_0_1 = {
	"susan",
	1
};

static const MR_EnumFunctorDesc mercury_data_family__enum_functor_desc_person_0_2 = {
	"mary",
	2
};

static const MR_EnumFunctorDesc mercury_data_family__enum_functor_desc_person_0_3 = {
	"tom",
	3
};

static const MR_EnumFunctorDesc mercury_data_family__enum_functor_desc_person_0_4 = {
	"alice",
	4
};

static const MR_EnumFunctorDesc mercury_data_family__enum_functor_desc_person_0_5 = {
	"bob",
	5
};

const MR_EnumFunctorDescPtr mercury_data_family__enum_ordinal_ordered_person_0[] = {
	&mercury_data_family__enum_functor_desc_person_0_0,
	&mercury_data_family__enum_functor_desc_person_0_1,
	&mercury_data_family__enum_functor_desc_person_0_2,
	&mercury_data_family__enum_functor_desc_person_0_3,
	&mercury_data_family__enum_functor_desc_person_0_4,
	&mercury_data_family__enum_functor_desc_person_0_5
};

const MR_EnumFunctorDescPtr mercury_data_family__enum_name_ordered_person_0[] = {
	&mercury_data_family__enum_functor_desc_person_0_4,
	&mercury_data_family__enum_functor_desc_person_0_5,
	&mercury_data_family__enum_functor_desc_person_0_0,
	&mercury_data_family__enum_functor_desc_person_0_2,
	&mercury_data_family__enum_functor_desc_person_0_1,
	&mercury_data_family__enum_functor_desc_person_0_3
};

const MR_Integer mercury_data_family__functor_number_map_person_0[] = {
	2,
	4,
	3,
	5,
	0,
	1
};
	
const MR_TypeCtorInfo_Struct mercury_data_family__type_ctor_info_person_0 = {
	0,
	18,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___family__person_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___family__person_0_0)),
	"family",
	"person",
	{ (void *) mercury_data_family__enum_name_ordered_person_0 },
	{ (void *) mercury_data_family__enum_ordinal_ordered_person_0 },
	6,
	12,
	mercury_data_family__functor_number_map_person_0
};


static const MR_UserClosureId
mercury_data__closure_layout__family__print_group_4_0_1 = {
{
MR_PREDICATE,
"family",
"family",
"print_one",
3,
0
},
"family",
"family.m",
135,
"9"
};


MR_declare_entry(MR_do_redo);
MR_decl_entry(list__sort_2_0);

MR_BEGIN_MODULE(family_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label8(main_2_0,7,8,6,13,14,20,19,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = ((MR_Word) MR_succip);
	MR_sv(1) = (MR_Unsigned) 0U;
	MR_sv(3) = ((MR_Word) MR_redoip_slot(MR_maxfr));
	MR_sv(4) = ((MR_Word) MR_redofr_slot(MR_maxfr));
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = ((MR_Word) MR_curfr);
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(main_2_0_i6));
	MR_sv(2) = (MR_Integer) 2;
	MR_np_call_localret_ent(family__parent_2_0,
		main_2_0_i7);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(2))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_INT_EQ(MR_r1,5)) {
		MR_GOTO_LAB(main_2_0_i8);
	}
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i8);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(family, person));
	MR_np_call_localret_ent(list__sort_2_0,
		main_2_0_i13);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(family, person));
	MR_np_call_localret_ent(list__sort_2_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("Father(s) of mary:", 18));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(family__print_group_4_0,
		main_2_0_i14);
MR_def_label(main_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Unsigned) 0U;
	MR_sv(6) = ((MR_Word) MR_redoip_slot(MR_maxfr));
	MR_sv(7) = ((MR_Word) MR_redofr_slot(MR_maxfr));
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = ((MR_Word) MR_curfr);
	MR_redoip_slot_word(MR_maxfr) = ((MR_Word) MR_LABEL_AP(main_2_0_i19));
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(family__ancestor_2_0,
		main_2_0_i20);
MR_def_label(main_2_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(family, person));
	MR_np_call_localret_ent(list__sort_2_0,
		main_2_0_i22);
MR_def_label(main_2_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(family, person));
	MR_np_call_localret_ent(list__sort_2_0,
		main_2_0_i22);
MR_def_label(main_2_0, 22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_string_const("Descendants of john:", 20));
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(family__print_group_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(family_module1)
	MR_init_entry1(family__parent_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__family__parent_2_0);
	MR_init_label2(family__parent_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parent'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(family__parent_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred family.parent/2-0", 1,
		MR_LABEL_AP(family__parent_2_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, 0));
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(family__parent_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,10)) {
		MR_GOTO_LAB(family__parent_2_0_i3);
	}
	MR_fv(1) = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_fv(1)) + (MR_Unsigned) (MR_Integer) 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, ((MR_Integer) MR_r3)));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(family__parent_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, ((MR_Integer) MR_r3)));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed_discard();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(family_module2)
	MR_init_entry1(family__ancestor_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__family__ancestor_2_0);
	MR_init_label4(family__ancestor_2_0,3,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ancestor'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(family__ancestor_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred family.ancestor/2-0", 1,
		MR_LABEL_AP(family__ancestor_2_0_i2));
	MR_fv(1) = MR_r1;
	MR_np_call_localret_ent(family__parent_2_0,
		family__ancestor_2_0_i3);
MR_def_label(family__ancestor_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_fv(1) != MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(family__ancestor_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = ((MR_Word) MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(family__parent_2_0,
		family__ancestor_2_0_i4);
MR_def_label(family__ancestor_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_fv(1) != MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_r2;
	MR_np_localcall_lab(family__ancestor_2_0,
		family__ancestor_2_0_i1);
MR_def_label(family__ancestor_2_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(family_module3)
	MR_init_entry1(family__print_one_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__family__print_one_3_0);
	MR_init_label2(family__print_one_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_one'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(family__print_one_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r1) * (MR_Unsigned) (MR_Integer) 2)));
	MR_sv(1) = ((MR_Word) MR_string_const(" - ", 3));
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		family__print_one_3_0_i3);
MR_def_label(family__print_one_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		family__print_one_3_0_i4);
MR_def_label(family__print_one_3_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(family_module4)
	MR_init_entry1(family__print_group_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__family__print_group_4_0);
	MR_init_label2(family__print_group_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_group'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(family__print_group_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r2;
	MR_r2 = ((MR_Word) MR_string_const("\n", 1));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		family__print_group_4_0_i2);
MR_def_label(family__print_group_4_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		family__print_group_4_0_i3);
MR_def_label(family__print_group_4_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(family, person));
	MR_r2 = ((MR_Word) MR_IO_CTOR_ADDR);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,3,0));
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(family_module5)
	MR_init_entry1(__Unify___family__person_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___family__person_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___family__person_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(family_module6)
	MR_init_entry1(__Compare___family__person_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___family__person_0_0);
	MR_init_label2(__Compare___family__person_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___family__person_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if ((((MR_Integer) MR_r2) >= ((MR_Integer) MR_r3))) {
		MR_GOTO_LAB(__Compare___family__person_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___family__person_0_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r2) <= ((MR_Integer) MR_r3))) {
		MR_GOTO_LAB(__Compare___family__person_0_0_i3);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___family__person_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__family_maybe_bunch_0(void)
{
	family_module0();
	family_module1();
	family_module2();
	family_module3();
	family_module4();
	family_module5();
	family_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__family__init(void);
void mercury__family__init_type_tables(void);
void mercury__family__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__family__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__family__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__family__init_threadscope_string_table(void);
#endif
const char *mercury__family__grade_check(void);

void mercury__family__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__family_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_family__type_ctor_info_person_0,
		family__person_0_0);
	mercury__family__init_debugger();
}

void mercury__family__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_family__type_ctor_info_person_0);
	}
}


void mercury__family__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__family__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__family);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__family__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__family__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__family__grade_check(void)
{
    return &MR_GRADE_VAR;
}
