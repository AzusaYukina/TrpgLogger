#pragma once
#include <string>
enum class MsgType;

// �����¼���ļ�
std::string saveLog(time_t time_start, time_t now, long long groupNum, MsgType msgType, const std::string& logLoc);