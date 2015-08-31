#ifndef LEMONBT_H
#define LEMONBT_H

#include <node.h>
#include <node_object_wrap.h>
#include "Select.h"

class FightModel : public node::ObjectWrap
{
public:
	static void Init(v8::Handle<v8::Object> exports);
private:
	static void New(const v8::FunctionCallbackInfo<v8::Value>& args);

	static v8::Persistent<v8::Function> constructor;
private:

};

#endif //LEMONBT_H