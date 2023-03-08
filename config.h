#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* menu[]    = {"dmenu_run",      0};
const char* browse[]	= {"firefox",		0};
const char* term[]    = {"alacritty",             0};
const char* scrot[]   = {"screenshot",            0};
const char* voldown[] = {"volume", "down",         0};
const char* volup[]   = {"volume", "up",         0};
const char* volmute[] = {"volume", "mute",      0};
const char* file[]    = {"pcmanfm",             0};
const char* pavu[]    = {"pavucontrol",             0};
const char *play[] = { "playerctl", "-a", "play-pause",  0};
const char *prev[] = { "playerctl", "-a", "previous",    0};
const char *next[] = { "playerctl", "-a", "next",        0};


static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_p,      run, {.com = menu}},
    {MOD, XK_m,      run, {.com = browse}},
    {MOD, XK_s,      run, {.com = scrot}},
    {MOD, XK_b,      run, {.com = file}},
    {MOD, XK_v,      run, {.com = pavu}},
    {MOD, XK_Return, run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = play}},
    {0,   XF86XK_AudioPlay,        run, {.com = volmute }},
    {0,   XF86XK_AudioNext,        run, {.com = next }},
    {0,   XF86XK_AudioPrev,        run, {.com = prev }},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
    {MOD,           XK_7, ws_go,     {.i = 7}},
    {MOD|ShiftMask, XK_7, win_to_ws, {.i = 7}},
    {MOD,           XK_8, ws_go,     {.i = 8}},
    {MOD|ShiftMask, XK_8, win_to_ws, {.i = 8}},
    {MOD,           XK_9, ws_go,     {.i = 9}},
    {MOD|ShiftMask, XK_9, win_to_ws, {.i = 9}},
};

#endif
