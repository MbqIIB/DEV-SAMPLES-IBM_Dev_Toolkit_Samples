/*****************************************************************************\
*
* Module Name: FOURCC.H
*
* OS/2 Warp Multimedia Extensions Color space definitions
*
* Copyright (c) International Business Machines Corporation 1993, 1995
*                         All Rights Reserved
*
*
\*****************************************************************************/
#ifdef __cplusplus
   extern "C" {
#endif


#ifndef _FOURCC_H_
#define _FOURCC_H_

#define FOURCC_SCRN  0
#define FOURCC_R565  mmioFOURCC( 'R', '5', '6', '5' )
#define FOURCC_R555  mmioFOURCC( 'R', '5', '5', '5' )
#define FOURCC_R664  mmioFOURCC( 'R', '6', '6', '4' )
#define FOURCC_RGB3  mmioFOURCC( 'R', 'G', 'B', '3' )
#define FOURCC_BGR3  mmioFOURCC( 'B', 'G', 'R', '3' )
#define FOURCC_RGB4  mmioFOURCC( 'R', 'G', 'B', '4' )
#define FOURCC_BGR4  mmioFOURCC( 'B', 'G', 'R', '4' )
#define FOURCC_LUT8  mmioFOURCC( 'L', 'U', 'T', '8' )
#define FOURCC_LT12  mmioFOURCC( 'L', 'T', '1', '2' )
#define FOURCC_GREY  mmioFOURCC( 'G', 'R', 'E', 'Y' )
#define FOURCC_GY16  mmioFOURCC( 'G', 'Y', '1', '6' )
#define FOURCC_Y888  mmioFOURCC( 'Y', '8', '8', '8' )
#define FOURCC_Y2X2  mmioFOURCC( 'Y', '2', 'X', '2' )
#define FOURCC_Y4X4  mmioFOURCC( 'Y', '4', 'X', '4' )
#define FOURCC_YUV9  mmioFOURCC( 'Y', 'U', 'V', '9' )
#define FOURCC_Y644  mmioFOURCC( 'Y', '6', '4', '4' )
#define FOURCC_MONO  mmioFOURCC( 'M', 'O', 'N', 'O' )
#define FOURCC_Y422  mmioFOURCC( 'Y', '4', '2', '2' )
#define FOURCC_Y42B  mmioFOURCC( 'Y', '4', '2', 'B' )
#define FOURCC_Y42D  mmioFOURCC( 'Y', '4', '2', 'D' )
#define FOURCC_Y411  mmioFOURCC( 'Y', '4', '1', '1' )
#define FOURCC_VGA   mmioFOURCC( 'V', 'G', 'A', ' ' )




/******************************************************************************

 DIVE color format definitions:

   FOURCC_SCRN : Use the fourcc of the screen, typically LUT8, R565, or BGR3.

   FOURCC_R565 : This is single plane two byte per pixel format:
                 in USHORT: "rrrr rggg  gggb bbbb"
                            "4321 0543  2104 3210"
                 in memory: "gggb bbbb  rrrr rggg"
                            "2104 3210  4321 0543"

   FOURCC_R555 : This is single plane two byte per pixel format:
                 in USHORT: "xrrr rrgg  gggb bbbb"
                            "-432 1043  2104 3210"
                 in memory: "gggb bbbb  xrrr rrgg"
                            "2104 3210  -432 1043"

   FOURCC_R664 : This is single plane two byte per pixel format:
                 in USHORT: "rrrr rrgg  gggg bbbb"
                            "5432 1054  3210 3210"
                 in memory: "gggg bbbb  rrrr rrgg"
                            "3210 3210  5432 1054"

   FOURCC_RGB3 : This is single plane three byte per pixel format:
                 in ULONG:  "xxxx xxxx  bbbb bbbb  gggg gggg  rrrr rrrr"
                            "---- ----  7654 3210  7654 3210  7654 3210"
                 in memory: "rrrr rrrr  gggg gggg  bbbb bbbb"
                            "7654 3210  7654 3210  7654 3210"

   FOURCC_BGR3 : This is single plane three byte per pixel format:
                 in ULONG:  "xxxx xxxx  rrrr rrrr  gggg gggg  bbbb bbbb"
                            "---- ----  7654 3210  7654 3210  7654 3210"
                 in memory: "bbbb bbbb  gggg gggg  rrrr rrrr"
                            "7654 3210  7654 3210  7654 3210"

   FOURCC_RGB4 : This is single plane four byte per pixel format:
                 in ULONG:  "0000 0000  bbbb bbbb  gggg gggg  rrrr rrrr"
                            "---- ----  7654 3210  7654 3210  7654 3210"
                 in memory: "rrrr rrrr  gggg gggg  bbbb bbbb  0000 0000"
                            "7654 3210  7654 3210  7654 3210  ---- ----"

   FOURCC_BGR4 : This is single plane four byte per pixel format:
                 in ULONG:  "0000 0000  rrrr rrrr  gggg gggg  bbbb bbbb"
                            "---- ----  7654 3210  7654 3210  7654 3210"
                 in memory: "bbbb bbbb  gggg gggg  rrrr rrrr  0000 0000"
                            "7654 3210  7654 3210  7654 3210  ---- ----"

   FOURCC_LUT8 : This is a single plane one byte per pixel format:
                 in BYTE:   "7654 3210"
                 in memory: "7654 3210"
                 An 256 entry BGR4 palette represents the lookup table.

   FOURCC_LT12 : This is a single plane two byte per pixel format:
                 in USHORT: "0000 ba98  7654 3210"
                 in memory: "7654 3210  0000 ba98"
                 An 4096 entry BGR4 palette represents the lookup table.

   FOURCC_Y888 : This is a three plane one byte per component pixel format:
                 ��������������Ŀ
                 �              �     In Y888, each of the three consecutive
                 �      Y       �     planse are of the same size (i.e. the
                 �   [0..255]   �     chrominance planes are not subsampled).
                 �  7654  3210  �
                 ����������������     Normal CCIR601 conversions apply:
                 ��������������Ŀ     R = Y + ( Cr - 128 ) * 1.370
                 �      Cr      �     G = Y - ( Cb - 128 ) * 0.336
                 �   [0..255]   �           - ( Cr - 128 ) * 0.698
                 � center = 128 �     B = Y + ( Cb - 128 ) * 1.730
                 �  7654  3210  �
                 ����������������     Y = R * 0.299 + G * 0.587 + B * 0.114
                 ��������������Ŀ         U = ( B - Y ) * 0.492
                 �      Cb      �         V = ( R - Y ) * 0.877
                 �   [0..255]   �     Cb = U + 128
                 � center = 128 �     Cr = V + 128
                 �  7654  3210  �
                 ����������������

   FOURCC_Y2X2 : This is a three plane one byte per component pixel format:
                 ����Ŀ
                 �    �   Same as Y888, except that the Cr and Cb planes
                 �    �   are subsampled 2x2.
                 ������
                 ��Ŀ
                 �  �
                 ����
                 ��Ŀ
                 �  �
                 ����

   FOURCC_Y4X4 : This is a three plane one byte per component pixel format:
                 ����Ŀ
                 �    �   Same as Y888, except that the Cr and Cb planes
                 �    �   are subsampled 4x4.
                 ������
                 ڿ
                 ��
                 ڿ
                 ��

   FOURCC_YUV9 : This is a three plane one byte per component pixel format:
                 Same as Y4X4.

   FOURCC_Y644 : This is a two plane one byte per component pixel format:
                 ����Ŀ
                 �    �   The first plane is a Y plane: "00YY YYYY" "--54 3210"
                 �    �   The second plane a UV combined plane, and it
                 ������      is 4x4 subsampled: "UUUU VVVV" "3210 3210"
                 ڿ          To convert from the four-bit chrominance
                 ��          components to normal 8-bit, do:
                                 U = 6.375 * ( U' - 5 )
                                 V = 7.500 * ( V' - 6 )

   FOURCC_MONO : This is a single plane one bit per pixel format:
                 ����Ŀ
                 �    �   Each byte is "0123 4567" in pixel order left to
                 �    �   right where a zero bit corresponds to black and
                 ������   a one bit corresponds to white.

   FOURCC_Y422 : This is a single plane three component interleaved format:
                 ����Ŀ
                 �    �   "yyyy yyyy" "uuuu uuuu" "yyyy yyyy" "vvvv vvvv"
                 �    �   "7654 3210" "7654 3210" "7654 3210" "7654 3210"
                 ������   where each of the above repeating groups represent
                          two pixels.  The left Y, the U and the V combine to
                          form the left CCIR601 color, and the right Y, the
                          U and the V combine to form the right.  This is
                          effectively a 2x1 subsampling.

   FOURCC_Y42B : Same as FOURCC_Y422, except byte swapped within words:
                 ����Ŀ
                 �    �   "uuuu uuuu" "yyyy yyyy" "vvvv vvvv" "yyyy yyyy"
                 �    �   "7654 3210" "7654 3210" "7654 3210" "7654 3210"
                 ������

   FOURCC_Y42D : Same as FOURCC_Y422, except byte swapped within DWORDs:
                 ����Ŀ
                 �    �   "vvvv vvvv" "yyyy yyyy" "uuuu uuuu" "yyyy yyyy"
                 �    �   "7654 3210" "7654 3210" "7654 3210" "7654 3210"
                 ������

   FOURCC_Y411 : This is a single plane three component interleaved format:
                 ����Ŀ
                 �    �   Use four consecutive 2-byte words as four pixels.
                 �    �   The is effectively a 4x1 subsampling.  Each word
                 ������   has it's own 7-bit luminance and a chrominance part:

              Cb6:Cb5:Cr6:Cr5:???:???:???:???  Ya6:Ya5:Ya4:Ya3:Ya2:Ya1:Ya0:???
              Cb4:Cb3:Cr4:Cr3:???:???:???:???  Yb6:Yb5:Yb4:Yb3:Yb2:Yb1:Yb0:???
              Cb2:Cb1:Cr2:Cr1:???:???:???:???  Yc6:Yc5:Yc4:Yc3:Yc2:Yc1:Yc0:???
              Cb0:???:Cr0:???:???:???:???:???  Yd6:Yd5:Yd4:Yd3:Yd2:Yd1:Yd0:???
                                              �������������������Ŀ
              Therefore, four pixels in a     �        Cr         �
              row share a chrominace pair     �������������������Ĵ
              and look like:                  �        Cb         �
                                              �������������������Ĵ
                                              � Ya � Yb � Yc � Yd �
                                              ���������������������

   FOURCC_VGA  : This is a single plane 16 color format:
                 ����Ŀ
                 �    �   Each byte is "xxxx yyyy" "3210 3210" where 'x'
                 �    �   is the first pixel and 'y' is the next.  The 16
                 ������   colors are the standard VGA colors.




 DIVE conversion support matrix:

         R  R  R  R  B  R  B  L  L  G  G  Y  Y  Y  Y  Y  M  Y  Y  V
         5  5  6  G  G  G  G  U  T  R  Y  8  2  4  U  6  O  4  4  G
         6  5  6  B  R  B  R  T  1  E  1  8  X  X  V  4  N  2  1  A
out |in  5  5  4  3  3  4  4  8  2  Y  6  8  2  4  9  4  O  2  1
----|--------------------------------------------------------------
R565|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
R555|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
R664|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
RGB3|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
BGR3|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
RGB4|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
BGR4|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
LUT8|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
LT12|                            X
GREY|                               X
GY16|                                  X
Y888|
Y2X2|
Y4X4|
YUV9|
Y644|
MONO|
Y422|    X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X
Y411|
VGA |

******************************************************************************/

#endif

#ifdef __cplusplus
}
#endif

