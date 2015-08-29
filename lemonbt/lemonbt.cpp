#include <node.h>
#include "./inc/Sequence.h"
#include "./inc/Select.h"
#include "./inc/ParallelSelector.h"
#include "./inc/ParallelSequence.h"
#include "./inc/Decorator.h"
#include "./inc/Debug.h"
using namespace v8;
using namespace lemonbt;


void newNode(const FunctionCallbackInfo<Value>& args) 
{
	Isolate* isolate = Isolate::GetCurrent();
	HandleScope scope(isolate);
	if (args.IsConstructCall())
	{
		Node* obj = new Node();
		args.GetReturnValue().Set(args.This());
	}
}

void Method(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = Isolate::GetCurrent();
	HandleScope scope(isolate);
	args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}

void nodeFun(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = Isolate::GetCurrent();

	Local<FunctionTemplate> _node = FunctionTemplate::New(isolate, newNode);
	_node->SetClassName(String::NewFromUtf8(isolate, "Node"));

	HandleScope scope(isolate);
	args.GetReturnValue().Set(String::NewFromUtf8(isolate, "lemonbt"));
}

void init(Handle<Object> exports) 
{
   NODE_SET_METHOD(exports, "init", Method);
   NODE_SET_METHOD(exports, "node", nodeFun);

}



NODE_MODULE(lemonbt, init)