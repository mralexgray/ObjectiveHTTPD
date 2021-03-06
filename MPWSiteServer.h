//
//  MPWSiteServer.h
//  ObjectiveHTTPD
//
//  Created by Marcel Weiher on 2/11/12.
//  Copyright (c) 2012 metaobject ltd. All rights reserved.
//

#import <MPWFoundation/MPWFoundation.h>

@class MPWHTTPServer,MPWSiteMap,MPWTemplater,MPWCopyOnWriteScheme,MethodServer;

@class MPWStCompiler,MPWHTMLRenderScheme;

@interface MPWSiteServer : NSObject
{
    MPWHTTPServer           *server;
    MPWSiteMap              *sitemap;
    MPWTemplater            *templater;
    MPWHTMLRenderScheme     *renderer;
    MPWCopyOnWriteScheme    *cache;
    MPWStCompiler           *interpreter;
    MethodServer            *methodServer;
}

objectAccessor_h(MPWHTTPServer, server, setServer)
objectAccessor_h(MPWSiteMap, sitemap, setSitemap)
objectAccessor_h(MPWTemplater, templater, setTemplater )
objectAccessor_h(MPWCopyOnWriteScheme, cache , setCache )
objectAccessor_h(MPWStCompiler, interpreter , setInterpreter )
objectAccessor_h(MethodServer, methodServer , setMethodServer)
objectAccessor_h(MPWHTMLRenderScheme, renderer , setRenderer)


@end
