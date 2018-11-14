#include <ultra64.h>
#include <global.h>

UNK_TYPE func_8008D350(void) {
    u32* sp12;
    u32 sp8;
    u32 sp4;
    u32 sp0;
    
    sp8 = 0x400000;
    
    do {
        sp12 = (u32*)(sp8 + 0xA0000000);
        sp4 = *(u32*)(0xA0000000 + sp8);
        sp0 = *(u32*)(0xA00FFFFC + sp8);
        *(u32*)(0xA0000000 + sp8) = *(u32*)(0xA0000000 + sp8) ^ 0xFFFFFFFF;
        sp12[0x000FFFFC/4] = sp12[0x000FFFFC/4] ^ 0xFFFFFFFF;
        
        if ((sp12[0] != (sp4 ^ 0xFFFFFFFF)) ||
            (sp12[0x000FFFFC/4] != (sp0 ^ 0xFFFFFFFF))) {
            return sp8;
        }
        
        *sp12 = sp4;
        sp12[0x000FFFFC/4] = sp0;
        sp8 = sp8 + 0x100000;
    } while(sp8 < 0x800000);
    
    return sp8;
}