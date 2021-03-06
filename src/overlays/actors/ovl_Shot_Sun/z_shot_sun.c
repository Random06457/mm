#include "z_shot_sun.h"

#define FLAGS 0x00000009

#define THIS ((ShotSun*)thisx)

void ShotSun_Init(Actor* thisx, GlobalContext* globalCtx);
void ShotSun_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ShotSun_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Shot_Sun_InitVars = {
    ACTOR_SHOT_SUN,
    ACTORTYPE_PROP,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(ShotSun),
    (ActorFunc)ShotSun_Init,
    (ActorFunc)ShotSun_Destroy,
    (ActorFunc)ShotSun_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Shot_Sun_0x80973640/ShotSun_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Shot_Sun_0x80973640/ShotSun_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Shot_Sun_0x80973640/func_80973740.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Shot_Sun_0x80973640/func_80973804.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Shot_Sun_0x80973640/func_809738D0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Shot_Sun_0x80973640/func_80973960.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Shot_Sun_0x80973640/ShotSun_Update.asm")
