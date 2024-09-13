// @generated by special_hadamard_code_gen.py cpu


#pragma once


template <typename T>
void hadamard_mult_12(T* x) {
    float out[12];
    out[0] = + x[0] - x[1] - x[2] - x[3] - x[4] - x[5] - x[6] - x[7] - x[8] - x[9] - x[10] - x[11];
    out[1] = + x[0] + x[1] - x[2] + x[3] - x[4] - x[5] - x[6] + x[7] + x[8] + x[9] - x[10] + x[11];
    out[2] = + x[0] + x[1] + x[2] - x[3] + x[4] - x[5] - x[6] - x[7] + x[8] + x[9] + x[10] - x[11];
    out[3] = + x[0] - x[1] + x[2] + x[3] - x[4] + x[5] - x[6] - x[7] - x[8] + x[9] + x[10] + x[11];
    out[4] = + x[0] + x[1] - x[2] + x[3] + x[4] - x[5] + x[6] - x[7] - x[8] - x[9] + x[10] + x[11];
    out[5] = + x[0] + x[1] + x[2] - x[3] + x[4] + x[5] - x[6] + x[7] - x[8] - x[9] - x[10] + x[11];
    out[6] = + x[0] + x[1] + x[2] + x[3] - x[4] + x[5] + x[6] - x[7] + x[8] - x[9] - x[10] - x[11];
    out[7] = + x[0] - x[1] + x[2] + x[3] + x[4] - x[5] + x[6] + x[7] - x[8] + x[9] - x[10] - x[11];
    out[8] = + x[0] - x[1] - x[2] + x[3] + x[4] + x[5] - x[6] + x[7] + x[8] - x[9] + x[10] - x[11];
    out[9] = + x[0] - x[1] - x[2] - x[3] + x[4] + x[5] + x[6] - x[7] + x[8] + x[9] - x[10] + x[11];
    out[10] = + x[0] + x[1] - x[2] - x[3] - x[4] + x[5] + x[6] + x[7] - x[8] + x[9] + x[10] - x[11];
    out[11] = + x[0] - x[1] + x[2] - x[3] - x[4] - x[5] + x[6] + x[7] + x[8] - x[9] + x[10] + x[11];
    #pragma unroll
    for (int i = 0; i < 12; i++) { x[i] = out[i]; }
}


template <typename T>
void hadamard_mult_20(T* x) {
    float out[20];
    out[0] = + x[0] - x[1] - x[2] - x[3] - x[4] + x[5] - x[6] - x[7] - x[8] - x[9] + x[10] + x[11] - x[12] - x[13] + x[14] + x[15] - x[16] + x[17] + x[18] - x[19];
    out[1] = - x[0] + x[1] - x[2] - x[3] - x[4] - x[5] + x[6] - x[7] - x[8] - x[9] + x[10] + x[11] + x[12] - x[13] - x[14] - x[15] + x[16] - x[17] + x[18] + x[19];
    out[2] = - x[0] - x[1] + x[2] - x[3] - x[4] - x[5] - x[6] + x[7] - x[8] - x[9] - x[10] + x[11] + x[12] + x[13] - x[14] + x[15] - x[16] + x[17] - x[18] + x[19];
    out[3] = - x[0] - x[1] - x[2] + x[3] - x[4] - x[5] - x[6] - x[7] + x[8] - x[9] - x[10] - x[11] + x[12] + x[13] + x[14] + x[15] + x[16] - x[17] + x[18] - x[19];
    out[4] = - x[0] - x[1] - x[2] - x[3] + x[4] - x[5] - x[6] - x[7] - x[8] + x[9] + x[10] - x[11] - x[12] + x[13] + x[14] - x[15] + x[16] + x[17] - x[18] + x[19];
    out[5] = - x[0] + x[1] + x[2] + x[3] + x[4] + x[5] - x[6] - x[7] - x[8] - x[9] - x[10] + x[11] - x[12] - x[13] + x[14] + x[15] + x[16] - x[17] - x[18] + x[19];
    out[6] = + x[0] - x[1] + x[2] + x[3] + x[4] - x[5] + x[6] - x[7] - x[8] - x[9] + x[10] - x[11] + x[12] - x[13] - x[14] + x[15] + x[16] + x[17] - x[18] - x[19];
    out[7] = + x[0] + x[1] - x[2] + x[3] + x[4] - x[5] - x[6] + x[7] - x[8] - x[9] - x[10] + x[11] - x[12] + x[13] - x[14] - x[15] + x[16] + x[17] + x[18] - x[19];
    out[8] = + x[0] + x[1] + x[2] - x[3] + x[4] - x[5] - x[6] - x[7] + x[8] - x[9] - x[10] - x[11] + x[12] - x[13] + x[14] - x[15] - x[16] + x[17] + x[18] + x[19];
    out[9] = + x[0] + x[1] + x[2] + x[3] - x[4] - x[5] - x[6] - x[7] - x[8] + x[9] + x[10] - x[11] - x[12] + x[13] - x[14] + x[15] - x[16] - x[17] + x[18] + x[19];
    out[10] = - x[0] - x[1] + x[2] + x[3] - x[4] + x[5] - x[6] + x[7] + x[8] - x[9] + x[10] - x[11] - x[12] - x[13] - x[14] - x[15] + x[16] + x[17] + x[18] + x[19];
    out[11] = - x[0] - x[1] - x[2] + x[3] + x[4] - x[5] + x[6] - x[7] + x[8] + x[9] - x[10] + x[11] - x[12] - x[13] - x[14] + x[15] - x[16] + x[17] + x[18] + x[19];
    out[12] = + x[0] - x[1] - x[2] - x[3] + x[4] + x[5] - x[6] + x[7] - x[8] + x[9] - x[10] - x[11] + x[12] - x[13] - x[14] + x[15] + x[16] - x[17] + x[18] + x[19];
    out[13] = + x[0] + x[1] - x[2] - x[3] - x[4] + x[5] + x[6] - x[7] + x[8] - x[9] - x[10] - x[11] - x[12] + x[13] - x[14] + x[15] + x[16] + x[17] - x[18] + x[19];
    out[14] = - x[0] + x[1] + x[2] - x[3] - x[4] - x[5] + x[6] + x[7] - x[8] + x[9] - x[10] - x[11] - x[12] - x[13] + x[14] + x[15] + x[16] + x[17] + x[18] - x[19];
    out[15] = - x[0] + x[1] - x[2] - x[3] + x[4] - x[5] - x[6] + x[7] + x[8] - x[9] + x[10] - x[11] - x[12] - x[13] - x[14] + x[15] - x[16] - x[17] - x[18] - x[19];
    out[16] = + x[0] - x[1] + x[2] - x[3] - x[4] - x[5] - x[6] - x[7] + x[8] + x[9] - x[10] + x[11] - x[12] - x[13] - x[14] - x[15] + x[16] - x[17] - x[18] - x[19];
    out[17] = - x[0] + x[1] - x[2] + x[3] - x[4] + x[5] - x[6] - x[7] - x[8] + x[9] - x[10] - x[11] + x[12] - x[13] - x[14] - x[15] - x[16] + x[17] - x[18] - x[19];
    out[18] = - x[0] - x[1] + x[2] - x[3] + x[4] + x[5] + x[6] - x[7] - x[8] - x[9] - x[10] - x[11] - x[12] + x[13] - x[14] - x[15] - x[16] - x[17] + x[18] - x[19];
    out[19] = + x[0] - x[1] - x[2] + x[3] - x[4] - x[5] + x[6] + x[7] - x[8] - x[9] - x[10] - x[11] - x[12] - x[13] + x[14] - x[15] - x[16] - x[17] - x[18] + x[19];
    #pragma unroll
    for (int i = 0; i < 20; i++) { x[i] = out[i]; }
}


template <typename T>
void hadamard_mult_28(T* x) {
    float out[28];
    out[0] = + x[0] - x[1] - x[2] - x[3] - x[4] - x[5] - x[6] + x[7] + x[8] - x[9] - x[10] - x[11] - x[12] + x[13] + x[14] - x[15] + x[16] - x[17] - x[18] + x[19] - x[20] + x[21] - x[22] - x[23] + x[24] + x[25] - x[26] - x[27];
    out[1] = - x[0] + x[1] - x[2] - x[3] - x[4] - x[5] - x[6] + x[7] + x[8] + x[9] - x[10] - x[11] - x[12] - x[13] - x[14] + x[15] - x[16] + x[17] - x[18] - x[19] + x[20] - x[21] + x[22] - x[23] - x[24] + x[25] + x[26] - x[27];
    out[2] = - x[0] - x[1] + x[2] - x[3] - x[4] - x[5] - x[6] - x[7] + x[8] + x[9] + x[10] - x[11] - x[12] - x[13] + x[14] - x[15] + x[16] - x[17] + x[18] - x[19] - x[20] - x[21] - x[22] + x[23] - x[24] - x[25] + x[26] + x[27];
    out[3] = - x[0] - x[1] - x[2] + x[3] - x[4] - x[5] - x[6] - x[7] - x[8] + x[9] + x[10] + x[11] - x[12] - x[13] - x[14] + x[15] - x[16] + x[17] - x[18] + x[19] - x[20] + x[21] - x[22] - x[23] + x[24] - x[25] - x[26] + x[27];
    out[4] = - x[0] - x[1] - x[2] - x[3] + x[4] - x[5] - x[6] - x[7] - x[8] - x[9] + x[10] + x[11] + x[12] - x[13] - x[14] - x[15] + x[16] - x[17] + x[18] - x[19] + x[20] + x[21] + x[22] - x[23] - x[24] + x[25] - x[26] - x[27];
    out[5] = - x[0] - x[1] - x[2] - x[3] - x[4] + x[5] - x[6] - x[7] - x[8] - x[9] - x[10] + x[11] + x[12] + x[13] + x[14] - x[15] - x[16] + x[17] - x[18] + x[19] - x[20] - x[21] + x[22] + x[23] - x[24] - x[25] + x[26] - x[27];
    out[6] = - x[0] - x[1] - x[2] - x[3] - x[4] - x[5] + x[6] + x[7] - x[8] - x[9] - x[10] - x[11] + x[12] + x[13] - x[14] + x[15] - x[16] - x[17] + x[18] - x[19] + x[20] - x[21] - x[22] + x[23] + x[24] - x[25] - x[26] + x[27];
    out[7] = - x[0] - x[1] + x[2] + x[3] + x[4] + x[5] - x[6] + x[7] - x[8] - x[9] - x[10] - x[11] - x[12] - x[13] - x[14] + x[15] + x[16] - x[17] - x[18] + x[19] + x[20] + x[21] - x[22] + x[23] - x[24] - x[25] + x[26] - x[27];
    out[8] = - x[0] - x[1] - x[2] + x[3] + x[4] + x[5] + x[6] - x[7] + x[8] - x[9] - x[10] - x[11] - x[12] - x[13] + x[14] - x[15] + x[16] + x[17] - x[18] - x[19] + x[20] - x[21] + x[22] - x[23] + x[24] - x[25] - x[26] + x[27];
    out[9] = + x[0] - x[1] - x[2] - x[3] + x[4] + x[5] + x[6] - x[7] - x[8] + x[9] - x[10] - x[11] - x[12] - x[13] + x[14] + x[15] - x[16] + x[17] + x[18] - x[19] - x[20] + x[21] - x[22] + x[23] - x[24] + x[25] - x[26] - x[27];
    out[10] = + x[0] + x[1] - x[2] - x[3] - x[4] + x[5] + x[6] - x[7] - x[8] - x[9] + x[10] - x[11] - x[12] - x[13] - x[14] + x[15] + x[16] - x[17] + x[18] + x[19] - x[20] - x[21] + x[22] - x[23] + x[24] - x[25] + x[26] - x[27];
    out[11] = + x[0] + x[1] + x[2] - x[3] - x[4] - x[5] + x[6] - x[7] - x[8] - x[9] - x[10] + x[11] - x[12] - x[13] - x[14] - x[15] + x[16] + x[17] - x[18] + x[19] + x[20] - x[21] - x[22] + x[23] - x[24] + x[25] - x[26] + x[27];
    out[12] = + x[0] + x[1] + x[2] + x[3] - x[4] - x[5] - x[6] - x[7] - x[8] - x[9] - x[10] - x[11] + x[12] - x[13] + x[14] - x[15] - x[16] + x[17] + x[18] - x[19] + x[20] + x[21] - x[22] - x[23] + x[24] - x[25] + x[26] - x[27];
    out[13] = - x[0] + x[1] + x[2] + x[3] + x[4] - x[5] - x[6] - x[7] - x[8] - x[9] - x[10] - x[11] - x[12] + x[13] + x[14] + x[15] - x[16] - x[17] + x[18] + x[19] - x[20] - x[21] + x[22] - x[23] - x[24] + x[25] - x[26] + x[27];
    out[14] = - x[0] + x[1] - x[2] + x[3] + x[4] - x[5] + x[6] + x[7] - x[8] - x[9] + x[10] + x[11] - x[12] - x[13] + x[14] - x[15] - x[16] - x[17] - x[18] - x[19] - x[20] - x[21] - x[22] + x[23] + x[24] + x[25] + x[26] - x[27];
    out[15] = + x[0] - x[1] + x[2] - x[3] + x[4] + x[5] - x[6] - x[7] + x[8] - x[9] - x[10] + x[11] + x[12] - x[13] - x[14] + x[15] - x[16] - x[17] - x[18] - x[19] - x[20] - x[21] - x[22] - x[23] + x[24] + x[25] + x[26] + x[27];
    out[16] = - x[0] + x[1] - x[2] + x[3] - x[4] + x[5] + x[6] - x[7] - x[8] + x[9] - x[10] - x[11] + x[12] + x[13] - x[14] - x[15] + x[16] - x[17] - x[18] - x[19] - x[20] + x[21] - x[22] - x[23] - x[24] + x[25] + x[26] + x[27];
    out[17] = + x[0] - x[1] + x[2] - x[3] + x[4] - x[5] + x[6] + x[7] - x[8] - x[9] + x[10] - x[11] - x[12] + x[13] - x[14] - x[15] - x[16] + x[17] - x[18] - x[19] - x[20] + x[21] + x[22] - x[23] - x[24] - x[25] + x[26] + x[27];
    out[18] = + x[0] + x[1] - x[2] + x[3] - x[4] + x[5] - x[6] + x[7] + x[8] - x[9] - x[10] + x[11] - x[12] - x[13] - x[14] - x[15] - x[16] - x[17] + x[18] - x[19] - x[20] + x[21] + x[22] + x[23] - x[24] - x[25] - x[26] + x[27];
    out[19] = - x[0] + x[1] + x[2] - x[3] + x[4] - x[5] + x[6] - x[7] + x[8] + x[9] - x[10] - x[11] + x[12] - x[13] - x[14] - x[15] - x[16] - x[17] - x[18] + x[19] - x[20] + x[21] + x[22] + x[23] + x[24] - x[25] - x[26] - x[27];
    out[20] = + x[0] - x[1] + x[2] + x[3] - x[4] + x[5] - x[6] - x[7] - x[8] + x[9] + x[10] - x[11] - x[12] + x[13] - x[14] - x[15] - x[16] - x[17] - x[18] - x[19] + x[20] - x[21] + x[22] + x[23] + x[24] + x[25] - x[26] - x[27];
    out[21] = - x[0] + x[1] + x[2] - x[3] - x[4] + x[5] + x[6] - x[7] + x[8] - x[9] + x[10] + x[11] - x[12] + x[13] + x[14] + x[15] - x[16] - x[17] - x[18] - x[19] + x[20] + x[21] - x[22] - x[23] - x[24] - x[25] - x[26] - x[27];
    out[22] = + x[0] - x[1] + x[2] + x[3] - x[4] - x[5] + x[6] + x[7] - x[8] + x[9] - x[10] + x[11] + x[12] - x[13] + x[14] + x[15] + x[16] - x[17] - x[18] - x[19] - x[20] - x[21] + x[22] - x[23] - x[24] - x[25] - x[26] - x[27];
    out[23] = + x[0] + x[1] - x[2] + x[3] + x[4] - x[5] - x[6] - x[7] + x[8] - x[9] + x[10] - x[11] + x[12] + x[13] - x[14] + x[15] + x[16] + x[17] - x[18] - x[19] - x[20] - x[21] - x[22] + x[23] - x[24] - x[25] - x[26] - x[27];
    out[24] = - x[0] + x[1] + x[2] - x[3] + x[4] + x[5] - x[6] + x[7] - x[8] + x[9] - x[10] + x[11] - x[12] + x[13] - x[14] - x[15] + x[16] + x[17] + x[18] - x[19] - x[20] - x[21] - x[22] - x[23] + x[24] - x[25] - x[26] - x[27];
    out[25] = - x[0] - x[1] + x[2] + x[3] - x[4] + x[5] + x[6] + x[7] + x[8] - x[9] + x[10] - x[11] + x[12] - x[13] - x[14] - x[15] - x[16] + x[17] + x[18] + x[19] - x[20] - x[21] - x[22] - x[23] - x[24] + x[25] - x[26] - x[27];
    out[26] = + x[0] - x[1] - x[2] + x[3] + x[4] - x[5] + x[6] - x[7] + x[8] + x[9] - x[10] + x[11] - x[12] + x[13] - x[14] - x[15] - x[16] - x[17] + x[18] + x[19] + x[20] - x[21] - x[22] - x[23] - x[24] - x[25] + x[26] - x[27];
    out[27] = + x[0] + x[1] - x[2] - x[3] + x[4] + x[5] - x[6] + x[7] - x[8] + x[9] + x[10] - x[11] + x[12] - x[13] + x[14] - x[15] - x[16] - x[17] - x[18] + x[19] + x[20] - x[21] - x[22] - x[23] - x[24] - x[25] - x[26] + x[27];
    #pragma unroll
    for (int i = 0; i < 28; i++) { x[i] = out[i]; }
}


template <typename T>
void hadamard_mult_40(T* x) {
    float out[40];
    out[0] = + x[0] - x[1] - x[2] - x[3] - x[4] - x[5] - x[6] - x[7] - x[8] - x[9] - x[10] - x[11] - x[12] - x[13] - x[14] - x[15] - x[16] - x[17] - x[18] - x[19] + x[20] - x[21] - x[22] - x[23] - x[24] - x[25] - x[26] - x[27] - x[28] - x[29] - x[30] - x[31] - x[32] - x[33] - x[34] - x[35] - x[36] - x[37] - x[38] - x[39];
    out[1] = + x[0] + x[1] - x[2] + x[3] + x[4] - x[5] - x[6] - x[7] - x[8] + x[9] - x[10] + x[11] - x[12] + x[13] + x[14] + x[15] + x[16] - x[17] - x[18] + x[19] + x[20] + x[21] - x[22] + x[23] + x[24] - x[25] - x[26] - x[27] - x[28] + x[29] - x[30] + x[31] - x[32] + x[33] + x[34] + x[35] + x[36] - x[37] - x[38] + x[39];
    out[2] = + x[0] + x[1] + x[2] - x[3] + x[4] + x[5] - x[6] - x[7] - x[8] - x[9] + x[10] - x[11] + x[12] - x[13] + x[14] + x[15] + x[16] + x[17] - x[18] - x[19] + x[20] + x[21] + x[22] - x[23] + x[24] + x[25] - x[26] - x[27] - x[28] - x[29] + x[30] - x[31] + x[32] - x[33] + x[34] + x[35] + x[36] + x[37] - x[38] - x[39];
    out[3] = + x[0] - x[1] + x[2] + x[3] - x[4] + x[5] + x[6] - x[7] - x[8] - x[9] - x[10] + x[11] - x[12] + x[13] - x[14] + x[15] + x[16] + x[17] + x[18] - x[19] + x[20] - x[21] + x[22] + x[23] - x[24] + x[25] + x[26] - x[27] - x[28] - x[29] - x[30] + x[31] - x[32] + x[33] - x[34] + x[35] + x[36] + x[37] + x[38] - x[39];
    out[4] = + x[0] - x[1] - x[2] + x[3] + x[4] - x[5] + x[6] + x[7] - x[8] - x[9] - x[10] - x[11] + x[12] - x[13] + x[14] - x[15] + x[16] + x[17] + x[18] + x[19] + x[20] - x[21] - x[22] + x[23] + x[24] - x[25] + x[26] + x[27] - x[28] - x[29] - x[30] - x[31] + x[32] - x[33] + x[34] - x[35] + x[36] + x[37] + x[38] + x[39];
    out[5] = + x[0] + x[1] - x[2] - x[3] + x[4] + x[5] - x[6] + x[7] + x[8] - x[9] - x[10] - x[11] - x[12] + x[13] - x[14] + x[15] - x[16] + x[17] + x[18] + x[19] + x[20] + x[21] - x[22] - x[23] + x[24] + x[25] - x[26] + x[27] + x[28] - x[29] - x[30] - x[31] - x[32] + x[33] - x[34] + x[35] - x[36] + x[37] + x[38] + x[39];
    out[6] = + x[0] + x[1] + x[2] - x[3] - x[4] + x[5] + x[6] - x[7] + x[8] + x[9] - x[10] - x[11] - x[12] - x[13] + x[14] - x[15] + x[16] - x[17] + x[18] + x[19] + x[20] + x[21] + x[22] - x[23] - x[24] + x[25] + x[26] - x[27] + x[28] + x[29] - x[30] - x[31] - x[32] - x[33] + x[34] - x[35] + x[36] - x[37] + x[38] + x[39];
    out[7] = + x[0] + x[1] + x[2] + x[3] - x[4] - x[5] + x[6] + x[7] - x[8] + x[9] + x[10] - x[11] - x[12] - x[13] - x[14] + x[15] - x[16] + x[17] - x[18] + x[19] + x[20] + x[21] + x[22] + x[23] - x[24] - x[25] + x[26] + x[27] - x[28] + x[29] + x[30] - x[31] - x[32] - x[33] - x[34] + x[35] - x[36] + x[37] - x[38] + x[39];
    out[8] = + x[0] + x[1] + x[2] + x[3] + x[4] - x[5] - x[6] + x[7] + x[8] - x[9] + x[10] + x[11] - x[12] - x[13] - x[14] - x[15] + x[16] - x[17] + x[18] - x[19] + x[20] + x[21] + x[22] + x[23] + x[24] - x[25] - x[26] + x[27] + x[28] - x[29] + x[30] + x[31] - x[32] - x[33] - x[34] - x[35] + x[36] - x[37] + x[38] - x[39];
    out[9] = + x[0] - x[1] + x[2] + x[3] + x[4] + x[5] - x[6] - x[7] + x[8] + x[9] - x[10] + x[11] + x[12] - x[13] - x[14] - x[15] - x[16] + x[17] - x[18] + x[19] + x[20] - x[21] + x[22] + x[23] + x[24] + x[25] - x[26] - x[27] + x[28] + x[29] - x[30] + x[31] + x[32] - x[33] - x[34] - x[35] - x[36] + x[37] - x[38] + x[39];
    out[10] = + x[0] + x[1] - x[2] + x[3] + x[4] + x[5] + x[6] - x[7] - x[8] + x[9] + x[10] - x[11] + x[12] + x[13] - x[14] - x[15] - x[16] - x[17] + x[18] - x[19] + x[20] + x[21] - x[22] + x[23] + x[24] + x[25] + x[26] - x[27] - x[28] + x[29] + x[30] - x[31] + x[32] + x[33] - x[34] - x[35] - x[36] - x[37] + x[38] - x[39];
    out[11] = + x[0] - x[1] + x[2] - x[3] + x[4] + x[5] + x[6] + x[7] - x[8] - x[9] + x[10] + x[11] - x[12] + x[13] + x[14] - x[15] - x[16] - x[17] - x[18] + x[19] + x[20] - x[21] + x[22] - x[23] + x[24] + x[25] + x[26] + x[27] - x[28] - x[29] + x[30] + x[31] - x[32] + x[33] + x[34] - x[35] - x[36] - x[37] - x[38] + x[39];
    out[12] = + x[0] + x[1] - x[2] + x[3] - x[4] + x[5] + x[6] + x[7] + x[8] - x[9] - x[10] + x[11] + x[12] - x[13] + x[14] + x[15] - x[16] - x[17] - x[18] - x[19] + x[20] + x[21] - x[22] + x[23] - x[24] + x[25] + x[26] + x[27] + x[28] - x[29] - x[30] + x[31] + x[32] - x[33] + x[34] + x[35] - x[36] - x[37] - x[38] - x[39];
    out[13] = + x[0] - x[1] + x[2] - x[3] + x[4] - x[5] + x[6] + x[7] + x[8] + x[9] - x[10] - x[11] + x[12] + x[13] - x[14] + x[15] + x[16] - x[17] - x[18] - x[19] + x[20] - x[21] + x[22] - x[23] + x[24] - x[25] + x[26] + x[27] + x[28] + x[29] - x[30] - x[31] + x[32] + x[33] - x[34] + x[35] + x[36] - x[37] - x[38] - x[39];
    out[14] = + x[0] - x[1] - x[2] + x[3] - x[4] + x[5] - x[6] + x[7] + x[8] + x[9] + x[10] - x[11] - x[12] + x[13] + x[14] - x[15] + x[16] + x[17] - x[18] - x[19] + x[20] - x[21] - x[22] + x[23] - x[24] + x[25] - x[26] + x[27] + x[28] + x[29] + x[30] - x[31] - x[32] + x[33] + x[34] - x[35] + x[36] + x[37] - x[38] - x[39];
    out[15] = + x[0] - x[1] - x[2] - x[3] + x[4] - x[5] + x[6] - x[7] + x[8] + x[9] + x[10] + x[11] - x[12] - x[13] + x[14] + x[15] - x[16] + x[17] + x[18] - x[19] + x[20] - x[21] - x[22] - x[23] + x[24] - x[25] + x[26] - x[27] + x[28] + x[29] + x[30] + x[31] - x[32] - x[33] + x[34] + x[35] - x[36] + x[37] + x[38] - x[39];
    out[16] = + x[0] - x[1] - x[2] - x[3] - x[4] + x[5] - x[6] + x[7] - x[8] + x[9] + x[10] + x[11] + x[12] - x[13] - x[14] + x[15] + x[16] - x[17] + x[18] + x[19] + x[20] - x[21] - x[22] - x[23] - x[24] + x[25] - x[26] + x[27] - x[28] + x[29] + x[30] + x[31] + x[32] - x[33] - x[34] + x[35] + x[36] - x[37] + x[38] + x[39];
    out[17] = + x[0] + x[1] - x[2] - x[3] - x[4] - x[5] + x[6] - x[7] + x[8] - x[9] + x[10] + x[11] + x[12] + x[13] - x[14] - x[15] + x[16] + x[17] - x[18] + x[19] + x[20] + x[21] - x[22] - x[23] - x[24] - x[25] + x[26] - x[27] + x[28] - x[29] + x[30] + x[31] + x[32] + x[33] - x[34] - x[35] + x[36] + x[37] - x[38] + x[39];
    out[18] = + x[0] + x[1] + x[2] - x[3] - x[4] - x[5] - x[6] + x[7] - x[8] + x[9] - x[10] + x[11] + x[12] + x[13] + x[14] - x[15] - x[16] + x[17] + x[18] - x[19] + x[20] + x[21] + x[22] - x[23] - x[24] - x[25] - x[26] + x[27] - x[28] + x[29] - x[30] + x[31] + x[32] + x[33] + x[34] - x[35] - x[36] + x[37] + x[38] - x[39];
    out[19] = + x[0] - x[1] + x[2] + x[3] - x[4] - x[5] - x[6] - x[7] + x[8] - x[9] + x[10] - x[11] + x[12] + x[13] + x[14] + x[15] - x[16] - x[17] + x[18] + x[19] + x[20] - x[21] + x[22] + x[23] - x[24] - x[25] - x[26] - x[27] + x[28] - x[29] + x[30] - x[31] + x[32] + x[33] + x[34] + x[35] - x[36] - x[37] + x[38] + x[39];
    out[20] = + x[0] - x[1] - x[2] - x[3] - x[4] - x[5] - x[6] - x[7] - x[8] - x[9] - x[10] - x[11] - x[12] - x[13] - x[14] - x[15] - x[16] - x[17] - x[18] - x[19] - x[20] + x[21] + x[22] + x[23] + x[24] + x[25] + x[26] + x[27] + x[28] + x[29] + x[30] + x[31] + x[32] + x[33] + x[34] + x[35] + x[36] + x[37] + x[38] + x[39];
    out[21] = + x[0] + x[1] - x[2] + x[3] + x[4] - x[5] - x[6] - x[7] - x[8] + x[9] - x[10] + x[11] - x[12] + x[13] + x[14] + x[15] + x[16] - x[17] - x[18] + x[19] - x[20] - x[21] + x[22] - x[23] - x[24] + x[25] + x[26] + x[27] + x[28] - x[29] + x[30] - x[31] + x[32] - x[33] - x[34] - x[35] - x[36] + x[37] + x[38] - x[39];
    out[22] = + x[0] + x[1] + x[2] - x[3] + x[4] + x[5] - x[6] - x[7] - x[8] - x[9] + x[10] - x[11] + x[12] - x[13] + x[14] + x[15] + x[16] + x[17] - x[18] - x[19] - x[20] - x[21] - x[22] + x[23] - x[24] - x[25] + x[26] + x[27] + x[28] + x[29] - x[30] + x[31] - x[32] + x[33] - x[34] - x[35] - x[36] - x[37] + x[38] + x[39];
    out[23] = + x[0] - x[1] + x[2] + x[3] - x[4] + x[5] + x[6] - x[7] - x[8] - x[9] - x[10] + x[11] - x[12] + x[13] - x[14] + x[15] + x[16] + x[17] + x[18] - x[19] - x[20] + x[21] - x[22] - x[23] + x[24] - x[25] - x[26] + x[27] + x[28] + x[29] + x[30] - x[31] + x[32] - x[33] + x[34] - x[35] - x[36] - x[37] - x[38] + x[39];
    out[24] = + x[0] - x[1] - x[2] + x[3] + x[4] - x[5] + x[6] + x[7] - x[8] - x[9] - x[10] - x[11] + x[12] - x[13] + x[14] - x[15] + x[16] + x[17] + x[18] + x[19] - x[20] + x[21] + x[22] - x[23] - x[24] + x[25] - x[26] - x[27] + x[28] + x[29] + x[30] + x[31] - x[32] + x[33] - x[34] + x[35] - x[36] - x[37] - x[38] - x[39];
    out[25] = + x[0] + x[1] - x[2] - x[3] + x[4] + x[5] - x[6] + x[7] + x[8] - x[9] - x[10] - x[11] - x[12] + x[13] - x[14] + x[15] - x[16] + x[17] + x[18] + x[19] - x[20] - x[21] + x[22] + x[23] - x[24] - x[25] + x[26] - x[27] - x[28] + x[29] + x[30] + x[31] + x[32] - x[33] + x[34] - x[35] + x[36] - x[37] - x[38] - x[39];
    out[26] = + x[0] + x[1] + x[2] - x[3] - x[4] + x[5] + x[6] - x[7] + x[8] + x[9] - x[10] - x[11] - x[12] - x[13] + x[14] - x[15] + x[16] - x[17] + x[18] + x[19] - x[20] - x[21] - x[22] + x[23] + x[24] - x[25] - x[26] + x[27] - x[28] - x[29] + x[30] + x[31] + x[32] + x[33] - x[34] + x[35] - x[36] + x[37] - x[38] - x[39];
    out[27] = + x[0] + x[1] + x[2] + x[3] - x[4] - x[5] + x[6] + x[7] - x[8] + x[9] + x[10] - x[11] - x[12] - x[13] - x[14] + x[15] - x[16] + x[17] - x[18] + x[19] - x[20] - x[21] - x[22] - x[23] + x[24] + x[25] - x[26] - x[27] + x[28] - x[29] - x[30] + x[31] + x[32] + x[33] + x[34] - x[35] + x[36] - x[37] + x[38] - x[39];
    out[28] = + x[0] + x[1] + x[2] + x[3] + x[4] - x[5] - x[6] + x[7] + x[8] - x[9] + x[10] + x[11] - x[12] - x[13] - x[14] - x[15] + x[16] - x[17] + x[18] - x[19] - x[20] - x[21] - x[22] - x[23] - x[24] + x[25] + x[26] - x[27] - x[28] + x[29] - x[30] - x[31] + x[32] + x[33] + x[34] + x[35] - x[36] + x[37] - x[38] + x[39];
    out[29] = + x[0] - x[1] + x[2] + x[3] + x[4] + x[5] - x[6] - x[7] + x[8] + x[9] - x[10] + x[11] + x[12] - x[13] - x[14] - x[15] - x[16] + x[17] - x[18] + x[19] - x[20] + x[21] - x[22] - x[23] - x[24] - x[25] + x[26] + x[27] - x[28] - x[29] + x[30] - x[31] - x[32] + x[33] + x[34] + x[35] + x[36] - x[37] + x[38] - x[39];
    out[30] = + x[0] + x[1] - x[2] + x[3] + x[4] + x[5] + x[6] - x[7] - x[8] + x[9] + x[10] - x[11] + x[12] + x[13] - x[14] - x[15] - x[16] - x[17] + x[18] - x[19] - x[20] - x[21] + x[22] - x[23] - x[24] - x[25] - x[26] + x[27] + x[28] - x[29] - x[30] + x[31] - x[32] - x[33] + x[34] + x[35] + x[36] + x[37] - x[38] + x[39];
    out[31] = + x[0] - x[1] + x[2] - x[3] + x[4] + x[5] + x[6] + x[7] - x[8] - x[9] + x[10] + x[11] - x[12] + x[13] + x[14] - x[15] - x[16] - x[17] - x[18] + x[19] - x[20] + x[21] - x[22] + x[23] - x[24] - x[25] - x[26] - x[27] + x[28] + x[29] - x[30] - x[31] + x[32] - x[33] - x[34] + x[35] + x[36] + x[37] + x[38] - x[39];
    out[32] = + x[0] + x[1] - x[2] + x[3] - x[4] + x[5] + x[6] + x[7] + x[8] - x[9] - x[10] + x[11] + x[12] - x[13] + x[14] + x[15] - x[16] - x[17] - x[18] - x[19] - x[20] - x[21] + x[22] - x[23] + x[24] - x[25] - x[26] - x[27] - x[28] + x[29] + x[30] - x[31] - x[32] + x[33] - x[34] - x[35] + x[36] + x[37] + x[38] + x[39];
    out[33] = + x[0] - x[1] + x[2] - x[3] + x[4] - x[5] + x[6] + x[7] + x[8] + x[9] - x[10] - x[11] + x[12] + x[13] - x[14] + x[15] + x[16] - x[17] - x[18] - x[19] - x[20] + x[21] - x[22] + x[23] - x[24] + x[25] - x[26] - x[27] - x[28] - x[29] + x[30] + x[31] - x[32] - x[33] + x[34] - x[35] - x[36] + x[37] + x[38] + x[39];
    out[34] = + x[0] - x[1] - x[2] + x[3] - x[4] + x[5] - x[6] + x[7] + x[8] + x[9] + x[10] - x[11] - x[12] + x[13] + x[14] - x[15] + x[16] + x[17] - x[18] - x[19] - x[20] + x[21] + x[22] - x[23] + x[24] - x[25] + x[26] - x[27] - x[28] - x[29] - x[30] + x[31] + x[32] - x[33] - x[34] + x[35] - x[36] - x[37] + x[38] + x[39];
    out[35] = + x[0] - x[1] - x[2] - x[3] + x[4] - x[5] + x[6] - x[7] + x[8] + x[9] + x[10] + x[11] - x[12] - x[13] + x[14] + x[15] - x[16] + x[17] + x[18] - x[19] - x[20] + x[21] + x[22] + x[23] - x[24] + x[25] - x[26] + x[27] - x[28] - x[29] - x[30] - x[31] + x[32] + x[33] - x[34] - x[35] + x[36] - x[37] - x[38] + x[39];
    out[36] = + x[0] - x[1] - x[2] - x[3] - x[4] + x[5] - x[6] + x[7] - x[8] + x[9] + x[10] + x[11] + x[12] - x[13] - x[14] + x[15] + x[16] - x[17] + x[18] + x[19] - x[20] + x[21] + x[22] + x[23] + x[24] - x[25] + x[26] - x[27] + x[28] - x[29] - x[30] - x[31] - x[32] + x[33] + x[34] - x[35] - x[36] + x[37] - x[38] - x[39];
    out[37] = + x[0] + x[1] - x[2] - x[3] - x[4] - x[5] + x[6] - x[7] + x[8] - x[9] + x[10] + x[11] + x[12] + x[13] - x[14] - x[15] + x[16] + x[17] - x[18] + x[19] - x[20] - x[21] + x[22] + x[23] + x[24] + x[25] - x[26] + x[27] - x[28] + x[29] - x[30] - x[31] - x[32] - x[33] + x[34] + x[35] - x[36] - x[37] + x[38] - x[39];
    out[38] = + x[0] + x[1] + x[2] - x[3] - x[4] - x[5] - x[6] + x[7] - x[8] + x[9] - x[10] + x[11] + x[12] + x[13] + x[14] - x[15] - x[16] + x[17] + x[18] - x[19] - x[20] - x[21] - x[22] + x[23] + x[24] + x[25] + x[26] - x[27] + x[28] - x[29] + x[30] - x[31] - x[32] - x[33] - x[34] + x[35] + x[36] - x[37] - x[38] + x[39];
    out[39] = + x[0] - x[1] + x[2] + x[3] - x[4] - x[5] - x[6] - x[7] + x[8] - x[9] + x[10] - x[11] + x[12] + x[13] + x[14] + x[15] - x[16] - x[17] + x[18] + x[19] - x[20] + x[21] - x[22] - x[23] + x[24] + x[25] + x[26] + x[27] - x[28] + x[29] - x[30] + x[31] - x[32] - x[33] - x[34] - x[35] + x[36] + x[37] - x[38] - x[39];
    #pragma unroll
    for (int i = 0; i < 40; i++) { x[i] = out[i]; }
}

