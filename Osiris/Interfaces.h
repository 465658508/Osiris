#pragma once

#include <string>

#include "SDK/EngineClient.h"

class Interfaces final {
public:
    Interfaces();
    void* find(const std::string&, const std::string&);
    EngineClient* engineClient;
};

extern Interfaces interfaces;
