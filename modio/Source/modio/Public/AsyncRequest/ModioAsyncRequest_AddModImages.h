// Copyright 2019 modio. All Rights Reserved.
// Released under MIT.

#pragma once
#include "AsyncRequest/ModioAsyncRequest.h"
#include "Schemas/ModioResponse.h"

/**
* Callback for when new images were added to a mod
* @param ModioResponse - Response from Modio backend
*/

class FModioAsyncRequest_AddModImages : public FModioAsyncRequest
{
public:
  FModioAsyncRequest_AddModImages( FModioSubsystem *Modio, FModioGenericDelegate Delegate );

  static void Response(void *Object, ModioResponse ModioResponse );

private:
  FModioGenericDelegate ResponseDelegate;
};