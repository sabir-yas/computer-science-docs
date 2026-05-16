/*
** Automatically generated from `graphdfs.m'
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
INIT mercury__graphdfs__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/graphdfs.c"
#include "array.mh"

#line 31 "Mercury/cs/graphdfs.c"
#line 32 "Mercury/cs/graphdfs.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/graphdfs.c"
#line 36 "Mercury/cs/graphdfs.c"
#include "graphdfs.mh"

#line 39 "Mercury/cs/graphdfs.c"
#line 40 "Mercury/cs/graphdfs.c"
#include "io.mh"

#line 43 "Mercury/cs/graphdfs.c"
#line 44 "Mercury/cs/graphdfs.c"
#include "string.mh"

#line 47 "Mercury/cs/graphdfs.c"
#line 48 "Mercury/cs/graphdfs.c"
#include "time.mh"

#line 51 "Mercury/cs/graphdfs.c"
#line 52 "Mercury/cs/graphdfs.c"
#ifndef GRAPHDFS_DECL_GUARD
#define GRAPHDFS_DECL_GUARD

#line 56 "Mercury/cs/graphdfs.c"
#line 57 "Mercury/cs/graphdfs.c"

#endif
#line 60 "Mercury/cs/graphdfs.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_vector_common_3_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_graphdfs__type_ctor_info_node_0;
MR_decl_label2(graphdfs__dfs_list_3_0, 3,4)
MR_decl_label3(graphdfs__dfs_visit_3_0, 3,2,7)
MR_decl_label6(graphdfs__edge_2_0, 3,7,9,23,21,1)
MR_decl_label6(main_2_0, 2,3,5,6,7,8)
MR_decl_label2(__Compare___graphdfs__node_0_0, 2,3)
MR_def_extern_entry(main_2_0)
MR_decl_static(graphdfs__edge_2_0)
MR_decl_static(graphdfs__dfs_visit_3_0)
MR_decl_static(graphdfs__dfs_list_3_0)
MR_decl_static(fn__graphdfs__node_to_string_1_0)
MR_decl_static(__Unify___graphdfs__node_0_0)
MR_decl_static(__Compare___graphdfs__node_0_0)

static const struct mercury_type_0 mercury_common_0[5] =
{
{
4,
((MR_Word *) (MR_Unsigned) 0U)
},
{
3,
MR_TAG_COMMON(1,0,0)
},
{
2,
MR_TAG_COMMON(1,0,1)
},
{
1,
MR_TAG_COMMON(1,0,2)
},
{
0,
MR_TAG_COMMON(1,0,3)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_graphdfs__type_ctor_info_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__graphdfs__dfs_visit_3_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_CTOR0_ADDR(graphdfs, node),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__graphdfs__dfs_visit_3_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_CTOR0_ADDR(graphdfs, node),
MR_CTOR0_ADDR(graphdfs, node)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__graphdfs__node_to_string_1_0),
0
},
};

static const struct mercury_type_3 mercury_vector_common_3_0[5] =
{
{
MR_string_const("a", 1)
},
{
MR_string_const("b", 1)
},
{
MR_string_const("c", 1)
},
{
MR_string_const("d", 1)
},
{
MR_string_const("e", 1)
},
};

static const MR_EnumFunctorDesc mercury_data_graphdfs__enum_functor_desc_node_0_0 = {
	"a",
	0
};

static const MR_EnumFunctorDesc mercury_data_graphdfs__enum_functor_desc_node_0_1 = {
	"b",
	1
};

static const MR_EnumFunctorDesc mercury_data_graphdfs__enum_functor_desc_node_0_2 = {
	"c",
	2
};

static const MR_EnumFunctorDesc mercury_data_graphdfs__enum_functor_desc_node_0_3 = {
	"d",
	3
};

static const MR_EnumFunctorDesc mercury_data_graphdfs__enum_functor_desc_node_0_4 = {
	"e",
	4
};

const MR_EnumFunctorDescPtr mercury_data_graphdfs__enum_ordinal_ordered_node_0[] = {
	&mercury_data_graphdfs__enum_functor_desc_node_0_0,
	&mercury_data_graphdfs__enum_functor_desc_node_0_1,
	&mercury_data_graphdfs__enum_functor_desc_node_0_2,
	&mercury_data_graphdfs__enum_functor_desc_node_0_3,
	&mercury_data_graphdfs__enum_functor_desc_node_0_4
};

const MR_EnumFunctorDescPtr mercury_data_graphdfs__enum_name_ordered_node_0[] = {
	&mercury_data_graphdfs__enum_functor_desc_node_0_0,
	&mercury_data_graphdfs__enum_functor_desc_node_0_1,
	&mercury_data_graphdfs__enum_functor_desc_node_0_2,
	&mercury_data_graphdfs__enum_functor_desc_node_0_3,
	&mercury_data_graphdfs__enum_functor_desc_node_0_4
};

const MR_Integer mercury_data_graphdfs__functor_number_map_node_0[] = {
	0,
	1,
	2,
	3,
	4
};
	
const MR_TypeCtorInfo_Struct mercury_data_graphdfs__type_ctor_info_node_0 = {
	0,
	18,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___graphdfs__node_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___graphdfs__node_0_0)),
	"graphdfs",
	"node",
	{ (void *) mercury_data_graphdfs__enum_name_ordered_node_0 },
	{ (void *) mercury_data_graphdfs__enum_ordinal_ordered_node_0 },
	5,
	12,
	mercury_data_graphdfs__functor_number_map_node_0
};


static const MR_UserClosureId
mercury_data__closure_layout__graphdfs__dfs_visit_3_0_1 = {
{
MR_PREDICATE,
"graphdfs",
"graphdfs",
"edge",
2,
0
},
"graphdfs",
"graphdfs.m",
66,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_FUNCTION,
"graphdfs",
"graphdfs",
"node_to_string",
2,
0
},
"graphdfs",
"graphdfs.m",
88,
"6"
};


MR_decl_entry(list__reverse_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(graphdfs_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label6(main_2_0,2,3,5,6,7,8)
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
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Unsigned) 0U;
	MR_np_call_localret_ent(graphdfs__dfs_visit_3_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(graphdfs, node));
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Word) MR_string_const("DFS starting from a: [", 22));
	MR_sv(2) = ((MR_Word) MR_string_const(", ", 2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(graphdfs, node));
	MR_r2 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,2,0));
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("]\n", 2));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i7);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graphdfs_module1)
	MR_init_entry1(graphdfs__edge_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__graphdfs__edge_2_0);
	MR_init_label6(graphdfs__edge_2_0,3,7,9,23,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'edge'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(graphdfs__edge_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO(((MR_Unsigned) MR_r1),
		MR_LABEL_AP(graphdfs__edge_2_0_i3) MR_AND
		MR_LABEL_AP(graphdfs__edge_2_0_i7) MR_AND
		MR_LABEL_AP(graphdfs__edge_2_0_i9) MR_AND
		MR_LABEL_AP(graphdfs__edge_2_0_i23) MR_AND
		MR_LABEL_AP(graphdfs__edge_2_0_i1));
MR_def_label(graphdfs__edge_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(graphdfs__edge_2_0_i21);
	}
	MR_r1 = (((MR_Integer) MR_r2) == (MR_Integer) 2);
	MR_proceed();
MR_def_label(graphdfs__edge_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r2) == (MR_Integer) 3);
	MR_proceed();
MR_def_label(graphdfs__edge_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(graphdfs__edge_2_0_i21);
	}
MR_def_label(graphdfs__edge_2_0, 23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r2) == (MR_Integer) 4);
	MR_proceed();
MR_def_label(graphdfs__edge_2_0, 21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(graphdfs__edge_2_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(graphdfs_module2)
	MR_init_entry1(graphdfs__dfs_visit_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__graphdfs__dfs_visit_3_0);
	MR_init_label3(graphdfs__dfs_visit_3_0,3,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dfs_visit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(graphdfs__dfs_visit_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(graphdfs, node));
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		graphdfs__dfs_visit_3_0_i3);
MR_def_label(graphdfs__dfs_visit_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(graphdfs__dfs_visit_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(graphdfs__dfs_visit_3_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = ((MR_Word) MR_COMMON(1,1));
	MR_tfield(0, MR_r2, 1) = ((MR_Word) MR_ENTRY_AP(graphdfs__edge_2_0));
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Word) MR_CTOR0_ADDR(graphdfs, node));
	MR_r3 = ((MR_Word) MR_TAG_COMMON(1,0,4));
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		graphdfs__dfs_visit_3_0_i7);
MR_def_label(graphdfs__dfs_visit_3_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(graphdfs__dfs_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graphdfs_module3)
	MR_init_entry1(graphdfs__dfs_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__graphdfs__dfs_list_3_0);
	MR_init_label2(graphdfs__dfs_list_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dfs_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(graphdfs__dfs_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(graphdfs__dfs_list_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(graphdfs__dfs_list_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(graphdfs__dfs_visit_3_0,
		graphdfs__dfs_list_3_0_i4);
MR_def_label(graphdfs__dfs_list_3_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(graphdfs__dfs_list_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graphdfs_module4)
	MR_init_entry1(fn__graphdfs__node_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__graphdfs__node_to_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'node_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__graphdfs__node_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_3_0, ((MR_Integer) MR_r1)));
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graphdfs_module5)
	MR_init_entry1(__Unify___graphdfs__node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___graphdfs__node_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___graphdfs__node_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(graphdfs_module6)
	MR_init_entry1(__Compare___graphdfs__node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___graphdfs__node_0_0);
	MR_init_label2(__Compare___graphdfs__node_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___graphdfs__node_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if ((((MR_Integer) MR_r2) >= ((MR_Integer) MR_r3))) {
		MR_GOTO_LAB(__Compare___graphdfs__node_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___graphdfs__node_0_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r2) <= ((MR_Integer) MR_r3))) {
		MR_GOTO_LAB(__Compare___graphdfs__node_0_0_i3);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___graphdfs__node_0_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__graphdfs_maybe_bunch_0(void)
{
	graphdfs_module0();
	graphdfs_module1();
	graphdfs_module2();
	graphdfs_module3();
	graphdfs_module4();
	graphdfs_module5();
	graphdfs_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__graphdfs__init(void);
void mercury__graphdfs__init_type_tables(void);
void mercury__graphdfs__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__graphdfs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__graphdfs__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__graphdfs__init_threadscope_string_table(void);
#endif
const char *mercury__graphdfs__grade_check(void);

void mercury__graphdfs__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__graphdfs_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_graphdfs__type_ctor_info_node_0,
		graphdfs__node_0_0);
	mercury__graphdfs__init_debugger();
}

void mercury__graphdfs__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_graphdfs__type_ctor_info_node_0);
	}
}


void mercury__graphdfs__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__graphdfs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__graphdfs);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__graphdfs__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__graphdfs__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__graphdfs__grade_check(void)
{
    return &MR_GRADE_VAR;
}
