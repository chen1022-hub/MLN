//
// Created by XiongFangyu on 2020/6/4.
//

#ifndef MMLUA4ANDROID_ARGO_LIB_H
#define MMLUA4ANDROID_ARGO_LIB_H

#include "mln_lua.h"
/**
 * 为lua虚拟机注册Argo库
 * 将argo table返回到栈顶
 */
int argo_open(lua_State *L);
/**
 * 为lua虚拟机注册Argo库
 * 将argo库注册到preload表中，需要require才能使用
 */
void argo_preload(lua_State *L);
/**
 * 虚拟机销毁时需要做的清理工作
 */
void argo_close(lua_State *L);

/**
 * 不再使用
 */
void argo_free(void);

#endif //MMLUA4ANDROID_ARGO_LIB_H
