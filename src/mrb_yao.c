/*
** mrb_yao.c - Yao class
**
** Copyright (c) Okumura Takahiro 2018
**
** See Copyright Notice in LICENSE
*/

#include "mruby.h"
#include "mruby/data.h"
#include "mrb_yao.h"

#define DONE mrb_gc_arena_restore(mrb, 0);

void mrb_mruby_yao_gem_init(mrb_state *mrb)
{
  struct RClass *yao;
  yao = mrb_define_module(mrb, "Yao", mrb->object_class);
  DONE;
}

void mrb_mruby_yao_gem_final(mrb_state *mrb)
{
}

