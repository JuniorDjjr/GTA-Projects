#pragma once

#include "MySettings.h"
#include "plugin_III.h"

MySettings settings;

MySettings::MySettings() {
    plugin::config_file conf(PLUGIN_PATH("AdditionalComponents.dat"));

    keyOpenClose = conf["KEY_OPEN_CLOSE"].asInt(107);
    keyOpen = conf["KEY_OPEN"].asInt(104);
    keyClose = conf["KEY_CLOSE"].asInt(98);
    keyOnOff = conf["KEY_ON_OFF"].asInt(46);
}