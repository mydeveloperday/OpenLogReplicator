// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: OraProtoBuf.proto
// Original file comments:
// Copyright (C) 2018-2020 Adam Leszczynski (aleszczynski@bersler.com)
//
// This file is part of OpenLogReplicator.
//
// OpenLogReplicator is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as published
// by the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// OpenLogReplicator is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
// Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with OpenLogReplicator; see the file LICENSE;  If not see
// <http://www.gnu.org/licenses/>.  
//
#ifndef GRPC_OraProtoBuf_2eproto__INCLUDED
#define GRPC_OraProtoBuf_2eproto__INCLUDED

#include "OraProtoBuf.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace OpenLogReplicator {
namespace pb {

class RedoStream final {
 public:
  static constexpr char const* service_full_name() {
    return "OpenLogReplicator.pb.RedoStream";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>> redoStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>>(redoStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>> AsyncredoStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>>(AsyncredoStreamRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>> PrepareAsyncredoStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>>(PrepareAsyncredoStreamRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void redoStream(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::OpenLogReplicator::pb::Request,::OpenLogReplicator::pb::Redo>* reactor) = 0;
      #else
      virtual void redoStream(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::OpenLogReplicator::pb::Request,::OpenLogReplicator::pb::Redo>* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* redoStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* AsyncredoStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* PrepareAsyncredoStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>> redoStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>>(redoStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>> AsyncredoStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>>(AsyncredoStreamRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>> PrepareAsyncredoStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>>(PrepareAsyncredoStreamRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void redoStream(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::OpenLogReplicator::pb::Request,::OpenLogReplicator::pb::Redo>* reactor) override;
      #else
      void redoStream(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::OpenLogReplicator::pb::Request,::OpenLogReplicator::pb::Redo>* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* redoStreamRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* AsyncredoStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* PrepareAsyncredoStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_redoStream_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status redoStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::OpenLogReplicator::pb::Redo, ::OpenLogReplicator::pb::Request>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_redoStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_redoStream() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_redoStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status redoStream(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::OpenLogReplicator::pb::Redo, ::OpenLogReplicator::pb::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestredoStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::OpenLogReplicator::pb::Redo, ::OpenLogReplicator::pb::Request>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_redoStream<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_redoStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_redoStream() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackBidiHandler< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->redoStream(context); }));
    }
    ~ExperimentalWithCallbackMethod_redoStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status redoStream(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::OpenLogReplicator::pb::Redo, ::OpenLogReplicator::pb::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* redoStream(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::OpenLogReplicator::pb::Request, ::OpenLogReplicator::pb::Redo>* redoStream(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_redoStream<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_redoStream<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_redoStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_redoStream() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_redoStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status redoStream(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::OpenLogReplicator::pb::Redo, ::OpenLogReplicator::pb::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_redoStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_redoStream() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_redoStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status redoStream(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::OpenLogReplicator::pb::Redo, ::OpenLogReplicator::pb::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestredoStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_redoStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_redoStream() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->redoStream(context); }));
    }
    ~ExperimentalWithRawCallbackMethod_redoStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status redoStream(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::OpenLogReplicator::pb::Redo, ::OpenLogReplicator::pb::Request>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* redoStream(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* redoStream(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace pb
}  // namespace OpenLogReplicator


#endif  // GRPC_OraProtoBuf_2eproto__INCLUDED
