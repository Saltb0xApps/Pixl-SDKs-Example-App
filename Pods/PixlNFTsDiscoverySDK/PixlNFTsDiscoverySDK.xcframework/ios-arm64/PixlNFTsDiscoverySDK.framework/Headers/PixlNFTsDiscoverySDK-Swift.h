#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef PIXLNFTSDISCOVERYSDK_SWIFT_H
#define PIXLNFTSDISCOVERYSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ARKit;
@import CoreFoundation;
@import CoreLocation;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import SceneKit;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PixlNFTsDiscoverySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSCoder;

/// This node type enables the client to have access to the view or image that
/// was used to initialize the <code>LocationAnnotationNode</code>.
SWIFT_CLASS("_TtC20PixlNFTsDiscoverySDK14AnnotationNode")
@interface AnnotationNode : SCNNode
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// A location node can be added to a scene using a coordinate.
/// Its scale and position should not be adjusted, as these are used for scene
/// layout purposes.  To adjust the scale and position of items within a node,
/// you can add them to a child node and adjust them there
SWIFT_CLASS("_TtC20PixlNFTsDiscoverySDK12LocationNode")
@interface LocationNode : SCNNode
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// A <code>LocationNode</code> which has an attached <code>AnnotationNode</code>.
SWIFT_CLASS("_TtC20PixlNFTsDiscoverySDK22LocationAnnotationNode")
@interface LocationAnnotationNode : LocationNode
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// Handles retrieving the location and heading from CoreLocation
/// Does not contain anything related to ARKit or advanced location
SWIFT_CLASS("_TtC20PixlNFTsDiscoverySDK15LocationManager")
@interface LocationManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class CLLocationManager;
@class CLLocation;
@class CLHeading;

@interface LocationManager (SWIFT_EXTENSION(PixlNFTsDiscoverySDK)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager * _Nonnull)manager SWIFT_WARN_UNUSED_RESULT;
@end




@class UITouch;
@class UIEvent;
@class UIGestureRecognizer;
@class NSString;
@class NSBundle;

SWIFT_CLASS("_TtC20PixlNFTsDiscoverySDK30PixlNFTsDiscoverViewController")
@interface PixlNFTsDiscoverViewController : UIViewController <UIGestureRecognizerDelegate>
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)dismissAction;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;
@class UICollectionViewLayout;
@class NSIndexPath;

@interface PixlNFTsDiscoverViewController (SWIFT_EXTENSION(PixlNFTsDiscoverySDK)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@class UICollectionViewCell;

@interface PixlNFTsDiscoverViewController (SWIFT_EXTENSION(PixlNFTsDiscoverySDK)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@protocol SCNSceneRenderer;
@class ARAnchor;

@interface PixlNFTsDiscoverViewController (SWIFT_EXTENSION(PixlNFTsDiscoverySDK)) <ARSCNViewDelegate>
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didUpdateNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
- (SCNNode * _Nullable)renderer:(id <SCNSceneRenderer> _Nonnull)renderer nodeForAnchor:(ARAnchor * _Nonnull)anchor SWIFT_WARN_UNUSED_RESULT;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didAddNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didRemoveNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
@end


/// A Node that is used to show directions in AR-CL.
SWIFT_CLASS("_TtC20PixlNFTsDiscoverySDK12PolylineNode")
@interface PolylineNode : LocationNode
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC20PixlNFTsDiscoverySDK17SceneLocationView") SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface SceneLocationView : ARSCNView
/// Addresses <a href="https://github.com/ProjectDent/ARKit-CoreLocation/issues/196">Issue #196</a> -
/// Delegate issue when assigned to self (no location nodes render).   If the user
/// tries to set the delegate, perform an assertionFailure and tell them to set the <code>arViewDelegate</code> instead.
@property (nonatomic, strong) id <ARSCNViewDelegate> _Nullable delegate;
- (nonnull instancetype)initWithFrame:(CGRect)frame options:(NSDictionary<NSString *, id> * _Nullable)options OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end




SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface SceneLocationView (SWIFT_EXTENSION(PixlNFTsDiscoverySDK)) <ARSCNViewDelegate>
- (SCNNode * _Nullable)renderer:(id <SCNSceneRenderer> _Nonnull)renderer nodeForAnchor:(ARAnchor * _Nonnull)anchor SWIFT_WARN_UNUSED_RESULT;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didAddNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer willUpdateNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didUpdateNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didRemoveNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
@end

@class SCNScene;

SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface SceneLocationView (SWIFT_EXTENSION(PixlNFTsDiscoverySDK))
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didRenderScene:(SCNScene * _Nonnull)scene atTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer updateAtTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didApplyAnimationsAtTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didSimulatePhysicsAtTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didApplyConstraintsAtTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer willRenderScene:(SCNScene * _Nonnull)scene atTime:(NSTimeInterval)time;
@end

@class ARSession;
@class ARCamera;

SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface SceneLocationView (SWIFT_EXTENSION(PixlNFTsDiscoverySDK))
- (void)session:(ARSession * _Nonnull)session didFailWithError:(NSError * _Nonnull)error;
- (void)session:(ARSession * _Nonnull)session cameraDidChangeTrackingState:(ARCamera * _Nonnull)camera;
- (void)sessionWasInterrupted:(ARSession * _Nonnull)session;
- (void)sessionInterruptionEnded:(ARSession * _Nonnull)session;
- (BOOL)sessionShouldAttemptRelocalization:(ARSession * _Nonnull)session SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=11.3);
- (void)session:(ARSession * _Nonnull)session didOutputAudioSampleBuffer:(CMSampleBufferRef _Nonnull)audioSampleBuffer;
@end


@class UITapGestureRecognizer;

SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface SceneLocationView (SWIFT_EXTENSION(PixlNFTsDiscoverySDK))
- (void)sceneLocationViewTouchedWithSender:(UITapGestureRecognizer * _Nonnull)sender;
@end






@class UIPresentationController;

@interface UIViewController (SWIFT_EXTENSION(PixlNFTsDiscoverySDK)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerDidDismiss:(UIPresentationController * _Nonnull)presentationController;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif