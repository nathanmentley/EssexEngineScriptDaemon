/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <EssexEngineCore/IDriver.h>

namespace EssexEngine{
namespace Daemons{
namespace Script{
    class IScriptDriver: public Core::IDriver
    {
        public:
            virtual void InitScripting() = 0;
            virtual void ExecuteScript(std::string script) = 0;
            virtual void DeinitScripting() = 0;
        private:
    };
}}};
