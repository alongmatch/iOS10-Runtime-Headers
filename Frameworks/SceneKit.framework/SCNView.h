/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNDisplayLink, SCNJitterer, EAGLContext, <SCNSceneRendererDelegate>, SCNNode, UIColor, SCNSpriteKitEventHandler, NSString, SCNEventHandler, NSRecursiveLock, SCNTechnique, NSArray, SKScene, SCNScene, SCNRenderer;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport> {
    double _currentSystemTime;
    NSString *__ibSceneName;
    unsigned int _ibNoMultisampling : 1;
    unsigned int _allowsBrowsing : 1;
    unsigned int _isOpaque : 1;
    unsigned int _firstDrawDone : 1;
    unsigned int _appIsDeactivated : 1;
    unsigned int _viewIsOffscreen : 1;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *__displayLink;
    SCNJitterer *_jitterer;
    NSRecursiveLock *_lock;
    UIColor *_backgroundColor;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    SCNEventHandler *_eventHandler;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    NSArray *_controllerGestureRecognizers;
}

@property(retain) SCNScene * scene;
@property bool allowsCameraControl;
@property(retain) EAGLContext * eaglContext;
@property long long preferredFramesPerSecond;
@property unsigned long long antialiasingMode;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property double sceneTime;
@property <SCNSceneRendererDelegate> * delegate;
@property(getter=isPlaying) bool playing;
@property bool loops;
@property(retain) SCNNode * pointOfView;
@property bool autoenablesDefaultLighting;
@property(getter=isJitteringEnabled) bool jitteringEnabled;
@property bool showsStatistics;
@property(retain) SKScene * overlaySKScene;
@property(readonly) void* context;
@property(copy) SCNTechnique * technique;

+ (id)_kvoKeysForwardedToRenderer;
+ (id)SCNJSExportProtocol;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)layerClass;

- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (void)setEaglContext:(id)arg1;
- (void)switchToNextCamera;
- (void)switchToCameraNamed:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (long long)preferredFramesPerSecond;
- (void)eventHandlerWantsRedraw;
- (bool)_supportsJiterringSyncRedraw;
- (void)pauseDisplayLink;
- (void)resumeDisplayLink;
- (void)setPointOfView:(id)arg1 animate:(bool)arg2;
- (void)_drawAtTime:(double)arg1;
- (void)_updateGestureRecognizers;
- (double)_flipY:(double)arg1;
- (id)_displayLink;
- (void)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_setNeedsDisplay;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_flushDisplayLink;
- (bool)_ibWantsMultisampling;
- (id)_ibSceneName;
- (bool)allowsCameraControl;
- (void)set_ibSceneName:(id)arg1;
- (void)setAllowsCameraControl:(bool)arg1;
- (void)set_ibWantsMultisampling:(bool)arg1;
- (void)_commonInit:(id)arg1;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (unsigned long long)antialiasingMode;
- (void)set_showsAuthoringEnvironment:(bool)arg1;
- (bool)_showsAuthoringEnvironment;
- (void)setOverlaySKScene:(id)arg1;
- (id)overlaySKScene;
- (void)setShowsStatistics:(bool)arg1;
- (bool)showsStatistics;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (bool)autoenablesDefaultLighting;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(id)arg2;
- (bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (void)_jitterRedisplay;
- (void)setJitteringEnabled:(bool)arg1;
- (bool)isJitteringEnabled;
- (void)setSceneTime:(double)arg1;
- (bool)prepareObject:(id)arg1 shouldAbortBlock:(id)arg2;
- (void)setPointOfView:(id)arg1;
- (double)sceneTime;
- (id)pointOfView;
- (id)eaglContext;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 options:(id)arg3;
- (void)setLoops:(bool)arg1;
- (bool)loops;
- (id)technique;
- (void)setTechnique:(id)arg1;
- (void)setScene:(id)arg1;
- (void*)__CFObject;
- (id)_authoringEnvironment;
- (bool)_canJitter;
- (id)scene;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (id)renderer;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)play:(id)arg1;
- (bool)isPlaying;
- (void*)context;
- (void)setBackgroundColor:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)pause:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)displayLayer:(id)arg1;
- (id)backgroundColor;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)willMoveToWindow:(id)arg1;
- (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)snapshot;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setContentScaleFactor:(double)arg1;
- (void)didMoveToWindow;
- (void)stop:(id)arg1;

@end
