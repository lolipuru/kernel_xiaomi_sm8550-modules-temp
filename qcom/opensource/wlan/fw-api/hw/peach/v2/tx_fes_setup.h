/*
 * Copyright (c) 2023-2024 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef _TX_FES_SETUP_H_
#define _TX_FES_SETUP_H_

#define NUM_OF_DWORDS_TX_FES_SETUP 10

struct tx_fes_setup {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t schedule_id                                             : 32;
             uint32_t fes_in_11ax_trigger_response_config                     :  1,
                      bo_based_tid_aggregation_limit                          :  4,
                      __reserved_g_0005                                                 :  1,
                      expect_i2r_lmr                                          :  1,
                      transmit_start_reason                                   :  3,
                      use_alt_power_sr                                        :  1,
                      static_2_pwr_mode_status                                :  1,
                      obss_srg_opport_transmit_status                         :  1,
                      srp_based_transmit_status                               :  1,
                      obss_pd_based_transmit_status                           :  1,
                      puncture_from_all_allowed_modes                         :  1,
                      schedule_cmd_ring_id                                    :  5,
                      fes_control_mode                                        :  2,
                      number_of_users                                         :  6,
                      mu_type                                                 :  1,
                      ofdma_triggered_response                                :  1,
                      response_to_response_cmd                                :  1;
             uint32_t schedule_try                                            :  4,
                      ndp_frame                                               :  2,
                      txbf                                                    :  1,
                      allow_txop_exceed_in_1st_pkt                            :  1,
                      ignore_bw_available                                     :  1,
                      ignore_tbtt                                             :  1,
                      static_bandwidth                                        :  3,
                      set_txop_duration_all_ones                              :  1,
                      transmission_contains_mu_rts                            :  1,
                      bw_restricted_frames_embedded                           :  1,
                      ast_index                                               : 16;
             uint32_t cv_id                                                   :  8,
                      trigger_resp_txpdu_ppdu_boundary                        :  2,
                      rxpcu_setup_complete_present                            :  1,
                      rbo_must_have_data_user_limit                           :  4,
                      mu_ndp                                                  :  1,
                      bf_type                                                 :  2,
                      cbf_nc_index_mask                                       :  1,
                      cbf_nc_index                                            :  3,
                      cbf_nr_index_mask                                       :  1,
                      cbf_nr_index                                            :  3,
                      secure___reserved_g_0005_ista                                     :  1,
                      ndpa                                                    :  1,
                      wait_sifs                                               :  2,
                      cbf_feedback_type_mask                                  :  1,
                      cbf_feedback_type                                       :  1;
             uint32_t cbf_sounding_token                                      :  6,
                      cbf_sounding_token_mask                                 :  1,
                      cbf_bw_mask                                             :  1,
                      cbf_bw                                                  :  3,
                      use_static_bw                                           :  1,
                      coex_nack_count                                         :  5,
                      sch_tx_burst_ongoing                                    :  1,
                      gen_tqm_update_mpdu_count_tlv                           :  1,
                      rts_tx_over___reserved_g_0016                                         :  1,
                      reserved_4a                                             :  3,
                      optimal_bw_retry_count                                  :  4,
                      fes_continuation_ratio_threshold                        :  5;
             uint32_t transmit_cca_bitmap                                     : 32;
             uint32_t tb___reserved_g_0005                                              :  1,
                      __reserved_g_0005_trigger_subtype                                 :  4,
                      min_cts2self_count                                      :  4,
                      max_cts2self_count                                      :  4,
                      wifi_radar_enable                                       :  1,
                      reserved_6a                                             :  1,
                      wait_for_chksum_done                                    :  1,
                      reserved_6b                                             : 15,
                      enable_hw_qos_null                                      :  1;
             uint32_t monitor_override_sta_31_0                               : 32;
             uint32_t monitor_override_sta_36_32                              :  5,
                      enable_qos_null_switch_for_eosp                         :  1,
                      reserved_8a                                             : 26;
             uint32_t fw2sw_info                                              : 32;
#else
             uint32_t schedule_id                                             : 32;
             uint32_t response_to_response_cmd                                :  1,
                      ofdma_triggered_response                                :  1,
                      mu_type                                                 :  1,
                      number_of_users                                         :  6,
                      fes_control_mode                                        :  2,
                      schedule_cmd_ring_id                                    :  5,
                      puncture_from_all_allowed_modes                         :  1,
                      obss_pd_based_transmit_status                           :  1,
                      srp_based_transmit_status                               :  1,
                      obss_srg_opport_transmit_status                         :  1,
                      static_2_pwr_mode_status                                :  1,
                      use_alt_power_sr                                        :  1,
                      transmit_start_reason                                   :  3,
                      expect_i2r_lmr                                          :  1,
                      __reserved_g_0005                                                 :  1,
                      bo_based_tid_aggregation_limit                          :  4,
                      fes_in_11ax_trigger_response_config                     :  1;
             uint32_t ast_index                                               : 16,
                      bw_restricted_frames_embedded                           :  1,
                      transmission_contains_mu_rts                            :  1,
                      set_txop_duration_all_ones                              :  1,
                      static_bandwidth                                        :  3,
                      ignore_tbtt                                             :  1,
                      ignore_bw_available                                     :  1,
                      allow_txop_exceed_in_1st_pkt                            :  1,
                      txbf                                                    :  1,
                      ndp_frame                                               :  2,
                      schedule_try                                            :  4;
             uint32_t cbf_feedback_type                                       :  1,
                      cbf_feedback_type_mask                                  :  1,
                      wait_sifs                                               :  2,
                      ndpa                                                    :  1,
                      secure___reserved_g_0005_ista                                     :  1,
                      cbf_nr_index                                            :  3,
                      cbf_nr_index_mask                                       :  1,
                      cbf_nc_index                                            :  3,
                      cbf_nc_index_mask                                       :  1,
                      bf_type                                                 :  2,
                      mu_ndp                                                  :  1,
                      rbo_must_have_data_user_limit                           :  4,
                      rxpcu_setup_complete_present                            :  1,
                      trigger_resp_txpdu_ppdu_boundary                        :  2,
                      cv_id                                                   :  8;
             uint32_t fes_continuation_ratio_threshold                        :  5,
                      optimal_bw_retry_count                                  :  4,
                      reserved_4a                                             :  3,
                      rts_tx_over___reserved_g_0016                                         :  1,
                      gen_tqm_update_mpdu_count_tlv                           :  1,
                      sch_tx_burst_ongoing                                    :  1,
                      coex_nack_count                                         :  5,
                      use_static_bw                                           :  1,
                      cbf_bw                                                  :  3,
                      cbf_bw_mask                                             :  1,
                      cbf_sounding_token_mask                                 :  1,
                      cbf_sounding_token                                      :  6;
             uint32_t transmit_cca_bitmap                                     : 32;
             uint32_t enable_hw_qos_null                                      :  1,
                      reserved_6b                                             : 15,
                      wait_for_chksum_done                                    :  1,
                      reserved_6a                                             :  1,
                      wifi_radar_enable                                       :  1,
                      max_cts2self_count                                      :  4,
                      min_cts2self_count                                      :  4,
                      __reserved_g_0005_trigger_subtype                                 :  4,
                      tb___reserved_g_0005                                              :  1;
             uint32_t monitor_override_sta_31_0                               : 32;
             uint32_t reserved_8a                                             : 26,
                      enable_qos_null_switch_for_eosp                         :  1,
                      monitor_override_sta_36_32                              :  5;
             uint32_t fw2sw_info                                              : 32;
#endif
};

#define TX_FES_SETUP_SCHEDULE_ID_OFFSET                                             0x00000000
#define TX_FES_SETUP_SCHEDULE_ID_LSB                                                0
#define TX_FES_SETUP_SCHEDULE_ID_MSB                                                31
#define TX_FES_SETUP_SCHEDULE_ID_MASK                                               0xffffffff

#define TX_FES_SETUP_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_OFFSET                     0x00000004
#define TX_FES_SETUP_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_LSB                        0
#define TX_FES_SETUP_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_MSB                        0
#define TX_FES_SETUP_FES_IN_11AX_TRIGGER_RESPONSE_CONFIG_MASK                       0x00000001

#define TX_FES_SETUP_BO_BASED_TID_AGGREGATION_LIMIT_OFFSET                          0x00000004
#define TX_FES_SETUP_BO_BASED_TID_AGGREGATION_LIMIT_LSB                             1
#define TX_FES_SETUP_BO_BASED_TID_AGGREGATION_LIMIT_MSB                             4
#define TX_FES_SETUP_BO_BASED_TID_AGGREGATION_LIMIT_MASK                            0x0000001e

#define TX_FES_SETUP_EXPECT_I2R_LMR_OFFSET                                          0x00000004
#define TX_FES_SETUP_EXPECT_I2R_LMR_LSB                                             6
#define TX_FES_SETUP_EXPECT_I2R_LMR_MSB                                             6
#define TX_FES_SETUP_EXPECT_I2R_LMR_MASK                                            0x00000040

#define TX_FES_SETUP_TRANSMIT_START_REASON_OFFSET                                   0x00000004
#define TX_FES_SETUP_TRANSMIT_START_REASON_LSB                                      7
#define TX_FES_SETUP_TRANSMIT_START_REASON_MSB                                      9
#define TX_FES_SETUP_TRANSMIT_START_REASON_MASK                                     0x00000380

#define TX_FES_SETUP_USE_ALT_POWER_SR_OFFSET                                        0x00000004
#define TX_FES_SETUP_USE_ALT_POWER_SR_LSB                                           10
#define TX_FES_SETUP_USE_ALT_POWER_SR_MSB                                           10
#define TX_FES_SETUP_USE_ALT_POWER_SR_MASK                                          0x00000400

#define TX_FES_SETUP_STATIC_2_PWR_MODE_STATUS_OFFSET                                0x00000004
#define TX_FES_SETUP_STATIC_2_PWR_MODE_STATUS_LSB                                   11
#define TX_FES_SETUP_STATIC_2_PWR_MODE_STATUS_MSB                                   11
#define TX_FES_SETUP_STATIC_2_PWR_MODE_STATUS_MASK                                  0x00000800

#define TX_FES_SETUP_OBSS_SRG_OPPORT_TRANSMIT_STATUS_OFFSET                         0x00000004
#define TX_FES_SETUP_OBSS_SRG_OPPORT_TRANSMIT_STATUS_LSB                            12
#define TX_FES_SETUP_OBSS_SRG_OPPORT_TRANSMIT_STATUS_MSB                            12
#define TX_FES_SETUP_OBSS_SRG_OPPORT_TRANSMIT_STATUS_MASK                           0x00001000

#define TX_FES_SETUP_SRP_BASED_TRANSMIT_STATUS_OFFSET                               0x00000004
#define TX_FES_SETUP_SRP_BASED_TRANSMIT_STATUS_LSB                                  13
#define TX_FES_SETUP_SRP_BASED_TRANSMIT_STATUS_MSB                                  13
#define TX_FES_SETUP_SRP_BASED_TRANSMIT_STATUS_MASK                                 0x00002000

#define TX_FES_SETUP_OBSS_PD_BASED_TRANSMIT_STATUS_OFFSET                           0x00000004
#define TX_FES_SETUP_OBSS_PD_BASED_TRANSMIT_STATUS_LSB                              14
#define TX_FES_SETUP_OBSS_PD_BASED_TRANSMIT_STATUS_MSB                              14
#define TX_FES_SETUP_OBSS_PD_BASED_TRANSMIT_STATUS_MASK                             0x00004000

#define TX_FES_SETUP_PUNCTURE_FROM_ALL_ALLOWED_MODES_OFFSET                         0x00000004
#define TX_FES_SETUP_PUNCTURE_FROM_ALL_ALLOWED_MODES_LSB                            15
#define TX_FES_SETUP_PUNCTURE_FROM_ALL_ALLOWED_MODES_MSB                            15
#define TX_FES_SETUP_PUNCTURE_FROM_ALL_ALLOWED_MODES_MASK                           0x00008000

#define TX_FES_SETUP_SCHEDULE_CMD_RING_ID_OFFSET                                    0x00000004
#define TX_FES_SETUP_SCHEDULE_CMD_RING_ID_LSB                                       16
#define TX_FES_SETUP_SCHEDULE_CMD_RING_ID_MSB                                       20
#define TX_FES_SETUP_SCHEDULE_CMD_RING_ID_MASK                                      0x001f0000

#define TX_FES_SETUP_FES_CONTROL_MODE_OFFSET                                        0x00000004
#define TX_FES_SETUP_FES_CONTROL_MODE_LSB                                           21
#define TX_FES_SETUP_FES_CONTROL_MODE_MSB                                           22
#define TX_FES_SETUP_FES_CONTROL_MODE_MASK                                          0x00600000

#define TX_FES_SETUP_NUMBER_OF_USERS_OFFSET                                         0x00000004
#define TX_FES_SETUP_NUMBER_OF_USERS_LSB                                            23
#define TX_FES_SETUP_NUMBER_OF_USERS_MSB                                            28
#define TX_FES_SETUP_NUMBER_OF_USERS_MASK                                           0x1f800000

#define TX_FES_SETUP_MU_TYPE_OFFSET                                                 0x00000004
#define TX_FES_SETUP_MU_TYPE_LSB                                                    29
#define TX_FES_SETUP_MU_TYPE_MSB                                                    29
#define TX_FES_SETUP_MU_TYPE_MASK                                                   0x20000000

#define TX_FES_SETUP_OFDMA_TRIGGERED_RESPONSE_OFFSET                                0x00000004
#define TX_FES_SETUP_OFDMA_TRIGGERED_RESPONSE_LSB                                   30
#define TX_FES_SETUP_OFDMA_TRIGGERED_RESPONSE_MSB                                   30
#define TX_FES_SETUP_OFDMA_TRIGGERED_RESPONSE_MASK                                  0x40000000

#define TX_FES_SETUP_RESPONSE_TO_RESPONSE_CMD_OFFSET                                0x00000004
#define TX_FES_SETUP_RESPONSE_TO_RESPONSE_CMD_LSB                                   31
#define TX_FES_SETUP_RESPONSE_TO_RESPONSE_CMD_MSB                                   31
#define TX_FES_SETUP_RESPONSE_TO_RESPONSE_CMD_MASK                                  0x80000000

#define TX_FES_SETUP_SCHEDULE_TRY_OFFSET                                            0x00000008
#define TX_FES_SETUP_SCHEDULE_TRY_LSB                                               0
#define TX_FES_SETUP_SCHEDULE_TRY_MSB                                               3
#define TX_FES_SETUP_SCHEDULE_TRY_MASK                                              0x0000000f

#define TX_FES_SETUP_NDP_FRAME_OFFSET                                               0x00000008
#define TX_FES_SETUP_NDP_FRAME_LSB                                                  4
#define TX_FES_SETUP_NDP_FRAME_MSB                                                  5
#define TX_FES_SETUP_NDP_FRAME_MASK                                                 0x00000030

#define TX_FES_SETUP_TXBF_OFFSET                                                    0x00000008
#define TX_FES_SETUP_TXBF_LSB                                                       6
#define TX_FES_SETUP_TXBF_MSB                                                       6
#define TX_FES_SETUP_TXBF_MASK                                                      0x00000040

#define TX_FES_SETUP_ALLOW_TXOP_EXCEED_IN_1ST_PKT_OFFSET                            0x00000008
#define TX_FES_SETUP_ALLOW_TXOP_EXCEED_IN_1ST_PKT_LSB                               7
#define TX_FES_SETUP_ALLOW_TXOP_EXCEED_IN_1ST_PKT_MSB                               7
#define TX_FES_SETUP_ALLOW_TXOP_EXCEED_IN_1ST_PKT_MASK                              0x00000080

#define TX_FES_SETUP_IGNORE_BW_AVAILABLE_OFFSET                                     0x00000008
#define TX_FES_SETUP_IGNORE_BW_AVAILABLE_LSB                                        8
#define TX_FES_SETUP_IGNORE_BW_AVAILABLE_MSB                                        8
#define TX_FES_SETUP_IGNORE_BW_AVAILABLE_MASK                                       0x00000100

#define TX_FES_SETUP_IGNORE_TBTT_OFFSET                                             0x00000008
#define TX_FES_SETUP_IGNORE_TBTT_LSB                                                9
#define TX_FES_SETUP_IGNORE_TBTT_MSB                                                9
#define TX_FES_SETUP_IGNORE_TBTT_MASK                                               0x00000200

#define TX_FES_SETUP_STATIC_BANDWIDTH_OFFSET                                        0x00000008
#define TX_FES_SETUP_STATIC_BANDWIDTH_LSB                                           10
#define TX_FES_SETUP_STATIC_BANDWIDTH_MSB                                           12
#define TX_FES_SETUP_STATIC_BANDWIDTH_MASK                                          0x00001c00

#define TX_FES_SETUP_SET_TXOP_DURATION_ALL_ONES_OFFSET                              0x00000008
#define TX_FES_SETUP_SET_TXOP_DURATION_ALL_ONES_LSB                                 13
#define TX_FES_SETUP_SET_TXOP_DURATION_ALL_ONES_MSB                                 13
#define TX_FES_SETUP_SET_TXOP_DURATION_ALL_ONES_MASK                                0x00002000

#define TX_FES_SETUP_TRANSMISSION_CONTAINS_MU_RTS_OFFSET                            0x00000008
#define TX_FES_SETUP_TRANSMISSION_CONTAINS_MU_RTS_LSB                               14
#define TX_FES_SETUP_TRANSMISSION_CONTAINS_MU_RTS_MSB                               14
#define TX_FES_SETUP_TRANSMISSION_CONTAINS_MU_RTS_MASK                              0x00004000

#define TX_FES_SETUP_BW_RESTRICTED_FRAMES_EMBEDDED_OFFSET                           0x00000008
#define TX_FES_SETUP_BW_RESTRICTED_FRAMES_EMBEDDED_LSB                              15
#define TX_FES_SETUP_BW_RESTRICTED_FRAMES_EMBEDDED_MSB                              15
#define TX_FES_SETUP_BW_RESTRICTED_FRAMES_EMBEDDED_MASK                             0x00008000

#define TX_FES_SETUP_AST_INDEX_OFFSET                                               0x00000008
#define TX_FES_SETUP_AST_INDEX_LSB                                                  16
#define TX_FES_SETUP_AST_INDEX_MSB                                                  31
#define TX_FES_SETUP_AST_INDEX_MASK                                                 0xffff0000

#define TX_FES_SETUP_CV_ID_OFFSET                                                   0x0000000c
#define TX_FES_SETUP_CV_ID_LSB                                                      0
#define TX_FES_SETUP_CV_ID_MSB                                                      7
#define TX_FES_SETUP_CV_ID_MASK                                                     0x000000ff

#define TX_FES_SETUP_TRIGGER_RESP_TXPDU_PPDU_BOUNDARY_OFFSET                        0x0000000c
#define TX_FES_SETUP_TRIGGER_RESP_TXPDU_PPDU_BOUNDARY_LSB                           8
#define TX_FES_SETUP_TRIGGER_RESP_TXPDU_PPDU_BOUNDARY_MSB                           9
#define TX_FES_SETUP_TRIGGER_RESP_TXPDU_PPDU_BOUNDARY_MASK                          0x00000300

#define TX_FES_SETUP_RXPCU_SETUP_COMPLETE_PRESENT_OFFSET                            0x0000000c
#define TX_FES_SETUP_RXPCU_SETUP_COMPLETE_PRESENT_LSB                               10
#define TX_FES_SETUP_RXPCU_SETUP_COMPLETE_PRESENT_MSB                               10
#define TX_FES_SETUP_RXPCU_SETUP_COMPLETE_PRESENT_MASK                              0x00000400

#define TX_FES_SETUP_RBO_MUST_HAVE_DATA_USER_LIMIT_OFFSET                           0x0000000c
#define TX_FES_SETUP_RBO_MUST_HAVE_DATA_USER_LIMIT_LSB                              11
#define TX_FES_SETUP_RBO_MUST_HAVE_DATA_USER_LIMIT_MSB                              14
#define TX_FES_SETUP_RBO_MUST_HAVE_DATA_USER_LIMIT_MASK                             0x00007800

#define TX_FES_SETUP_MU_NDP_OFFSET                                                  0x0000000c
#define TX_FES_SETUP_MU_NDP_LSB                                                     15
#define TX_FES_SETUP_MU_NDP_MSB                                                     15
#define TX_FES_SETUP_MU_NDP_MASK                                                    0x00008000

#define TX_FES_SETUP_BF_TYPE_OFFSET                                                 0x0000000c
#define TX_FES_SETUP_BF_TYPE_LSB                                                    16
#define TX_FES_SETUP_BF_TYPE_MSB                                                    17
#define TX_FES_SETUP_BF_TYPE_MASK                                                   0x00030000

#define TX_FES_SETUP_CBF_NC_INDEX_MASK_OFFSET                                       0x0000000c
#define TX_FES_SETUP_CBF_NC_INDEX_MASK_LSB                                          18
#define TX_FES_SETUP_CBF_NC_INDEX_MASK_MSB                                          18
#define TX_FES_SETUP_CBF_NC_INDEX_MASK_MASK                                         0x00040000

#define TX_FES_SETUP_CBF_NC_INDEX_OFFSET                                            0x0000000c
#define TX_FES_SETUP_CBF_NC_INDEX_LSB                                               19
#define TX_FES_SETUP_CBF_NC_INDEX_MSB                                               21
#define TX_FES_SETUP_CBF_NC_INDEX_MASK                                              0x00380000

#define TX_FES_SETUP_CBF_NR_INDEX_MASK_OFFSET                                       0x0000000c
#define TX_FES_SETUP_CBF_NR_INDEX_MASK_LSB                                          22
#define TX_FES_SETUP_CBF_NR_INDEX_MASK_MSB                                          22
#define TX_FES_SETUP_CBF_NR_INDEX_MASK_MASK                                         0x00400000

#define TX_FES_SETUP_CBF_NR_INDEX_OFFSET                                            0x0000000c
#define TX_FES_SETUP_CBF_NR_INDEX_LSB                                               23
#define TX_FES_SETUP_CBF_NR_INDEX_MSB                                               25
#define TX_FES_SETUP_CBF_NR_INDEX_MASK                                              0x03800000

#define TX_FES_SETUP_SECURE_RANGING_ISTA_OFFSET                                     0x0000000c
#define TX_FES_SETUP_SECURE_RANGING_ISTA_LSB                                        26
#define TX_FES_SETUP_SECURE_RANGING_ISTA_MSB                                        26
#define TX_FES_SETUP_SECURE_RANGING_ISTA_MASK                                       0x04000000

#define TX_FES_SETUP_NDPA_OFFSET                                                    0x0000000c
#define TX_FES_SETUP_NDPA_LSB                                                       27
#define TX_FES_SETUP_NDPA_MSB                                                       27
#define TX_FES_SETUP_NDPA_MASK                                                      0x08000000

#define TX_FES_SETUP_WAIT_SIFS_OFFSET                                               0x0000000c
#define TX_FES_SETUP_WAIT_SIFS_LSB                                                  28
#define TX_FES_SETUP_WAIT_SIFS_MSB                                                  29
#define TX_FES_SETUP_WAIT_SIFS_MASK                                                 0x30000000

#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_MASK_OFFSET                                  0x0000000c
#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_MASK_LSB                                     30
#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_MASK_MSB                                     30
#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_MASK_MASK                                    0x40000000

#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_OFFSET                                       0x0000000c
#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_LSB                                          31
#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_MSB                                          31
#define TX_FES_SETUP_CBF_FEEDBACK_TYPE_MASK                                         0x80000000

#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_OFFSET                                      0x00000010
#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_LSB                                         0
#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_MSB                                         5
#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_MASK                                        0x0000003f

#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_MASK_OFFSET                                 0x00000010
#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_MASK_LSB                                    6
#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_MASK_MSB                                    6
#define TX_FES_SETUP_CBF_SOUNDING_TOKEN_MASK_MASK                                   0x00000040

#define TX_FES_SETUP_CBF_BW_MASK_OFFSET                                             0x00000010
#define TX_FES_SETUP_CBF_BW_MASK_LSB                                                7
#define TX_FES_SETUP_CBF_BW_MASK_MSB                                                7
#define TX_FES_SETUP_CBF_BW_MASK_MASK                                               0x00000080

#define TX_FES_SETUP_CBF_BW_OFFSET                                                  0x00000010
#define TX_FES_SETUP_CBF_BW_LSB                                                     8
#define TX_FES_SETUP_CBF_BW_MSB                                                     10
#define TX_FES_SETUP_CBF_BW_MASK                                                    0x00000700

#define TX_FES_SETUP_USE_STATIC_BW_OFFSET                                           0x00000010
#define TX_FES_SETUP_USE_STATIC_BW_LSB                                              11
#define TX_FES_SETUP_USE_STATIC_BW_MSB                                              11
#define TX_FES_SETUP_USE_STATIC_BW_MASK                                             0x00000800

#define TX_FES_SETUP_COEX_NACK_COUNT_OFFSET                                         0x00000010
#define TX_FES_SETUP_COEX_NACK_COUNT_LSB                                            12
#define TX_FES_SETUP_COEX_NACK_COUNT_MSB                                            16
#define TX_FES_SETUP_COEX_NACK_COUNT_MASK                                           0x0001f000

#define TX_FES_SETUP_SCH_TX_BURST_ONGOING_OFFSET                                    0x00000010
#define TX_FES_SETUP_SCH_TX_BURST_ONGOING_LSB                                       17
#define TX_FES_SETUP_SCH_TX_BURST_ONGOING_MSB                                       17
#define TX_FES_SETUP_SCH_TX_BURST_ONGOING_MASK                                      0x00020000

#define TX_FES_SETUP_GEN_TQM_UPDATE_MPDU_COUNT_TLV_OFFSET                           0x00000010
#define TX_FES_SETUP_GEN_TQM_UPDATE_MPDU_COUNT_TLV_LSB                              18
#define TX_FES_SETUP_GEN_TQM_UPDATE_MPDU_COUNT_TLV_MSB                              18
#define TX_FES_SETUP_GEN_TQM_UPDATE_MPDU_COUNT_TLV_MASK                             0x00040000

#define TX_FES_SETUP_RESERVED_4A_OFFSET                                             0x00000010
#define TX_FES_SETUP_RESERVED_4A_LSB                                                20
#define TX_FES_SETUP_RESERVED_4A_MSB                                                22
#define TX_FES_SETUP_RESERVED_4A_MASK                                               0x00700000

#define TX_FES_SETUP_OPTIMAL_BW_RETRY_COUNT_OFFSET                                  0x00000010
#define TX_FES_SETUP_OPTIMAL_BW_RETRY_COUNT_LSB                                     23
#define TX_FES_SETUP_OPTIMAL_BW_RETRY_COUNT_MSB                                     26
#define TX_FES_SETUP_OPTIMAL_BW_RETRY_COUNT_MASK                                    0x07800000

#define TX_FES_SETUP_FES_CONTINUATION_RATIO_THRESHOLD_OFFSET                        0x00000010
#define TX_FES_SETUP_FES_CONTINUATION_RATIO_THRESHOLD_LSB                           27
#define TX_FES_SETUP_FES_CONTINUATION_RATIO_THRESHOLD_MSB                           31
#define TX_FES_SETUP_FES_CONTINUATION_RATIO_THRESHOLD_MASK                          0xf8000000

#define TX_FES_SETUP_TRANSMIT_CCA_BITMAP_OFFSET                                     0x00000014
#define TX_FES_SETUP_TRANSMIT_CCA_BITMAP_LSB                                        0
#define TX_FES_SETUP_TRANSMIT_CCA_BITMAP_MSB                                        31
#define TX_FES_SETUP_TRANSMIT_CCA_BITMAP_MASK                                       0xffffffff

#define TX_FES_SETUP_RANGING_TRIGGER_SUBTYPE_OFFSET                                 0x00000018
#define TX_FES_SETUP_RANGING_TRIGGER_SUBTYPE_LSB                                    1
#define TX_FES_SETUP_RANGING_TRIGGER_SUBTYPE_MSB                                    4
#define TX_FES_SETUP_RANGING_TRIGGER_SUBTYPE_MASK                                   0x0000001e

#define TX_FES_SETUP_MIN_CTS2SELF_COUNT_OFFSET                                      0x00000018
#define TX_FES_SETUP_MIN_CTS2SELF_COUNT_LSB                                         5
#define TX_FES_SETUP_MIN_CTS2SELF_COUNT_MSB                                         8
#define TX_FES_SETUP_MIN_CTS2SELF_COUNT_MASK                                        0x000001e0

#define TX_FES_SETUP_MAX_CTS2SELF_COUNT_OFFSET                                      0x00000018
#define TX_FES_SETUP_MAX_CTS2SELF_COUNT_LSB                                         9
#define TX_FES_SETUP_MAX_CTS2SELF_COUNT_MSB                                         12
#define TX_FES_SETUP_MAX_CTS2SELF_COUNT_MASK                                        0x00001e00

#define TX_FES_SETUP_WIFI_RADAR_ENABLE_OFFSET                                       0x00000018
#define TX_FES_SETUP_WIFI_RADAR_ENABLE_LSB                                          13
#define TX_FES_SETUP_WIFI_RADAR_ENABLE_MSB                                          13
#define TX_FES_SETUP_WIFI_RADAR_ENABLE_MASK                                         0x00002000

#define TX_FES_SETUP_RESERVED_6A_OFFSET                                             0x00000018
#define TX_FES_SETUP_RESERVED_6A_LSB                                                14
#define TX_FES_SETUP_RESERVED_6A_MSB                                                14
#define TX_FES_SETUP_RESERVED_6A_MASK                                               0x00004000

#define TX_FES_SETUP_WAIT_FOR_CHKSUM_DONE_OFFSET                                    0x00000018
#define TX_FES_SETUP_WAIT_FOR_CHKSUM_DONE_LSB                                       15
#define TX_FES_SETUP_WAIT_FOR_CHKSUM_DONE_MSB                                       15
#define TX_FES_SETUP_WAIT_FOR_CHKSUM_DONE_MASK                                      0x00008000

#define TX_FES_SETUP_RESERVED_6B_OFFSET                                             0x00000018
#define TX_FES_SETUP_RESERVED_6B_LSB                                                16
#define TX_FES_SETUP_RESERVED_6B_MSB                                                30
#define TX_FES_SETUP_RESERVED_6B_MASK                                               0x7fff0000

#define TX_FES_SETUP_ENABLE_HW_QOS_NULL_OFFSET                                      0x00000018
#define TX_FES_SETUP_ENABLE_HW_QOS_NULL_LSB                                         31
#define TX_FES_SETUP_ENABLE_HW_QOS_NULL_MSB                                         31
#define TX_FES_SETUP_ENABLE_HW_QOS_NULL_MASK                                        0x80000000

#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_31_0_OFFSET                               0x0000001c
#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_31_0_LSB                                  0
#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_31_0_MSB                                  31
#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_31_0_MASK                                 0xffffffff

#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_36_32_OFFSET                              0x00000020
#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_36_32_LSB                                 0
#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_36_32_MSB                                 4
#define TX_FES_SETUP_MONITOR_OVERRIDE_STA_36_32_MASK                                0x0000001f

#define TX_FES_SETUP_ENABLE_QOS_NULL_SWITCH_FOR_EOSP_OFFSET                         0x00000020
#define TX_FES_SETUP_ENABLE_QOS_NULL_SWITCH_FOR_EOSP_LSB                            5
#define TX_FES_SETUP_ENABLE_QOS_NULL_SWITCH_FOR_EOSP_MSB                            5
#define TX_FES_SETUP_ENABLE_QOS_NULL_SWITCH_FOR_EOSP_MASK                           0x00000020

#define TX_FES_SETUP_RESERVED_8A_OFFSET                                             0x00000020
#define TX_FES_SETUP_RESERVED_8A_LSB                                                6
#define TX_FES_SETUP_RESERVED_8A_MSB                                                31
#define TX_FES_SETUP_RESERVED_8A_MASK                                               0xffffffc0

#define TX_FES_SETUP_FW2SW_INFO_OFFSET                                              0x00000024
#define TX_FES_SETUP_FW2SW_INFO_LSB                                                 0
#define TX_FES_SETUP_FW2SW_INFO_MSB                                                 31
#define TX_FES_SETUP_FW2SW_INFO_MASK                                                0xffffffff

#endif
