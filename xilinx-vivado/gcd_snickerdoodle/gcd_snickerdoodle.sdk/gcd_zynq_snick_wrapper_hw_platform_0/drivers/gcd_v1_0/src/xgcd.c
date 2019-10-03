// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xgcd.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XGcd_CfgInitialize(XGcd *InstancePtr, XGcd_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Gcd_bus_BaseAddress = ConfigPtr->Gcd_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XGcd_Start(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_AP_CTRL) & 0x80;
    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XGcd_IsDone(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XGcd_IsIdle(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XGcd_IsReady(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XGcd_EnableAutoRestart(XGcd *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_AP_CTRL, 0x80);
}

void XGcd_DisableAutoRestart(XGcd *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_AP_CTRL, 0);
}

void XGcd_Set_a(XGcd *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_A_DATA, Data);
}

u32 XGcd_Get_a(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_A_DATA);
    return Data;
}

void XGcd_Set_b(XGcd *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_B_DATA, Data);
}

u32 XGcd_Get_b(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_B_DATA);
    return Data;
}

u32 XGcd_Get_pResult(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_PRESULT_DATA);
    return Data;
}

u32 XGcd_Get_pResult_vld(XGcd *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_PRESULT_CTRL);
    return Data & 0x1;
}

void XGcd_InterruptGlobalEnable(XGcd *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_GIE, 1);
}

void XGcd_InterruptGlobalDisable(XGcd *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_GIE, 0);
}

void XGcd_InterruptEnable(XGcd *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_IER);
    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_IER, Register | Mask);
}

void XGcd_InterruptDisable(XGcd *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_IER);
    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_IER, Register & (~Mask));
}

void XGcd_InterruptClear(XGcd *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XGcd_WriteReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_ISR, Mask);
}

u32 XGcd_InterruptGetEnabled(XGcd *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_IER);
}

u32 XGcd_InterruptGetStatus(XGcd *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XGcd_ReadReg(InstancePtr->Gcd_bus_BaseAddress, XGCD_GCD_BUS_ADDR_ISR);
}
