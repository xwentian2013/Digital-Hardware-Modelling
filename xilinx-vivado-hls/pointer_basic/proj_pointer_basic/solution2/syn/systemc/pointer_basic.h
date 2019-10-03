// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pointer_basic_HH_
#define _pointer_basic_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pointer_basic_pointer_basic_io_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_POINTER_BASIC_IO_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_POINTER_BASIC_IO_DATA_WIDTH = 32>
struct pointer_basic : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_pointer_basic_io_AWVALID;
    sc_out< sc_logic > s_axi_pointer_basic_io_AWREADY;
    sc_in< sc_uint<C_S_AXI_POINTER_BASIC_IO_ADDR_WIDTH> > s_axi_pointer_basic_io_AWADDR;
    sc_in< sc_logic > s_axi_pointer_basic_io_WVALID;
    sc_out< sc_logic > s_axi_pointer_basic_io_WREADY;
    sc_in< sc_uint<C_S_AXI_POINTER_BASIC_IO_DATA_WIDTH> > s_axi_pointer_basic_io_WDATA;
    sc_in< sc_uint<C_S_AXI_POINTER_BASIC_IO_DATA_WIDTH/8> > s_axi_pointer_basic_io_WSTRB;
    sc_in< sc_logic > s_axi_pointer_basic_io_ARVALID;
    sc_out< sc_logic > s_axi_pointer_basic_io_ARREADY;
    sc_in< sc_uint<C_S_AXI_POINTER_BASIC_IO_ADDR_WIDTH> > s_axi_pointer_basic_io_ARADDR;
    sc_out< sc_logic > s_axi_pointer_basic_io_RVALID;
    sc_in< sc_logic > s_axi_pointer_basic_io_RREADY;
    sc_out< sc_uint<C_S_AXI_POINTER_BASIC_IO_DATA_WIDTH> > s_axi_pointer_basic_io_RDATA;
    sc_out< sc_lv<2> > s_axi_pointer_basic_io_RRESP;
    sc_out< sc_logic > s_axi_pointer_basic_io_BVALID;
    sc_in< sc_logic > s_axi_pointer_basic_io_BREADY;
    sc_out< sc_lv<2> > s_axi_pointer_basic_io_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    pointer_basic(sc_module_name name);
    SC_HAS_PROCESS(pointer_basic);

    ~pointer_basic();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    pointer_basic_pointer_basic_io_s_axi<C_S_AXI_POINTER_BASIC_IO_ADDR_WIDTH,C_S_AXI_POINTER_BASIC_IO_DATA_WIDTH>* pointer_basic_pointer_basic_io_s_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > d_i;
    sc_signal< sc_logic > d_o_ap_vld;
    sc_signal< sc_lv<32> > acc;
    sc_signal< sc_lv<32> > d_read_reg_52;
    sc_signal< sc_lv<32> > acc_assign_fu_41_p2;
    sc_signal< sc_lv<32> > acc_assign_reg_57;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_acc_assign_fu_41_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_d_o_ap_vld();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif