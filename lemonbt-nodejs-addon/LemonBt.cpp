#include <node.h>
#include "./inc/Sequence.h"
#include "./inc/Select.h"
#include "./inc/ParallelSelector.h"
#include "./inc/ParallelSequence.h"
#include "./inc/Decorator.h"
#include "./inc/Debug.h"
#include "./inc/LemonBt"
using namespace v8;
using namespace lemonbt;

Persistent<Function> LemonBt::constructor;

void LemonBt::Init(Handle<Object> exports) {
  Isolate* isolate = Isolate::GetCurrent();

  // Prepare constructor template
  Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, New);
  tpl->SetClassName(String::NewFromUtf8(isolate, "Select"));
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  // Prototype
  NODE_SET_PROTOTYPE_METHOD(tpl, "Select", Select);


  constructor.Reset(isolate, tpl->GetFunction());
  exports->Set(String::NewFromUtf8(isolate, "Select"),
               tpl->GetFunction());
}

void LemonBt::New(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);

  if (args.IsConstructCall()) {
    // Invoked as constructor: `new MyObject(...)`
    LemonBt* obj = new LemonBt();
    obj->Wrap(args.This());
    args.GetReturnValue().Set(args.This());
  } else {
    // Invoked as plain function `MyObject(...)`, turn into construct call.
    Local<Function> cons = Local<Function>::New(isolate, constructor);
    args.GetReturnValue().Set(cons->NewInstance());
  }
}

void Select(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = Isolate::GetCurrent();
	HandleScope scope(isolate);
	//.....
	Select *select = new Select();
	args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}


void InitAll(Handle<Object> exports)
{
   //NODE_SET_METHOD(exports, "init", Method);
	Init(exports);
}



NODE_MODULE(lemonbt, InitAll)