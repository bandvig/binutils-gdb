/* tc-fr30.h -- Header file for tc-fr30.c.
   Copyright (C) 1998 Free Software Foundation, Inc.

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to
   the Free Software Foundation, 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA. */

#define TC_FR30

#ifndef BFD_ASSEMBLER
/* leading space so will compile with cc */
 #error FR30 support requires BFD_ASSEMBLER
#endif

#define LISTING_HEADER "FR30 GAS "

/* The target BFD architecture.  */
#define TARGET_ARCH bfd_arch_fr30

#define TARGET_FORMAT "elf32-fr30"

#define TARGET_BYTES_BIG_ENDIAN 1

/* call md_pcrel_from_section, not md_pcrel_from */
long md_pcrel_from_section PARAMS ((struct fix *, segT));
#define MD_PCREL_FROM_SECTION(FIXP, SEC) md_pcrel_from_section (FIXP, SEC)

/* Permit temporary numeric labels.  */
#define LOCAL_LABELS_FB 1

#define DIFF_EXPR_OK		/* .-foo gets turned into PC relative relocs */

/* We don't need to handle .word strangely.  */
#define WORKING_DOT_WORD

#define MD_APPLY_FIX3
#define md_apply_fix3 gas_cgen_md_apply_fix3

#define TC_FRAG_INIT(fragP) \
do { \
  (fragP)->fr_cgen.insn = 0; \
  (fragP)->fr_cgen.opindex = 0; \
  (fragP)->fr_cgen.opinfo = 0; \
} while (0);

#define TC_HANDLES_FX_DONE

#define tc_gen_reloc gas_cgen_tc_gen_reloc

/* Call md_pcrel_from_section(), not md_pcrel_from().  */
#define MD_PCREL_FROM_SECTION(FIXP, SEC) md_pcrel_from_section (FIXP, SEC)
extern long md_pcrel_from_section PARAMS ((struct fix *, segT));

/* Record a pointer to the insn table entry for each fixup.  */
#define TC_FIX_TYPE struct { PTR insn; int opinfo; }
#define TC_INIT_FIX_DATA(FIXP) \
  ((FIXP)->tc_fix_data.insn = NULL, (FIXP)->tc_fix_data.opinfo = 0)

/* For 8 vs 16 vs 32 bit branch selection.  */
#define TC_GENERIC_RELAX_TABLE md_relax_table
extern const struct relax_type md_relax_table[];

