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

#include <EssexEngineScriptDaemon/ScriptDaemon.h>

EssexEngine::Daemons::Script::ScriptDaemon::ScriptDaemon(WeakPointer<Context> _context):BaseDaemon(_context) { }

EssexEngine::Daemons::Script::ScriptDaemon::~ScriptDaemon() { }

void EssexEngine::Daemons::Script::ScriptDaemon::InitScripting() {
    GetDriver()->InitScripting();
}
void EssexEngine::Daemons::Script::ScriptDaemon::ExecuteScript(std::string script) {
    //GetDriver()->ExecuteScript(script);
}
void EssexEngine::Daemons::Script::ScriptDaemon::DeinitScripting() {
    GetDriver()->DeinitScripting();
}
