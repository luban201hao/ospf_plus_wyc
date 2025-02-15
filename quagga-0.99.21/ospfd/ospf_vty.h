/* OSPF VTY interface.
 * Copyright (C) 2000 Toshiaki Takada
 *
 * This file is part of GNU Zebra.
 *
 * GNU Zebra is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * GNU Zebra is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Zebra; see the file COPYING.  If not, write to the Free
 * Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.  
 */

#ifndef _QUAGGA_OSPF_VTY_H
#define _QUAGGA_OSPF_VTY_H

/* Macros. */
#define VTY_GET_OSPF_AREA_ID(V,F,STR)                                         \
{                                                                             \
  int retv;                                                                   \
  retv = ospf_str2area_id ((STR), &(V), &(F));                                \
  if (retv < 0)                                                               \
    {                                                                         \
      vty_out (vty, "%% Invalid OSPF area ID%s", VTY_NEWLINE);                \
      return CMD_WARNING;                                                     \
    }                                                                         \
}

#define VTY_GET_OSPF_AREA_ID_NO_BB(NAME,V,F,STR)                              \
{                                                                             \
  int retv;                                                                   \
  retv = ospf_str2area_id ((STR), &(V), &(F));                                \
  if (retv < 0)                                                               \
    {                                                                         \
      vty_out (vty, "%% Invalid OSPF area ID%s", VTY_NEWLINE);                \
      return CMD_WARNING;                                                     \
    }                                                                         \
  if (OSPF_IS_AREA_ID_BACKBONE ((V)))                                         \
    {                                                                         \
      vty_out (vty, "%% You can't configure %s to backbone%s",                \
               NAME, VTY_NEWLINE);                                            \
    }                                                                         \
}

typedef struct data_info_str{
    int row_total;
    int *line_total;
    char ***matrix;
}DATA_INFO_STR;
extern int global_phase;
extern int phase_all;
extern DATA_INFO_STR neighborinfo;
//neighbor info is for add_phase, record which to execute prelinkdown/up,every node has one
struct neighbor_info
{
  struct in_addr router_id;
  struct in_addr if_addr;
  int *phase_info;
};
struct neighbor_info_list
{
  int phasecount;
  int neighborcount;
  struct list *n_list;
};

struct ase_info
{
  struct in_addr adv_router;
  int lsa_count;
  struct list *ase_lsa;
};
struct ase_info_list
{
  int adv_router_count;
  struct list *ase_list;
};




extern struct neighbor_info_list *neighbor_info_list_cur;
extern struct ase_info_list *ase_info_list_cur;
extern int *abr_phase_info;

struct neighbor_info *neighbor_info_new(void);
void neighbor_info_free(void *);
struct neighbor_info_list *neighbor_info_list_new(void);
void neighbor_info_list_free(struct neighbor_info_list *);
void read_neighbor_info(const char *);

void predicted_linkdown_sub(struct in_addr);
void predicted_linkup_sub(struct in_addr);
void input_lsdb_sub(const char *);
extern void change_lsdb_sub(void);

//int ospf_predicted_link_up_timer (struct thread *);


/* Prototypes. */
extern void ospf_vty_init (void);
extern void ospf_vty_show_init (void);
void fileToMatrix_str(const char *,DATA_INFO_STR *);

int is_abr_act_phase(void);
#endif /* _QUAGGA_OSPF_VTY_H */
