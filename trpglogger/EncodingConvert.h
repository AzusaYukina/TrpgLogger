#pragma once
#ifndef TRPGLOGGER_ENCODING_CONVERT
#define TRPGLOGGER_ENCODING_CONVERT
#include <string>

// UTF8����ת��ΪGBK����
std::string UTF8ToGBK(const std::string& strUTF8);

// GBK����ת��ΪUTF8����
std::string GBKToUTF8(const std::string& strGBK);

#endif /*TRPGLOGGER_ENCODING_CONVERT*/