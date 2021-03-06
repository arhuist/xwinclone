#ifndef DEFINES_H
#define	DEFINES_H

#ifdef	__cplusplus
extern "C" {
#endif

#define XWINCLONE_VERSION_STR                        "0.1b"

    /**************************************************************************/
    /*Program definitions*/
#define STR_EQUAL                                    0
#define INT_CONV_OK                                  0
#define LOG_LVL_NO                                   0
#define LOG_LVL_1                                    1
#define LOG_LVL_2                                    2
    /**************************************************************************/

    /**************************************************************************/
    /*Options*/
#define _POSIX_C_SOURCE                              200112L
#define FRAMERATE_FPS                                30  //fps
#define TIME_TO_CHANGE_FOCUS_SEC                     2   //s
#define TIME_TO_WAIT_FOR_SRCWIN_TO_BECOME_VISIBLE_MS 500 //ms
#define DEFAULT_BG_COLOR                             "000000" //rgb color
#define EXIT_KEY_STR                                 "g"
#define EXIT_MASK                                    ControlMask // from X.h
#define DEF_EXIT_KOMBINATION_STR                     "CTRL + g"
#define WM_CLASS_PRG_NAME_STR                        "XWinClone"
#define WM_CLASS_CLASS_NAME_STR                      "xwinclone"
#define AUTOCENTERING                                1 //1=true; 0=false
#define TOP_OFFSET                                   71 // in pixels
#define PROGRAM_EXE_NAME_STR                         "xwinclone"
#define BG_IMAGE_PATH                                "./"
#define DEFAULT_LOG_LVL                              LOG_LVL_1
    /**************************************************************************/
#ifdef	__cplusplus
}
#endif

#endif

