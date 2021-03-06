#include "z_obj_toge.h"

#define FLAGS 0x00000010

#define THIS ((ObjToge*)thisx)

void ObjToge_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjToge_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjToge_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjToge_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Toge_InitVars = {
    ACTOR_OBJ_TOGE,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_TRAP,
    sizeof(ObjToge),
    (ActorFunc)ObjToge_Init,
    (ActorFunc)ObjToge_Destroy,
    (ActorFunc)ObjToge_Update,
    (ActorFunc)ObjToge_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A41C0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A42A0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A43A8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A43EC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/ObjToge_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/ObjToge_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A4744.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A477C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A4804.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A481C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A488C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/func_809A48AC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/ObjToge_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Toge_0x809A41C0/ObjToge_Draw.asm")
