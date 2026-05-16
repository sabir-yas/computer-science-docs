/*
** Automatically generated from `mapfilter.m'
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
INIT mercury__mapfilter__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "Mercury/cs/mapfilter.c"
#include "array.mh"

#line 31 "Mercury/cs/mapfilter.c"
#line 32 "Mercury/cs/mapfilter.c"
#include "bitmap.mh"

#line 35 "Mercury/cs/mapfilter.c"
#line 36 "Mercury/cs/mapfilter.c"
#include "io.mh"

#line 39 "Mercury/cs/mapfilter.c"
#line 40 "Mercury/cs/mapfilter.c"
#include "mapfilter.mh"

#line 43 "Mercury/cs/mapfilter.c"
#line 44 "Mercury/cs/mapfilter.c"
#include "string.mh"

#line 47 "Mercury/cs/mapfilter.c"
#line 48 "Mercury/cs/mapfilter.c"
#include "time.mh"

#line 51 "Mercury/cs/mapfilter.c"
#line 52 "Mercury/cs/mapfilter.c"
#ifndef MAPFILTER_DECL_GUARD
#define MAPFILTER_DECL_GUARD

#line 56 "Mercury/cs/mapfilter.c"
#line 57 "Mercury/cs/mapfilter.c"

#endif
#line 60 "Mercury/cs/mapfilter.c"

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
MR_decl_label10(main_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label3(main_2_0, 13,14,15)
MR_decl_label4(fn__mapfilter__filter_even_1_0, 3,5,7,4)
MR_decl_label3(fn__mapfilter__map_list_2_0, 14,4,5)
MR_decl_label1(fn__mapfilter__show_1_0, 3)
MR_def_extern_entry(main_2_0)
MR_decl_static(fn__mapfilter__map_list_2_0)
MR_decl_static(fn__mapfilter__inc_1_0)
MR_decl_static(fn__mapfilter__filter_even_1_0)
MR_decl_static(fn__mapfilter__show_1_0)

static const struct mercury_type_0 mercury_common_0[6] =
{
{
6,
((MR_Word *) (MR_Unsigned) 0U)
},
{
5,
MR_TAG_COMMON(1,0,0)
},
{
4,
MR_TAG_COMMON(1,0,1)
},
{
3,
MR_TAG_COMMON(1,0,2)
},
{
2,
MR_TAG_COMMON(1,0,3)
},
{
1,
MR_TAG_COMMON(1,0,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mapfilter__show_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mapfilter__show_1_0_1,
((MR_Word *) (MR_Integer) 0),
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(fn__string__int_to_string_1_0);
static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__mapfilter__inc_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__string__int_to_string_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__mapfilter__show_1_0_1 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string",
2,
0
},
"mapfilter",
"mapfilter.m",
42,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_FUNCTION,
"mapfilter",
"mapfilter",
"inc",
2,
0
},
"mapfilter",
"mapfilter.m",
51,
"20"
};


MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mapfilter_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label3(main_2_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	MR_sv(3) = ((MR_Word) MR_TAG_COMMON(1,0,5));
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,2,0));
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__mapfilter__map_list_2_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mapfilter__filter_even_1_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = ((MR_Word) MR_string_const("Original: [", 11));
	MR_r1 = ((MR_Word) MR_TAG_COMMON(1,0,5));
	MR_np_call_localret_ent(fn__mapfilter__show_1_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("]\n", 2));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i7);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = ((MR_Word) MR_string_const("Incremented: [", 14));
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mapfilter__show_1_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("]\n", 2));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i10);
MR_def_label(main_2_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i11);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i12);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = ((MR_Word) MR_string_const("Even numbers: [", 15));
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mapfilter__show_1_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Word) MR_string_const("]\n", 2));
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i14);
MR_def_label(main_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(mapfilter_module1)
	MR_init_entry1(fn__mapfilter__map_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mapfilter__map_list_2_0);
	MR_init_label3(fn__mapfilter__map_list_2_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mapfilter__map_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mapfilter__map_list_2_0_i14);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(fn__mapfilter__map_list_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mapfilter__map_list_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mapfilter__map_list_2_0_i4);
MR_def_label(fn__mapfilter__map_list_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__mapfilter__map_list_2_0,
		fn__mapfilter__map_list_2_0_i5);
MR_def_label(fn__mapfilter__map_list_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mapfilter_module2)
	MR_init_entry1(fn__mapfilter__inc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mapfilter__inc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mapfilter__inc_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r1) + (MR_Unsigned) (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__mod_2_0);

MR_BEGIN_MODULE(mapfilter_module3)
	MR_init_entry1(fn__mapfilter__filter_even_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mapfilter__filter_even_1_0);
	MR_init_label4(fn__mapfilter__filter_even_1_0,3,5,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_even'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mapfilter__filter_even_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mapfilter__filter_even_1_0_i3);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_decr_sp_and_return(3);
MR_def_label(fn__mapfilter__filter_even_1_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		fn__mapfilter__filter_even_1_0_i5);
MR_def_label(fn__mapfilter__filter_even_1_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mapfilter__filter_even_1_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(fn__mapfilter__filter_even_1_0,
		fn__mapfilter__filter_even_1_0_i7);
MR_def_label(fn__mapfilter__filter_even_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__mapfilter__filter_even_1_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mapfilter__filter_even_1_0_i3);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(mapfilter_module4)
	MR_init_entry1(fn__mapfilter__show_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mapfilter__show_1_0);
	MR_init_label1(fn__mapfilter__show_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mapfilter__show_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = ((MR_Word) MR_string_const(", ", 2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r3 = ((MR_Word) MR_TAG_COMMON(0,2,1));
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mapfilter__show_1_0_i3);
MR_def_label(fn__mapfilter__show_1_0, 3)
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

static void mercury__mapfilter_maybe_bunch_0(void)
{
	mapfilter_module0();
	mapfilter_module1();
	mapfilter_module2();
	mapfilter_module3();
	mapfilter_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mapfilter__init(void);
void mercury__mapfilter__init_type_tables(void);
void mercury__mapfilter__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mapfilter__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mapfilter__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mapfilter__init_threadscope_string_table(void);
#endif
const char *mercury__mapfilter__grade_check(void);

void mercury__mapfilter__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mapfilter_maybe_bunch_0();
	mercury__mapfilter__init_debugger();
}

void mercury__mapfilter__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mapfilter__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mapfilter__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__mapfilter);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mapfilter__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mapfilter__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__mapfilter__grade_check(void)
{
    return &MR_GRADE_VAR;
}
