
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_texture.c"
#include "rna_texture_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

EnumPropertyRNA rna_Texture_type;
BoolPropertyRNA rna_Texture_use_clamp;
BoolPropertyRNA rna_Texture_use_color_ramp;
PointerPropertyRNA rna_Texture_color_ramp;
FloatPropertyRNA rna_Texture_intensity;
FloatPropertyRNA rna_Texture_contrast;
FloatPropertyRNA rna_Texture_saturation;
FloatPropertyRNA rna_Texture_factor_red;
FloatPropertyRNA rna_Texture_factor_green;
FloatPropertyRNA rna_Texture_factor_blue;
BoolPropertyRNA rna_Texture_use_preview_alpha;
BoolPropertyRNA rna_Texture_use_nodes;
PointerPropertyRNA rna_Texture_node_tree;
PointerPropertyRNA rna_Texture_animation_data;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

FloatPropertyRNA rna_CloudsTexture_noise_scale;
IntPropertyRNA rna_CloudsTexture_noise_depth;
EnumPropertyRNA rna_CloudsTexture_noise_basis;
EnumPropertyRNA rna_CloudsTexture_noise_type;
EnumPropertyRNA rna_CloudsTexture_cloud_type;
FloatPropertyRNA rna_CloudsTexture_nabla;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

FloatPropertyRNA rna_WoodTexture_noise_scale;
FloatPropertyRNA rna_WoodTexture_turbulence;
EnumPropertyRNA rna_WoodTexture_noise_basis;
EnumPropertyRNA rna_WoodTexture_noise_type;
EnumPropertyRNA rna_WoodTexture_wood_type;
EnumPropertyRNA rna_WoodTexture_noise_basis_2;
FloatPropertyRNA rna_WoodTexture_nabla;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

FloatPropertyRNA rna_MarbleTexture_noise_scale;
FloatPropertyRNA rna_MarbleTexture_turbulence;
IntPropertyRNA rna_MarbleTexture_noise_depth;
EnumPropertyRNA rna_MarbleTexture_noise_type;
EnumPropertyRNA rna_MarbleTexture_marble_type;
EnumPropertyRNA rna_MarbleTexture_noise_basis;
EnumPropertyRNA rna_MarbleTexture_noise_basis_2;
FloatPropertyRNA rna_MarbleTexture_nabla;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

FloatPropertyRNA rna_MagicTexture_turbulence;
IntPropertyRNA rna_MagicTexture_noise_depth;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

EnumPropertyRNA rna_BlendTexture_progression;
EnumPropertyRNA rna_BlendTexture_use_flip_axis;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

FloatPropertyRNA rna_StucciTexture_turbulence;
EnumPropertyRNA rna_StucciTexture_noise_basis;
FloatPropertyRNA rna_StucciTexture_noise_scale;
EnumPropertyRNA rna_StucciTexture_noise_type;
EnumPropertyRNA rna_StucciTexture_stucci_type;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

BoolPropertyRNA rna_ImageTexture_use_interpolation;
BoolPropertyRNA rna_ImageTexture_use_flip_axis;
BoolPropertyRNA rna_ImageTexture_use_alpha;
BoolPropertyRNA rna_ImageTexture_use_calculate_alpha;
BoolPropertyRNA rna_ImageTexture_invert_alpha;
BoolPropertyRNA rna_ImageTexture_use_mipmap;
BoolPropertyRNA rna_ImageTexture_use_mipmap_gauss;
EnumPropertyRNA rna_ImageTexture_filter_type;
IntPropertyRNA rna_ImageTexture_filter_probes;
IntPropertyRNA rna_ImageTexture_filter_eccentricity;
BoolPropertyRNA rna_ImageTexture_use_filter_size_min;
FloatPropertyRNA rna_ImageTexture_filter_size;
EnumPropertyRNA rna_ImageTexture_extension;
IntPropertyRNA rna_ImageTexture_repeat_x;
IntPropertyRNA rna_ImageTexture_repeat_y;
BoolPropertyRNA rna_ImageTexture_use_mirror_x;
BoolPropertyRNA rna_ImageTexture_use_mirror_y;
BoolPropertyRNA rna_ImageTexture_use_checker_odd;
BoolPropertyRNA rna_ImageTexture_use_checker_even;
FloatPropertyRNA rna_ImageTexture_checker_distance;
FloatPropertyRNA rna_ImageTexture_crop_min_x;
FloatPropertyRNA rna_ImageTexture_crop_min_y;
FloatPropertyRNA rna_ImageTexture_crop_max_x;
FloatPropertyRNA rna_ImageTexture_crop_max_y;
PointerPropertyRNA rna_ImageTexture_image;
PointerPropertyRNA rna_ImageTexture_image_user;
BoolPropertyRNA rna_ImageTexture_use_normal_map;
BoolPropertyRNA rna_ImageTexture_use_derivative_map;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

PointerPropertyRNA rna_EnvironmentMapTexture_image;
PointerPropertyRNA rna_EnvironmentMapTexture_image_user;
BoolPropertyRNA rna_EnvironmentMapTexture_use_mipmap;
BoolPropertyRNA rna_EnvironmentMapTexture_use_mipmap_gauss;
EnumPropertyRNA rna_EnvironmentMapTexture_filter_type;
IntPropertyRNA rna_EnvironmentMapTexture_filter_probes;
IntPropertyRNA rna_EnvironmentMapTexture_filter_eccentricity;
BoolPropertyRNA rna_EnvironmentMapTexture_use_filter_size_min;
FloatPropertyRNA rna_EnvironmentMapTexture_filter_size;
PointerPropertyRNA rna_EnvironmentMapTexture_environment_map;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

EnumPropertyRNA rna_MusgraveTexture_musgrave_type;
FloatPropertyRNA rna_MusgraveTexture_dimension_max;
FloatPropertyRNA rna_MusgraveTexture_lacunarity;
FloatPropertyRNA rna_MusgraveTexture_octaves;
FloatPropertyRNA rna_MusgraveTexture_offset;
FloatPropertyRNA rna_MusgraveTexture_gain;
FloatPropertyRNA rna_MusgraveTexture_noise_intensity;
FloatPropertyRNA rna_MusgraveTexture_noise_scale;
EnumPropertyRNA rna_MusgraveTexture_noise_basis;
FloatPropertyRNA rna_MusgraveTexture_nabla;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

FloatPropertyRNA rna_VoronoiTexture_weight_1;
FloatPropertyRNA rna_VoronoiTexture_weight_2;
FloatPropertyRNA rna_VoronoiTexture_weight_3;
FloatPropertyRNA rna_VoronoiTexture_weight_4;
FloatPropertyRNA rna_VoronoiTexture_minkovsky_exponent;
EnumPropertyRNA rna_VoronoiTexture_distance_metric;
EnumPropertyRNA rna_VoronoiTexture_color_mode;
FloatPropertyRNA rna_VoronoiTexture_noise_intensity;
FloatPropertyRNA rna_VoronoiTexture_noise_scale;
FloatPropertyRNA rna_VoronoiTexture_nabla;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

FloatPropertyRNA rna_DistortedNoiseTexture_distortion;
FloatPropertyRNA rna_DistortedNoiseTexture_noise_scale;
EnumPropertyRNA rna_DistortedNoiseTexture_noise_basis;
EnumPropertyRNA rna_DistortedNoiseTexture_noise_distortion;
FloatPropertyRNA rna_DistortedNoiseTexture_nabla;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_PointDensity_rna_properties;
PointerPropertyRNA rna_PointDensity_rna_type;
EnumPropertyRNA rna_PointDensity_point_source;
PointerPropertyRNA rna_PointDensity_object;
PointerPropertyRNA rna_PointDensity_particle_system;
EnumPropertyRNA rna_PointDensity_particle_cache_space;
EnumPropertyRNA rna_PointDensity_vertex_cache_space;
FloatPropertyRNA rna_PointDensity_radius;
EnumPropertyRNA rna_PointDensity_falloff;
FloatPropertyRNA rna_PointDensity_falloff_soft;
EnumPropertyRNA rna_PointDensity_color_source;
FloatPropertyRNA rna_PointDensity_speed_scale;
FloatPropertyRNA rna_PointDensity_falloff_speed_scale;
PointerPropertyRNA rna_PointDensity_color_ramp;
PointerPropertyRNA rna_PointDensity_falloff_curve;
BoolPropertyRNA rna_PointDensity_use_falloff_curve;
BoolPropertyRNA rna_PointDensity_use_turbulence;
FloatPropertyRNA rna_PointDensity_turbulence_scale;
FloatPropertyRNA rna_PointDensity_turbulence_strength;
IntPropertyRNA rna_PointDensity_turbulence_depth;
EnumPropertyRNA rna_PointDensity_turbulence_influence;
EnumPropertyRNA rna_PointDensity_noise_basis;


extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

PointerPropertyRNA rna_PointDensityTexture_point_density;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_VoxelData_rna_properties;
PointerPropertyRNA rna_VoxelData_rna_type;
EnumPropertyRNA rna_VoxelData_interpolation;
EnumPropertyRNA rna_VoxelData_smoke_data_type;
EnumPropertyRNA rna_VoxelData_extension;
FloatPropertyRNA rna_VoxelData_intensity;
EnumPropertyRNA rna_VoxelData_file_format;
StringPropertyRNA rna_VoxelData_filepath;
IntPropertyRNA rna_VoxelData_resolution;
BoolPropertyRNA rna_VoxelData_use_still_frame;
IntPropertyRNA rna_VoxelData_still_frame;
PointerPropertyRNA rna_VoxelData_domain_object;


extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

PointerPropertyRNA rna_VoxelDataTexture_voxel_data;
PointerPropertyRNA rna_VoxelDataTexture_image;
PointerPropertyRNA rna_VoxelDataTexture_image_user;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_OceanTexData_rna_properties;
PointerPropertyRNA rna_OceanTexData_rna_type;
EnumPropertyRNA rna_OceanTexData_output;
PointerPropertyRNA rna_OceanTexData_ocean_object;


extern EnumPropertyRNA rna_Texture_type;
extern BoolPropertyRNA rna_Texture_use_clamp;
extern BoolPropertyRNA rna_Texture_use_color_ramp;
extern PointerPropertyRNA rna_Texture_color_ramp;
extern FloatPropertyRNA rna_Texture_intensity;
extern FloatPropertyRNA rna_Texture_contrast;
extern FloatPropertyRNA rna_Texture_saturation;
extern FloatPropertyRNA rna_Texture_factor_red;
extern FloatPropertyRNA rna_Texture_factor_green;
extern FloatPropertyRNA rna_Texture_factor_blue;
extern BoolPropertyRNA rna_Texture_use_preview_alpha;
extern BoolPropertyRNA rna_Texture_use_nodes;
extern PointerPropertyRNA rna_Texture_node_tree;
extern PointerPropertyRNA rna_Texture_animation_data;

extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

PointerPropertyRNA rna_OceanTexture_ocean;

extern FunctionRNA rna_Texture_evaluate_func;
extern FloatPropertyRNA rna_Texture_evaluate_value;
extern FloatPropertyRNA rna_Texture_evaluate_result;


extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_TextureSlot_rna_properties;
PointerPropertyRNA rna_TextureSlot_rna_type;
PointerPropertyRNA rna_TextureSlot_texture;
StringPropertyRNA rna_TextureSlot_name;
FloatPropertyRNA rna_TextureSlot_offset;
FloatPropertyRNA rna_TextureSlot_scale;
FloatPropertyRNA rna_TextureSlot_color;
EnumPropertyRNA rna_TextureSlot_blend_type;
BoolPropertyRNA rna_TextureSlot_use_stencil;
BoolPropertyRNA rna_TextureSlot_invert;
BoolPropertyRNA rna_TextureSlot_use_rgb_to_intensity;
FloatPropertyRNA rna_TextureSlot_default_value;
EnumPropertyRNA rna_TextureSlot_output_node;


CollectionPropertyRNA rna_EnvironmentMap_rna_properties;
PointerPropertyRNA rna_EnvironmentMap_rna_type;
EnumPropertyRNA rna_EnvironmentMap_source;
PointerPropertyRNA rna_EnvironmentMap_viewpoint_object;
EnumPropertyRNA rna_EnvironmentMap_mapping;
FloatPropertyRNA rna_EnvironmentMap_clip_start;
FloatPropertyRNA rna_EnvironmentMap_clip_end;
FloatPropertyRNA rna_EnvironmentMap_zoom;
BoolPropertyRNA rna_EnvironmentMap_layers_ignore;
IntPropertyRNA rna_EnvironmentMap_resolution;
IntPropertyRNA rna_EnvironmentMap_depth;
BoolPropertyRNA rna_EnvironmentMap_is_valid;

extern FunctionRNA rna_EnvironmentMap_clear_func;
extern FunctionRNA rna_EnvironmentMap_save_func;
extern StringPropertyRNA rna_EnvironmentMap_save_filepath;
extern PointerPropertyRNA rna_EnvironmentMap_save_scene;
extern FloatPropertyRNA rna_EnvironmentMap_save_layout;



CollectionPropertyRNA rna_TexMapping_rna_properties;
PointerPropertyRNA rna_TexMapping_rna_type;
EnumPropertyRNA rna_TexMapping_vector_type;
FloatPropertyRNA rna_TexMapping_translation;
FloatPropertyRNA rna_TexMapping_rotation;
FloatPropertyRNA rna_TexMapping_scale;
FloatPropertyRNA rna_TexMapping_min;
FloatPropertyRNA rna_TexMapping_max;
BoolPropertyRNA rna_TexMapping_use_min;
BoolPropertyRNA rna_TexMapping_use_max;
EnumPropertyRNA rna_TexMapping_mapping_x;
EnumPropertyRNA rna_TexMapping_mapping_y;
EnumPropertyRNA rna_TexMapping_mapping_z;
EnumPropertyRNA rna_TexMapping_mapping;


CollectionPropertyRNA rna_ColorMapping_rna_properties;
PointerPropertyRNA rna_ColorMapping_rna_type;
BoolPropertyRNA rna_ColorMapping_use_color_ramp;
PointerPropertyRNA rna_ColorMapping_color_ramp;
FloatPropertyRNA rna_ColorMapping_brightness;
FloatPropertyRNA rna_ColorMapping_contrast;
FloatPropertyRNA rna_ColorMapping_saturation;
EnumPropertyRNA rna_ColorMapping_blend_type;
FloatPropertyRNA rna_ColorMapping_blend_color;
FloatPropertyRNA rna_ColorMapping_blend_factor;

int Texture_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->type);
}

void Texture_type_set(PointerRNA *ptr, int value)
{
	rna_Texture_type_set(ptr, value);
}

int Texture_use_clamp_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return !(((data->flag) & 1024) != 0);
}

void Texture_use_clamp_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (!value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int Texture_use_color_ramp_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Texture_use_color_ramp_set(PointerRNA *ptr, int value)
{
	rna_Texture_use_color_ramp_set(ptr, value);
}

PointerRNA Texture_color_ramp_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->coba);
}

float Texture_intensity_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->bright);
}

void Texture_intensity_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->bright = CLAMPIS(value, 0.0f, 2.0f);
}

float Texture_contrast_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->contrast);
}

void Texture_contrast_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->contrast = CLAMPIS(value, 0.0f, 5.0f);
}

float Texture_saturation_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->saturation);
}

void Texture_saturation_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->saturation = CLAMPIS(value, 0.0f, 2.0f);
}

float Texture_factor_red_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->rfac);
}

void Texture_factor_red_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->rfac = CLAMPIS(value, 0.0f, 2.0f);
}

float Texture_factor_green_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->gfac);
}

void Texture_factor_green_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->gfac = CLAMPIS(value, 0.0f, 2.0f);
}

float Texture_factor_blue_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->bfac);
}

void Texture_factor_blue_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->bfac = CLAMPIS(value, 0.0f, 2.0f);
}

int Texture_use_preview_alpha_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Texture_use_preview_alpha_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int Texture_use_nodes_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->use_nodes) & 1) != 0);
}

void Texture_use_nodes_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->use_nodes |= 1;
	else data->use_nodes &= ~1;
}

PointerRNA Texture_node_tree_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

PointerRNA Texture_animation_data_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

float CloudsTexture_noise_scale_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->noisesize);
}

void CloudsTexture_noise_scale_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisesize = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int CloudsTexture_noise_depth_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisedepth);
}

void CloudsTexture_noise_depth_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisedepth = CLAMPIS(value, 0, 30);
}

int CloudsTexture_noise_basis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis);
}

void CloudsTexture_noise_basis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis = value;
}

int CloudsTexture_noise_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisetype);
}

void CloudsTexture_noise_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisetype = value;
}

int CloudsTexture_cloud_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->stype);
}

void CloudsTexture_cloud_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->stype = value;
}

float CloudsTexture_nabla_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->nabla);
}

void CloudsTexture_nabla_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->nabla = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
}

float WoodTexture_noise_scale_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->noisesize);
}

void WoodTexture_noise_scale_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisesize = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

float WoodTexture_turbulence_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->turbul);
}

void WoodTexture_turbulence_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->turbul = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int WoodTexture_noise_basis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis);
}

void WoodTexture_noise_basis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis = value;
}

int WoodTexture_noise_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisetype);
}

void WoodTexture_noise_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisetype = value;
}

int WoodTexture_wood_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->stype);
}

void WoodTexture_wood_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->stype = value;
}

int WoodTexture_noise_basis_2_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis2);
}

void WoodTexture_noise_basis_2_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis2 = value;
}

float WoodTexture_nabla_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->nabla);
}

void WoodTexture_nabla_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->nabla = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
}

float MarbleTexture_noise_scale_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->noisesize);
}

void MarbleTexture_noise_scale_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisesize = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

float MarbleTexture_turbulence_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->turbul);
}

void MarbleTexture_turbulence_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->turbul = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int MarbleTexture_noise_depth_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisedepth);
}

void MarbleTexture_noise_depth_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisedepth = CLAMPIS(value, 0, 30);
}

int MarbleTexture_noise_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisetype);
}

void MarbleTexture_noise_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisetype = value;
}

int MarbleTexture_marble_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->stype);
}

void MarbleTexture_marble_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->stype = value;
}

int MarbleTexture_noise_basis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis);
}

void MarbleTexture_noise_basis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis = value;
}

int MarbleTexture_noise_basis_2_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis2);
}

void MarbleTexture_noise_basis_2_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis2 = value;
}

float MarbleTexture_nabla_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->nabla);
}

void MarbleTexture_nabla_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->nabla = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
}

float MagicTexture_turbulence_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->turbul);
}

void MagicTexture_turbulence_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->turbul = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int MagicTexture_noise_depth_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisedepth);
}

void MagicTexture_noise_depth_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisedepth = CLAMPIS(value, 0, 30);
}

int BlendTexture_progression_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->stype);
}

void BlendTexture_progression_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->stype = value;
}

int BlendTexture_use_flip_axis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return ((data->flag) & 2);
}

void BlendTexture_use_flip_axis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->flag &= ~2;
	data->flag |= value;
}

float StucciTexture_turbulence_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->turbul);
}

void StucciTexture_turbulence_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->turbul = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int StucciTexture_noise_basis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis);
}

void StucciTexture_noise_basis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis = value;
}

float StucciTexture_noise_scale_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->noisesize);
}

void StucciTexture_noise_scale_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisesize = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int StucciTexture_noise_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisetype);
}

void StucciTexture_noise_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisetype = value;
}

int StucciTexture_stucci_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->stype);
}

void StucciTexture_stucci_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->stype = value;
}

int ImageTexture_use_interpolation_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 1) != 0);
}

void ImageTexture_use_interpolation_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 1;
	else data->imaflag &= ~1;
}

int ImageTexture_use_flip_axis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 16) != 0);
}

void ImageTexture_use_flip_axis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 16;
	else data->imaflag &= ~16;
}

int ImageTexture_use_alpha_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 2) != 0);
}

void ImageTexture_use_alpha_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 2;
	else data->imaflag &= ~2;
}

int ImageTexture_use_calculate_alpha_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 32) != 0);
}

void ImageTexture_use_calculate_alpha_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 32;
	else data->imaflag &= ~32;
}

int ImageTexture_invert_alpha_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ImageTexture_invert_alpha_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ImageTexture_use_mipmap_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 4) != 0);
}

void ImageTexture_use_mipmap_set(PointerRNA *ptr, int value)
{
	rna_ImageTexture_mipmap_set(ptr, value);
}

int ImageTexture_use_mipmap_gauss_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 4096) != 0);
}

void ImageTexture_use_mipmap_gauss_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 4096;
	else data->imaflag &= ~4096;
}

int ImageTexture_filter_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->texfilter);
}

void ImageTexture_filter_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->texfilter = value;
}

int ImageTexture_filter_probes_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->afmax);
}

void ImageTexture_filter_probes_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->afmax = CLAMPIS(value, 1, 256);
}

int ImageTexture_filter_eccentricity_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->afmax);
}

void ImageTexture_filter_eccentricity_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->afmax = CLAMPIS(value, 1, 256);
}

int ImageTexture_use_filter_size_min_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 8192) != 0);
}

void ImageTexture_use_filter_size_min_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 8192;
	else data->imaflag &= ~8192;
}

float ImageTexture_filter_size_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->filtersize);
}

void ImageTexture_filter_size_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->filtersize = CLAMPIS(value, 0.1000000015f, 50.0f);
}

int ImageTexture_extension_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->extend);
}

void ImageTexture_extension_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->extend = value;
}

int ImageTexture_repeat_x_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->xrepeat);
}

void ImageTexture_repeat_x_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->xrepeat = CLAMPIS(value, 1, 512);
}

int ImageTexture_repeat_y_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->yrepeat);
}

void ImageTexture_repeat_y_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->yrepeat = CLAMPIS(value, 1, 512);
}

int ImageTexture_use_mirror_x_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ImageTexture_use_mirror_x_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int ImageTexture_use_mirror_y_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void ImageTexture_use_mirror_y_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int ImageTexture_use_checker_odd_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ImageTexture_use_checker_odd_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ImageTexture_use_checker_even_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void ImageTexture_use_checker_even_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

float ImageTexture_checker_distance_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->checkerdist);
}

void ImageTexture_checker_distance_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->checkerdist = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float ImageTexture_crop_min_x_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->cropxmin);
}

void ImageTexture_crop_min_x_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->cropxmin = CLAMPIS(value, -10.0f, 10.0f);
}

float ImageTexture_crop_min_y_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->cropymin);
}

void ImageTexture_crop_min_y_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->cropymin = CLAMPIS(value, -10.0f, 10.0f);
}

float ImageTexture_crop_max_x_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->cropxmax);
}

void ImageTexture_crop_max_x_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->cropxmax = CLAMPIS(value, -10.0f, 10.0f);
}

float ImageTexture_crop_max_y_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->cropymax);
}

void ImageTexture_crop_max_y_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->cropymax = CLAMPIS(value, -10.0f, 10.0f);
}

PointerRNA ImageTexture_image_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

void ImageTexture_image_set(PointerRNA *ptr, PointerRNA value)
{
	Tex *data = (Tex *)(ptr->data);

	if (data->ima)
		id_us_min((ID *)data->ima);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->ima = value.data;
}

PointerRNA ImageTexture_image_user_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, &data->iuser);
}

int ImageTexture_use_normal_map_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 2048) != 0);
}

void ImageTexture_use_normal_map_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 2048;
	else data->imaflag &= ~2048;
}

int ImageTexture_use_derivative_map_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 16384) != 0);
}

void ImageTexture_use_derivative_map_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 16384;
	else data->imaflag &= ~16384;
}

PointerRNA EnvironmentMapTexture_image_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

void EnvironmentMapTexture_image_set(PointerRNA *ptr, PointerRNA value)
{
	Tex *data = (Tex *)(ptr->data);

	if (data->ima)
		id_us_min((ID *)data->ima);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->ima = value.data;
}

PointerRNA EnvironmentMapTexture_image_user_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, &data->iuser);
}

int EnvironmentMapTexture_use_mipmap_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 4) != 0);
}

void EnvironmentMapTexture_use_mipmap_set(PointerRNA *ptr, int value)
{
	rna_ImageTexture_mipmap_set(ptr, value);
}

int EnvironmentMapTexture_use_mipmap_gauss_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 4096) != 0);
}

void EnvironmentMapTexture_use_mipmap_gauss_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 4096;
	else data->imaflag &= ~4096;
}

int EnvironmentMapTexture_filter_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->texfilter);
}

void EnvironmentMapTexture_filter_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->texfilter = value;
}

int EnvironmentMapTexture_filter_probes_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->afmax);
}

void EnvironmentMapTexture_filter_probes_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->afmax = CLAMPIS(value, 1, 256);
}

int EnvironmentMapTexture_filter_eccentricity_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->afmax);
}

void EnvironmentMapTexture_filter_eccentricity_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->afmax = CLAMPIS(value, 1, 256);
}

int EnvironmentMapTexture_use_filter_size_min_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (((data->imaflag) & 8192) != 0);
}

void EnvironmentMapTexture_use_filter_size_min_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	if (value) data->imaflag |= 8192;
	else data->imaflag &= ~8192;
}

float EnvironmentMapTexture_filter_size_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->filtersize);
}

void EnvironmentMapTexture_filter_size_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->filtersize = CLAMPIS(value, 0.1000000015f, 50.0f);
}

PointerRNA EnvironmentMapTexture_environment_map_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EnvironmentMap, data->env);
}

int MusgraveTexture_musgrave_type_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->stype);
}

void MusgraveTexture_musgrave_type_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->stype = value;
}

float MusgraveTexture_dimension_max_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->mg_H);
}

void MusgraveTexture_dimension_max_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->mg_H = CLAMPIS(value, 0.0001000000f, 2.0f);
}

float MusgraveTexture_lacunarity_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->mg_lacunarity);
}

void MusgraveTexture_lacunarity_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->mg_lacunarity = CLAMPIS(value, 0.0f, 6.0f);
}

float MusgraveTexture_octaves_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->mg_octaves);
}

void MusgraveTexture_octaves_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->mg_octaves = CLAMPIS(value, 0.0f, 8.0f);
}

float MusgraveTexture_offset_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->mg_offset);
}

void MusgraveTexture_offset_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->mg_offset = CLAMPIS(value, 0.0f, 6.0f);
}

float MusgraveTexture_gain_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->mg_gain);
}

void MusgraveTexture_gain_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->mg_gain = CLAMPIS(value, 0.0f, 6.0f);
}

float MusgraveTexture_noise_intensity_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->ns_outscale);
}

void MusgraveTexture_noise_intensity_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->ns_outscale = CLAMPIS(value, 0.0f, 10.0f);
}

float MusgraveTexture_noise_scale_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->noisesize);
}

void MusgraveTexture_noise_scale_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisesize = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int MusgraveTexture_noise_basis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis);
}

void MusgraveTexture_noise_basis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis = value;
}

float MusgraveTexture_nabla_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->nabla);
}

void MusgraveTexture_nabla_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->nabla = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
}

float VoronoiTexture_weight_1_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->vn_w1);
}

void VoronoiTexture_weight_1_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->vn_w1 = CLAMPIS(value, -2.0f, 2.0f);
}

float VoronoiTexture_weight_2_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->vn_w2);
}

void VoronoiTexture_weight_2_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->vn_w2 = CLAMPIS(value, -2.0f, 2.0f);
}

float VoronoiTexture_weight_3_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->vn_w3);
}

void VoronoiTexture_weight_3_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->vn_w3 = CLAMPIS(value, -2.0f, 2.0f);
}

float VoronoiTexture_weight_4_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->vn_w4);
}

void VoronoiTexture_weight_4_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->vn_w4 = CLAMPIS(value, -2.0f, 2.0f);
}

float VoronoiTexture_minkovsky_exponent_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->vn_mexp);
}

void VoronoiTexture_minkovsky_exponent_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->vn_mexp = CLAMPIS(value, 0.0099999998f, 10.0f);
}

int VoronoiTexture_distance_metric_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->vn_distm);
}

void VoronoiTexture_distance_metric_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->vn_distm = value;
}

int VoronoiTexture_color_mode_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->vn_coltype);
}

void VoronoiTexture_color_mode_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->vn_coltype = value;
}

float VoronoiTexture_noise_intensity_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->ns_outscale);
}

void VoronoiTexture_noise_intensity_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->ns_outscale = CLAMPIS(value, 0.0099999998f, 10.0f);
}

float VoronoiTexture_noise_scale_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->noisesize);
}

void VoronoiTexture_noise_scale_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisesize = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

float VoronoiTexture_nabla_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->nabla);
}

void VoronoiTexture_nabla_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->nabla = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
}

float DistortedNoiseTexture_distortion_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->dist_amount);
}

void DistortedNoiseTexture_distortion_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->dist_amount = CLAMPIS(value, 0.0f, 10.0f);
}

float DistortedNoiseTexture_noise_scale_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->noisesize);
}

void DistortedNoiseTexture_noise_scale_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisesize = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

int DistortedNoiseTexture_noise_basis_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis2);
}

void DistortedNoiseTexture_noise_basis_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis2 = value;
}

int DistortedNoiseTexture_noise_distortion_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (int)(data->noisebasis);
}

void DistortedNoiseTexture_noise_distortion_set(PointerRNA *ptr, int value)
{
	Tex *data = (Tex *)(ptr->data);
	data->noisebasis = value;
}

float DistortedNoiseTexture_nabla_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return (float)(data->nabla);
}

void DistortedNoiseTexture_nabla_set(PointerRNA *ptr, float value)
{
	Tex *data = (Tex *)(ptr->data);
	data->nabla = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
}

static PointerRNA PointDensity_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PointDensity_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PointDensity_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = PointDensity_rna_properties_get(iter);
}

void PointDensity_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = PointDensity_rna_properties_get(iter);
}

void PointDensity_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PointDensity_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PointDensity_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int PointDensity_point_source_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->source);
}

void PointDensity_point_source_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->source = value;
}

PointerRNA PointDensity_object_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void PointDensity_object_set(PointerRNA *ptr, PointerRNA value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

PointerRNA PointDensity_particle_system_get(PointerRNA *ptr)
{
	return rna_PointDensity_psys_get(ptr);
}

void PointDensity_particle_system_set(PointerRNA *ptr, PointerRNA value)
{
	rna_PointDensity_psys_set(ptr, value);
}

int PointDensity_particle_cache_space_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->psys_cache_space);
}

void PointDensity_particle_cache_space_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->psys_cache_space = value;
}

int PointDensity_vertex_cache_space_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->ob_cache_space);
}

void PointDensity_vertex_cache_space_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->ob_cache_space = value;
}

float PointDensity_radius_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (float)(data->radius);
}

void PointDensity_radius_set(PointerRNA *ptr, float value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->radius = CLAMPIS(value, 0.0010000000f, FLT_MAX);
}

int PointDensity_falloff_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->falloff_type);
}

void PointDensity_falloff_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->falloff_type = value;
}

float PointDensity_falloff_soft_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (float)(data->falloff_softness);
}

void PointDensity_falloff_soft_set(PointerRNA *ptr, float value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->falloff_softness = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

int PointDensity_color_source_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->color_source);
}

void PointDensity_color_source_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->color_source = value;
}

float PointDensity_speed_scale_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (float)(data->speed_scale);
}

void PointDensity_speed_scale_set(PointerRNA *ptr, float value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->speed_scale = CLAMPIS(value, 0.0010000000f, 100.0f);
}

float PointDensity_falloff_speed_scale_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (float)(data->falloff_speed_scale);
}

void PointDensity_falloff_speed_scale_set(PointerRNA *ptr, float value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->falloff_speed_scale = CLAMPIS(value, 0.0010000000f, 100.0f);
}

PointerRNA PointDensity_color_ramp_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->coba);
}

PointerRNA PointDensity_falloff_curve_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->falloff_curve);
}

int PointDensity_use_falloff_curve_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void PointDensity_use_falloff_curve_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int PointDensity_use_turbulence_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void PointDensity_use_turbulence_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

float PointDensity_turbulence_scale_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (float)(data->noise_size);
}

void PointDensity_turbulence_scale_set(PointerRNA *ptr, float value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->noise_size = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

float PointDensity_turbulence_strength_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (float)(data->noise_fac);
}

void PointDensity_turbulence_strength_set(PointerRNA *ptr, float value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->noise_fac = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

int PointDensity_turbulence_depth_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->noise_depth);
}

void PointDensity_turbulence_depth_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->noise_depth = CLAMPIS(value, 0, 30);
}

int PointDensity_turbulence_influence_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->noise_influence);
}

void PointDensity_turbulence_influence_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->noise_influence = value;
}

int PointDensity_noise_basis_get(PointerRNA *ptr)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	return (int)(data->noise_basis);
}

void PointDensity_noise_basis_set(PointerRNA *ptr, int value)
{
	PointDensity *data = (PointDensity *)(ptr->data);
	data->noise_basis = value;
}

PointerRNA PointDensityTexture_point_density_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PointDensity, data->pd);
}

static PointerRNA VoxelData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void VoxelData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_VoxelData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = VoxelData_rna_properties_get(iter);
}

void VoxelData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = VoxelData_rna_properties_get(iter);
}

void VoxelData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int VoxelData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VoxelData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int VoxelData_interpolation_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return (int)(data->interp_type);
}

void VoxelData_interpolation_set(PointerRNA *ptr, int value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	data->interp_type = value;
}

int VoxelData_smoke_data_type_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return (int)(data->smoked_type);
}

void VoxelData_smoke_data_type_set(PointerRNA *ptr, int value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	data->smoked_type = value;
}

int VoxelData_extension_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return (int)(data->extend);
}

void VoxelData_extension_set(PointerRNA *ptr, int value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	data->extend = value;
}

float VoxelData_intensity_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return (float)(data->int_multiplier);
}

void VoxelData_intensity_set(PointerRNA *ptr, float value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	data->int_multiplier = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

int VoxelData_file_format_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return (int)(data->file_format);
}

void VoxelData_file_format_set(PointerRNA *ptr, int value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	data->file_format = value;
}

void VoxelData_filepath_get(PointerRNA *ptr, char *value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	BLI_strncpy(value, data->source_path, 1024);
}

int VoxelData_filepath_length(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return strlen(data->source_path);
}

void VoxelData_filepath_set(PointerRNA *ptr, const char *value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	BLI_strncpy(data->source_path, value, 1024);
}

void VoxelData_resolution_get(PointerRNA *ptr, int values[3])
{
	VoxelData *data = (VoxelData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (int)(((int *)data->resol)[i]);
	}
}

void VoxelData_resolution_set(PointerRNA *ptr, const int values[3])
{
	VoxelData *data = (VoxelData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((int *)data->resol)[i] = CLAMPIS(values[i], 1, 100000);
	}
}

int VoxelData_use_still_frame_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void VoxelData_use_still_frame_set(PointerRNA *ptr, int value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int VoxelData_still_frame_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return (int)(data->still_frame);
}

void VoxelData_still_frame_set(PointerRNA *ptr, int value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	data->still_frame = CLAMPIS(value, -300000, 300000);
}

PointerRNA VoxelData_domain_object_get(PointerRNA *ptr)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void VoxelData_domain_object_set(PointerRNA *ptr, PointerRNA value)
{
	VoxelData *data = (VoxelData *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

PointerRNA VoxelDataTexture_voxel_data_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_VoxelData, data->vd);
}

PointerRNA VoxelDataTexture_image_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

void VoxelDataTexture_image_set(PointerRNA *ptr, PointerRNA value)
{
	Tex *data = (Tex *)(ptr->data);

	if (data->ima)
		id_us_min((ID *)data->ima);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->ima = value.data;
}

PointerRNA VoxelDataTexture_image_user_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, &data->iuser);
}

static PointerRNA OceanTexData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void OceanTexData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_OceanTexData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = OceanTexData_rna_properties_get(iter);
}

void OceanTexData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = OceanTexData_rna_properties_get(iter);
}

void OceanTexData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int OceanTexData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA OceanTexData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int OceanTexData_output_get(PointerRNA *ptr)
{
	OceanTex *data = (OceanTex *)(ptr->data);
	return (int)(data->output);
}

void OceanTexData_output_set(PointerRNA *ptr, int value)
{
	OceanTex *data = (OceanTex *)(ptr->data);
	data->output = value;
}

PointerRNA OceanTexData_ocean_object_get(PointerRNA *ptr)
{
	OceanTex *data = (OceanTex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void OceanTexData_ocean_object_set(PointerRNA *ptr, PointerRNA value)
{
	OceanTex *data = (OceanTex *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

PointerRNA OceanTexture_ocean_get(PointerRNA *ptr)
{
	Tex *data = (Tex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_OceanTexData, data->ot);
}

static PointerRNA TextureSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TextureSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_TextureSlot_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = TextureSlot_rna_properties_get(iter);
}

void TextureSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = TextureSlot_rna_properties_get(iter);
}

void TextureSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int TextureSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TextureSlot_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA TextureSlot_texture_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->tex);
}

void TextureSlot_texture_set(PointerRNA *ptr, PointerRNA value)
{
	MTex *data = (MTex *)(ptr->data);

	if (data->tex)
		id_us_min((ID *)data->tex);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->tex = value.data;
}

void TextureSlot_name_get(PointerRNA *ptr, char *value)
{
	rna_TextureSlot_name_get(ptr, value);
}

int TextureSlot_name_length(PointerRNA *ptr)
{
	return rna_TextureSlot_name_length(ptr);
}

void TextureSlot_offset_get(PointerRNA *ptr, float values[3])
{
	MTex *data = (MTex *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->ofs)[i]);
	}
}

void TextureSlot_offset_set(PointerRNA *ptr, const float values[3])
{
	MTex *data = (MTex *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->ofs)[i] = values[i];
	}
}

void TextureSlot_scale_get(PointerRNA *ptr, float values[3])
{
	MTex *data = (MTex *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->size)[i]);
	}
}

void TextureSlot_scale_set(PointerRNA *ptr, const float values[3])
{
	MTex *data = (MTex *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->size)[i] = values[i];
	}
}

void TextureSlot_color_get(PointerRNA *ptr, float values[3])
{
	MTex *data = (MTex *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->r)[i]);
	}
}

void TextureSlot_color_set(PointerRNA *ptr, const float values[3])
{
	MTex *data = (MTex *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int TextureSlot_blend_type_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->blendtype);
}

void TextureSlot_blend_type_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->blendtype = value;
}

int TextureSlot_use_stencil_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->texflag) & 2) != 0);
}

void TextureSlot_use_stencil_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->texflag |= 2;
	else data->texflag &= ~2;
}

int TextureSlot_invert_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->texflag) & 4) != 0);
}

void TextureSlot_invert_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->texflag |= 4;
	else data->texflag &= ~4;
}

int TextureSlot_use_rgb_to_intensity_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->texflag) & 1) != 0);
}

void TextureSlot_use_rgb_to_intensity_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->texflag |= 1;
	else data->texflag &= ~1;
}

float TextureSlot_default_value_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->def_var);
}

void TextureSlot_default_value_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->def_var = value;
}

int TextureSlot_output_node_get(PointerRNA *ptr)
{
	return rna_TextureSlot_output_node_get(ptr);
}

void TextureSlot_output_node_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->which_output = value;
}

static PointerRNA EnvironmentMap_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void EnvironmentMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_EnvironmentMap_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = EnvironmentMap_rna_properties_get(iter);
}

void EnvironmentMap_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = EnvironmentMap_rna_properties_get(iter);
}

void EnvironmentMap_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int EnvironmentMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA EnvironmentMap_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int EnvironmentMap_source_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (int)(data->stype);
}

void EnvironmentMap_source_set(PointerRNA *ptr, int value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	data->stype = value;
}

PointerRNA EnvironmentMap_viewpoint_object_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void EnvironmentMap_viewpoint_object_set(PointerRNA *ptr, PointerRNA value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

int EnvironmentMap_mapping_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (int)(data->type);
}

void EnvironmentMap_mapping_set(PointerRNA *ptr, int value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	data->type = value;
}

float EnvironmentMap_clip_start_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (float)(data->clipsta);
}

void EnvironmentMap_clip_start_set(PointerRNA *ptr, float value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	data->clipsta = CLAMPIS(value, 0.0010000000f, FLT_MAX);
}

float EnvironmentMap_clip_end_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (float)(data->clipend);
}

void EnvironmentMap_clip_end_set(PointerRNA *ptr, float value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	data->clipend = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

float EnvironmentMap_zoom_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (float)(data->viewscale);
}

void EnvironmentMap_zoom_set(PointerRNA *ptr, float value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	data->viewscale = CLAMPIS(value, 0.1000000015f, 5.0f);
}

void EnvironmentMap_layers_ignore_get(PointerRNA *ptr, int values[20])
{
	EnvMap *data = (EnvMap *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->notlay & (1u << i)) != 0);
	}
}

void EnvironmentMap_layers_ignore_set(PointerRNA *ptr, const int values[20])
{
	EnvMap *data = (EnvMap *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		if (values[i]) data->notlay |= (1<<i);
		else data->notlay &= ~(1u << i);
	}
}

int EnvironmentMap_resolution_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (int)(data->cuberes);
}

void EnvironmentMap_resolution_set(PointerRNA *ptr, int value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	data->cuberes = CLAMPIS(value, 50, 4096);
}

int EnvironmentMap_depth_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (int)(data->depth);
}

void EnvironmentMap_depth_set(PointerRNA *ptr, int value)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	data->depth = CLAMPIS(value, 0, 5);
}

int EnvironmentMap_is_valid_get(PointerRNA *ptr)
{
	EnvMap *data = (EnvMap *)(ptr->data);
	return (((data->ok) & 2) != 0);
}

static PointerRNA TexMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TexMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_TexMapping_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = TexMapping_rna_properties_get(iter);
}

void TexMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = TexMapping_rna_properties_get(iter);
}

void TexMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int TexMapping_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TexMapping_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int TexMapping_vector_type_get(PointerRNA *ptr)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	return (int)(data->type);
}

void TexMapping_vector_type_set(PointerRNA *ptr, int value)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	data->type = value;
}

void TexMapping_translation_get(PointerRNA *ptr, float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->loc)[i]);
	}
}

void TexMapping_translation_set(PointerRNA *ptr, const float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->loc)[i] = values[i];
	}
}

void TexMapping_rotation_get(PointerRNA *ptr, float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->rot)[i]);
	}
}

void TexMapping_rotation_set(PointerRNA *ptr, const float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->rot)[i] = values[i];
	}
}

void TexMapping_scale_get(PointerRNA *ptr, float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->size)[i]);
	}
}

void TexMapping_scale_set(PointerRNA *ptr, const float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->size)[i] = values[i];
	}
}

void TexMapping_min_get(PointerRNA *ptr, float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->min)[i]);
	}
}

void TexMapping_min_set(PointerRNA *ptr, const float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->min)[i] = values[i];
	}
}

void TexMapping_max_get(PointerRNA *ptr, float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->max)[i]);
	}
}

void TexMapping_max_set(PointerRNA *ptr, const float values[3])
{
	TexMapping *data = (TexMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->max)[i] = values[i];
	}
}

int TexMapping_use_min_get(PointerRNA *ptr)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void TexMapping_use_min_set(PointerRNA *ptr, int value)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int TexMapping_use_max_get(PointerRNA *ptr)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void TexMapping_use_max_set(PointerRNA *ptr, int value)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int TexMapping_mapping_x_get(PointerRNA *ptr)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	return (int)(data->projx);
}

void TexMapping_mapping_x_set(PointerRNA *ptr, int value)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	data->projx = value;
}

int TexMapping_mapping_y_get(PointerRNA *ptr)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	return (int)(data->projy);
}

void TexMapping_mapping_y_set(PointerRNA *ptr, int value)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	data->projy = value;
}

int TexMapping_mapping_z_get(PointerRNA *ptr)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	return (int)(data->projz);
}

void TexMapping_mapping_z_set(PointerRNA *ptr, int value)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	data->projz = value;
}

int TexMapping_mapping_get(PointerRNA *ptr)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	return (int)(data->mapping);
}

void TexMapping_mapping_set(PointerRNA *ptr, int value)
{
	TexMapping *data = (TexMapping *)(ptr->data);
	data->mapping = value;
}

static PointerRNA ColorMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorMapping_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorMapping_rna_properties_get(iter);
}

void ColorMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorMapping_rna_properties_get(iter);
}

void ColorMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorMapping_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorMapping_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ColorMapping_use_color_ramp_get(PointerRNA *ptr)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ColorMapping_use_color_ramp_set(PointerRNA *ptr, int value)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA ColorMapping_color_ramp_get(PointerRNA *ptr)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, &data->coba);
}

float ColorMapping_brightness_get(PointerRNA *ptr)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	return (float)(data->bright);
}

void ColorMapping_brightness_set(PointerRNA *ptr, float value)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	data->bright = CLAMPIS(value, 0.0f, 2.0f);
}

float ColorMapping_contrast_get(PointerRNA *ptr)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	return (float)(data->contrast);
}

void ColorMapping_contrast_set(PointerRNA *ptr, float value)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	data->contrast = CLAMPIS(value, 0.0f, 5.0f);
}

float ColorMapping_saturation_get(PointerRNA *ptr)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	return (float)(data->saturation);
}

void ColorMapping_saturation_set(PointerRNA *ptr, float value)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	data->saturation = CLAMPIS(value, 0.0f, 2.0f);
}

int ColorMapping_blend_type_get(PointerRNA *ptr)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	return (int)(data->blend_type);
}

void ColorMapping_blend_type_set(PointerRNA *ptr, int value)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	data->blend_type = value;
}

void ColorMapping_blend_color_get(PointerRNA *ptr, float values[3])
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->blend_color)[i]);
	}
}

void ColorMapping_blend_color_set(PointerRNA *ptr, const float values[3])
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->blend_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float ColorMapping_blend_factor_get(PointerRNA *ptr)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	return (float)(data->blend_factor);
}

void ColorMapping_blend_factor_set(PointerRNA *ptr, float value)
{
	ColorMapping *data = (ColorMapping *)(ptr->data);
	data->blend_factor = value;
}

void Texture_evaluate(struct Tex *_self, float value[3], float result[4])
{
	texture_evaluate(_self, value, result);
}

void Texture_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Tex *_self;
	float *value;
	float *result;
	char *_data;
	
	_self = (struct Tex *)_ptr->data;
	_data = (char *)_parms->data;
	value = ((float *)_data);
	_data += 12;
	result = ((float *)_data);
	
	texture_evaluate(_self, value, result);
}

/* Repeated prototypes to detect errors */

void texture_evaluate(struct Tex *_self, float value[3], float result[4]);




















void EnvironmentMap_clear(struct EnvMap *_self, bContext *C)
{
	clear_envmap(_self, C);
}

void EnvironmentMap_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct EnvMap *_self;
	_self = (struct EnvMap *)_ptr->data;
	
	clear_envmap(_self, C);
}

void EnvironmentMap_save(struct EnvMap *_self, bContext *C, ReportList *reports, const char * filepath, struct Scene *scene, float layout[12])
{
	save_envmap(_self, C, reports, filepath, scene, layout);
}

void EnvironmentMap_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct EnvMap *_self;
	const char * filepath;
	struct Scene *scene;
	float *layout;
	char *_data;
	
	_self = (struct EnvMap *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	scene = *((struct Scene **)_data);
	_data += 8;
	layout = ((float *)_data);
	
	save_envmap(_self, C, reports, filepath, scene, layout);
}

/* Repeated prototypes to detect errors */

void clear_envmap(struct EnvMap *_self, bContext *C);
void save_envmap(struct EnvMap *_self, bContext *C, ReportList *reports, const char * filepath, struct Scene *scene, float layout[12]);



/* Texture */
static EnumPropertyItem rna_Texture_type_items[17] = {
	{0, "NONE", 0, "None", ""},
	{5, "BLEND", 80, "Blend", "Procedural - create a ramp texture"},
	{1, "CLOUDS", 80, "Clouds", "Procedural - create a cloud-like fractal noise texture"},
	{13, "DISTORTED_NOISE", 80, "Distorted Noise", "Procedural - noise texture distorted by two noise algorithms"},
	{10, "ENVIRONMENT_MAP", 183, "Environment Map", "Create a render of the environment mapped to a texture"},
	{8, "IMAGE", 183, "Image or Movie", "Allow for images or movies to be used as textures"},
	{4, "MAGIC", 80, "Magic", "Procedural - color texture based on trigonometric functions"},
	{3, "MARBLE", 80, "Marble", "Procedural - marble-like noise texture with wave generated bands"},
	{11, "MUSGRAVE", 80, "Musgrave", "Procedural - highly flexible fractal noise texture"},
	{7, "NOISE", 80, "Noise", "Procedural - random noise, gives a different result every time, for every frame, for every pixel"},
	{16, "OCEAN", 80, "Ocean", "Use a texture generated by an Ocean modifier"},
	{14, "POINT_DENSITY", 80, "Point Density", ""},
	{6, "STUCCI", 80, "Stucci", "Procedural - create a fractal noise texture"},
	{12, "VORONOI", 80, "Voronoi", "Procedural - create cell-like patterns based on Worley noise"},
	{15, "VOXEL_DATA", 80, "Voxel Data", "Create a 3D texture based on volumetric data"},
	{2, "WOOD", 80, "Wood", "Procedural - wave generated bands or rings, with optional noise"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Texture_type = {
	{(PropertyRNA *)&rna_Texture_use_clamp, NULL,
	-1, "type", 3, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	Texture_type_get, Texture_type_set, NULL, NULL, NULL, NULL, rna_Texture_type_items, 16, 0
};

BoolPropertyRNA rna_Texture_use_clamp = {
	{(PropertyRNA *)&rna_Texture_use_color_ramp, (PropertyRNA *)&rna_Texture_type,
	-1, "use_clamp", 3, "Clamp",
	"Set negative texture RGB and intensity values to zero, for some uses like displacement this option can be disabled to get the full range",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	Texture_use_clamp_get, Texture_use_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Texture_use_color_ramp = {
	{(PropertyRNA *)&rna_Texture_color_ramp, (PropertyRNA *)&rna_Texture_use_clamp,
	-1, "use_color_ramp", 3, "Use Color Ramp",
	"Toggle color ramp operations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	Texture_use_color_ramp_get, Texture_use_color_ramp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Texture_color_ramp = {
	{(PropertyRNA *)&rna_Texture_intensity, (PropertyRNA *)&rna_Texture_use_color_ramp,
	-1, "color_ramp", 8388608, "Color Ramp",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	Texture_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

FloatPropertyRNA rna_Texture_intensity = {
	{(PropertyRNA *)&rna_Texture_contrast, (PropertyRNA *)&rna_Texture_color_ramp,
	-1, "intensity", 8195, "Brightness",
	"Adjust the brightness of the texture",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, bright), 4, NULL},
	Texture_intensity_get, Texture_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Texture_contrast = {
	{(PropertyRNA *)&rna_Texture_saturation, (PropertyRNA *)&rna_Texture_intensity,
	-1, "contrast", 8195, "Contrast",
	"Adjust the contrast of the texture",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, contrast), 4, NULL},
	Texture_contrast_get, Texture_contrast_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Texture_saturation = {
	{(PropertyRNA *)&rna_Texture_factor_red, (PropertyRNA *)&rna_Texture_contrast,
	-1, "saturation", 8195, "Saturation",
	"Adjust the saturation of colors in the texture",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, saturation), 4, NULL},
	Texture_saturation_get, Texture_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Texture_factor_red = {
	{(PropertyRNA *)&rna_Texture_factor_green, (PropertyRNA *)&rna_Texture_saturation,
	-1, "factor_red", 8195, "Factor Red",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, rfac), 4, NULL},
	Texture_factor_red_get, Texture_factor_red_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Texture_factor_green = {
	{(PropertyRNA *)&rna_Texture_factor_blue, (PropertyRNA *)&rna_Texture_factor_red,
	-1, "factor_green", 8195, "Factor Green",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, gfac), 4, NULL},
	Texture_factor_green_get, Texture_factor_green_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Texture_factor_blue = {
	{(PropertyRNA *)&rna_Texture_use_preview_alpha, (PropertyRNA *)&rna_Texture_factor_green,
	-1, "factor_blue", 8195, "Factor Blue",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, bfac), 4, NULL},
	Texture_factor_blue_get, Texture_factor_blue_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Texture_use_preview_alpha = {
	{(PropertyRNA *)&rna_Texture_use_nodes, (PropertyRNA *)&rna_Texture_factor_blue,
	-1, "use_preview_alpha", 3, "Show Alpha",
	"Show Alpha in Preview Render",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	Texture_use_preview_alpha_get, Texture_use_preview_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Texture_use_nodes = {
	{(PropertyRNA *)&rna_Texture_node_tree, (PropertyRNA *)&rna_Texture_use_preview_alpha,
	-1, "use_nodes", 4194307, "Use Nodes",
	"Make this a node-based texture",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Texture_use_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	Texture_use_nodes_get, Texture_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Texture_node_tree = {
	{(PropertyRNA *)&rna_Texture_animation_data, (PropertyRNA *)&rna_Texture_use_nodes,
	-1, "node_tree", 8388672, "Node Tree",
	"Node tree for node-based textures",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	Texture_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

PointerPropertyRNA rna_Texture_animation_data = {
	{NULL, (PropertyRNA *)&rna_Texture_node_tree,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Texture_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

static float rna_Texture_evaluate_value_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Texture_evaluate_value = {
	{(PropertyRNA *)&rna_Texture_evaluate_result, NULL,
	-1, "value", 7, "",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Texture_evaluate_value_default
};

static float rna_Texture_evaluate_result_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Texture_evaluate_result = {
	{NULL, (PropertyRNA *)&rna_Texture_evaluate_value,
	-1, "result", 8388619, "Result",
	NULL,
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Texture_evaluate_result_default
};

FunctionRNA rna_Texture_evaluate_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Texture_evaluate_value, (PropertyRNA *)&rna_Texture_evaluate_result}},
	"evaluate", 0, "Evaluate the texture at the coordinates given",
	Texture_evaluate_call,
	NULL
};

StructRNA RNA_Texture = {
	{(ContainerRNA *)&RNA_CloudsTexture, (ContainerRNA *)&RNA_Library,
	NULL,
	{(PropertyRNA *)&rna_Texture_type, (PropertyRNA *)&rna_Texture_animation_data}},
	"Texture", NULL, NULL, 7, "Texture",
	"Texture datablock used by materials, lamps, worlds and brushes",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Texture_evaluate_func, (FunctionRNA *)&rna_Texture_evaluate_func}
};

/* Clouds Texture */
FloatPropertyRNA rna_CloudsTexture_noise_scale = {
	{(PropertyRNA *)&rna_CloudsTexture_noise_depth, NULL,
	-1, "noise_scale", 8195, "Noise Size",
	"Scaling for noise input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisesize), 4, NULL},
	CloudsTexture_noise_scale_get, CloudsTexture_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_CloudsTexture_noise_depth = {
	{(PropertyRNA *)&rna_CloudsTexture_noise_basis, (PropertyRNA *)&rna_CloudsTexture_noise_scale,
	-1, "noise_depth", 8195, "Noise Depth",
	"Depth of the cloud calculation",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	offsetof(Tex, noisedepth), 1, NULL},
	CloudsTexture_noise_depth_get, CloudsTexture_noise_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 24, 0, 30, 0, 0, NULL
};

static EnumPropertyItem rna_CloudsTexture_noise_basis_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CloudsTexture_noise_basis = {
	{(PropertyRNA *)&rna_CloudsTexture_noise_type, (PropertyRNA *)&rna_CloudsTexture_noise_depth,
	-1, "noise_basis", 3, "Noise Basis",
	"Noise basis used for turbulence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	CloudsTexture_noise_basis_get, CloudsTexture_noise_basis_set, NULL, NULL, NULL, NULL, rna_CloudsTexture_noise_basis_items, 10, 0
};

static EnumPropertyItem rna_CloudsTexture_noise_type_items[3] = {
	{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"},
	{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CloudsTexture_noise_type = {
	{(PropertyRNA *)&rna_CloudsTexture_cloud_type, (PropertyRNA *)&rna_CloudsTexture_noise_basis,
	-1, "noise_type", 3, "Noise Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	CloudsTexture_noise_type_get, CloudsTexture_noise_type_set, NULL, NULL, NULL, NULL, rna_CloudsTexture_noise_type_items, 2, 0
};

static EnumPropertyItem rna_CloudsTexture_cloud_type_items[3] = {
	{0, "GRAYSCALE", 0, "Grayscale", ""},
	{1, "COLOR", 0, "Color", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CloudsTexture_cloud_type = {
	{(PropertyRNA *)&rna_CloudsTexture_nabla, (PropertyRNA *)&rna_CloudsTexture_noise_type,
	-1, "cloud_type", 3, "Color",
	"Determine whether Noise returns grayscale or RGB values",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	CloudsTexture_cloud_type_get, CloudsTexture_cloud_type_set, NULL, NULL, NULL, NULL, rna_CloudsTexture_cloud_type_items, 2, 0
};

FloatPropertyRNA rna_CloudsTexture_nabla = {
	{NULL, (PropertyRNA *)&rna_CloudsTexture_cloud_type,
	-1, "nabla", 8195, "Nabla",
	"Size of derivative offset used for calculating normal",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, nabla), 4, NULL},
	CloudsTexture_nabla_get, CloudsTexture_nabla_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, 0.0f, NULL
};

StructRNA RNA_CloudsTexture = {
	{(ContainerRNA *)&RNA_WoodTexture, (ContainerRNA *)&RNA_Texture,
	NULL,
	{(PropertyRNA *)&rna_CloudsTexture_noise_scale, (PropertyRNA *)&rna_CloudsTexture_nabla}},
	"CloudsTexture", NULL, NULL, 7, "Clouds Texture",
	"Procedural noise texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Wood Texture */
FloatPropertyRNA rna_WoodTexture_noise_scale = {
	{(PropertyRNA *)&rna_WoodTexture_turbulence, NULL,
	-1, "noise_scale", 8195, "Noise Size",
	"Scaling for noise input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisesize), 4, NULL},
	WoodTexture_noise_scale_get, WoodTexture_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WoodTexture_turbulence = {
	{(PropertyRNA *)&rna_WoodTexture_noise_basis, (PropertyRNA *)&rna_WoodTexture_noise_scale,
	-1, "turbulence", 8195, "Turbulence",
	"Turbulence of the bandnoise and ringnoise types",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, turbul), 4, NULL},
	WoodTexture_turbulence_get, WoodTexture_turbulence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_WoodTexture_noise_basis_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WoodTexture_noise_basis = {
	{(PropertyRNA *)&rna_WoodTexture_noise_type, (PropertyRNA *)&rna_WoodTexture_turbulence,
	-1, "noise_basis", 3, "Noise Basis",
	"Noise basis used for turbulence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	WoodTexture_noise_basis_get, WoodTexture_noise_basis_set, NULL, NULL, NULL, NULL, rna_WoodTexture_noise_basis_items, 10, 0
};

static EnumPropertyItem rna_WoodTexture_noise_type_items[3] = {
	{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"},
	{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WoodTexture_noise_type = {
	{(PropertyRNA *)&rna_WoodTexture_wood_type, (PropertyRNA *)&rna_WoodTexture_noise_basis,
	-1, "noise_type", 3, "Noise Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	WoodTexture_noise_type_get, WoodTexture_noise_type_set, NULL, NULL, NULL, NULL, rna_WoodTexture_noise_type_items, 2, 0
};

static EnumPropertyItem rna_WoodTexture_wood_type_items[5] = {
	{0, "BANDS", 0, "Bands", "Use standard wood texture in bands"},
	{1, "RINGS", 0, "Rings", "Use wood texture in rings"},
	{2, "BANDNOISE", 0, "Band Noise", "Add noise to standard wood"},
	{3, "RINGNOISE", 0, "Ring Noise", "Add noise to rings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WoodTexture_wood_type = {
	{(PropertyRNA *)&rna_WoodTexture_noise_basis_2, (PropertyRNA *)&rna_WoodTexture_noise_type,
	-1, "wood_type", 3, "Pattern",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	WoodTexture_wood_type_get, WoodTexture_wood_type_set, NULL, NULL, NULL, NULL, rna_WoodTexture_wood_type_items, 4, 0
};

static EnumPropertyItem rna_WoodTexture_noise_basis_2_items[4] = {
	{0, "SIN", 0, "Sine", "Use a sine wave to produce bands"},
	{1, "SAW", 0, "Saw", "Use a saw wave to produce bands"},
	{2, "TRI", 0, "Tri", "Use a triangle wave to produce bands"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WoodTexture_noise_basis_2 = {
	{(PropertyRNA *)&rna_WoodTexture_nabla, (PropertyRNA *)&rna_WoodTexture_wood_type,
	-1, "noise_basis_2", 3, "Noise Basis 2",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	WoodTexture_noise_basis_2_get, WoodTexture_noise_basis_2_set, NULL, NULL, NULL, NULL, rna_WoodTexture_noise_basis_2_items, 3, 0
};

FloatPropertyRNA rna_WoodTexture_nabla = {
	{NULL, (PropertyRNA *)&rna_WoodTexture_noise_basis_2,
	-1, "nabla", 8195, "Nabla",
	"Size of derivative offset used for calculating normal",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, nabla), 4, NULL},
	WoodTexture_nabla_get, WoodTexture_nabla_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, 0.0f, NULL
};

StructRNA RNA_WoodTexture = {
	{(ContainerRNA *)&RNA_MarbleTexture, (ContainerRNA *)&RNA_CloudsTexture,
	NULL,
	{(PropertyRNA *)&rna_WoodTexture_noise_scale, (PropertyRNA *)&rna_WoodTexture_nabla}},
	"WoodTexture", NULL, NULL, 7, "Wood Texture",
	"Procedural noise texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Marble Texture */
FloatPropertyRNA rna_MarbleTexture_noise_scale = {
	{(PropertyRNA *)&rna_MarbleTexture_turbulence, NULL,
	-1, "noise_scale", 8195, "Noise Size",
	"Scaling for noise input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisesize), 4, NULL},
	MarbleTexture_noise_scale_get, MarbleTexture_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_MarbleTexture_turbulence = {
	{(PropertyRNA *)&rna_MarbleTexture_noise_depth, (PropertyRNA *)&rna_MarbleTexture_noise_scale,
	-1, "turbulence", 8195, "Turbulence",
	"Turbulence of the bandnoise and ringnoise types",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, turbul), 4, NULL},
	MarbleTexture_turbulence_get, MarbleTexture_turbulence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_MarbleTexture_noise_depth = {
	{(PropertyRNA *)&rna_MarbleTexture_noise_type, (PropertyRNA *)&rna_MarbleTexture_turbulence,
	-1, "noise_depth", 8195, "Noise Depth",
	"Depth of the cloud calculation",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisedepth), 1, NULL},
	MarbleTexture_noise_depth_get, MarbleTexture_noise_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 24, 0, 30, 0, 0, NULL
};

static EnumPropertyItem rna_MarbleTexture_noise_type_items[3] = {
	{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"},
	{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MarbleTexture_noise_type = {
	{(PropertyRNA *)&rna_MarbleTexture_marble_type, (PropertyRNA *)&rna_MarbleTexture_noise_depth,
	-1, "noise_type", 3, "Noise Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	MarbleTexture_noise_type_get, MarbleTexture_noise_type_set, NULL, NULL, NULL, NULL, rna_MarbleTexture_noise_type_items, 2, 0
};

static EnumPropertyItem rna_MarbleTexture_marble_type_items[4] = {
	{0, "SOFT", 0, "Soft", "Use soft marble"},
	{1, "SHARP", 0, "Sharp", "Use more clearly defined marble"},
	{2, "SHARPER", 0, "Sharper", "Use very clearly defined marble"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MarbleTexture_marble_type = {
	{(PropertyRNA *)&rna_MarbleTexture_noise_basis, (PropertyRNA *)&rna_MarbleTexture_noise_type,
	-1, "marble_type", 3, "Pattern",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	MarbleTexture_marble_type_get, MarbleTexture_marble_type_set, NULL, NULL, NULL, NULL, rna_MarbleTexture_marble_type_items, 3, 0
};

static EnumPropertyItem rna_MarbleTexture_noise_basis_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MarbleTexture_noise_basis = {
	{(PropertyRNA *)&rna_MarbleTexture_noise_basis_2, (PropertyRNA *)&rna_MarbleTexture_marble_type,
	-1, "noise_basis", 3, "Noise Basis",
	"Noise basis used for turbulence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	MarbleTexture_noise_basis_get, MarbleTexture_noise_basis_set, NULL, NULL, NULL, NULL, rna_MarbleTexture_noise_basis_items, 10, 0
};

static EnumPropertyItem rna_MarbleTexture_noise_basis_2_items[4] = {
	{0, "SIN", 0, "Sin", "Use a sine wave to produce bands"},
	{1, "SAW", 0, "Saw", "Use a saw wave to produce bands"},
	{2, "TRI", 0, "Tri", "Use a triangle wave to produce bands"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MarbleTexture_noise_basis_2 = {
	{(PropertyRNA *)&rna_MarbleTexture_nabla, (PropertyRNA *)&rna_MarbleTexture_noise_basis,
	-1, "noise_basis_2", 3, "Noise Basis 2",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	MarbleTexture_noise_basis_2_get, MarbleTexture_noise_basis_2_set, NULL, NULL, NULL, NULL, rna_MarbleTexture_noise_basis_2_items, 3, 0
};

FloatPropertyRNA rna_MarbleTexture_nabla = {
	{NULL, (PropertyRNA *)&rna_MarbleTexture_noise_basis_2,
	-1, "nabla", 8195, "Nabla",
	"Size of derivative offset used for calculating normal",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, nabla), 4, NULL},
	MarbleTexture_nabla_get, MarbleTexture_nabla_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, 0.0f, NULL
};

StructRNA RNA_MarbleTexture = {
	{(ContainerRNA *)&RNA_MagicTexture, (ContainerRNA *)&RNA_WoodTexture,
	NULL,
	{(PropertyRNA *)&rna_MarbleTexture_noise_scale, (PropertyRNA *)&rna_MarbleTexture_nabla}},
	"MarbleTexture", NULL, NULL, 7, "Marble Texture",
	"Procedural noise texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Magic Texture */
FloatPropertyRNA rna_MagicTexture_turbulence = {
	{(PropertyRNA *)&rna_MagicTexture_noise_depth, NULL,
	-1, "turbulence", 8195, "Turbulence",
	"Turbulence of the noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, turbul), 4, NULL},
	MagicTexture_turbulence_get, MagicTexture_turbulence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_MagicTexture_noise_depth = {
	{NULL, (PropertyRNA *)&rna_MagicTexture_turbulence,
	-1, "noise_depth", 8195, "Noise Depth",
	"Depth of the noise",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisedepth), 1, NULL},
	MagicTexture_noise_depth_get, MagicTexture_noise_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 24, 0, 30, 0, 0, NULL
};

StructRNA RNA_MagicTexture = {
	{(ContainerRNA *)&RNA_BlendTexture, (ContainerRNA *)&RNA_MarbleTexture,
	NULL,
	{(PropertyRNA *)&rna_MagicTexture_turbulence, (PropertyRNA *)&rna_MagicTexture_noise_depth}},
	"MagicTexture", NULL, NULL, 7, "Magic Texture",
	"Procedural noise texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Blend Texture */
static EnumPropertyItem rna_BlendTexture_progression_items[8] = {
	{0, "LINEAR", 0, "Linear", "Create a linear progression"},
	{1, "QUADRATIC", 0, "Quadratic", "Create a quadratic progression"},
	{2, "EASING", 0, "Easing", "Create a progression easing from one step to the next"},
	{3, "DIAGONAL", 0, "Diagonal", "Create a diagonal progression"},
	{4, "SPHERICAL", 0, "Spherical", "Create a spherical progression"},
	{5, "QUADRATIC_SPHERE", 0, "Quadratic sphere", "Create a quadratic progression in the shape of a sphere"},
	{6, "RADIAL", 0, "Radial", "Create a radial progression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendTexture_progression = {
	{(PropertyRNA *)&rna_BlendTexture_use_flip_axis, NULL,
	-1, "progression", 3, "Progression",
	"Style of the color blending",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	BlendTexture_progression_get, BlendTexture_progression_set, NULL, NULL, NULL, NULL, rna_BlendTexture_progression_items, 7, 0
};

static EnumPropertyItem rna_BlendTexture_use_flip_axis_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", "No flipping"},
	{2, "VERTICAL", 0, "Vertical", "Flip the texture\'s X and Y axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendTexture_use_flip_axis = {
	{NULL, (PropertyRNA *)&rna_BlendTexture_progression,
	-1, "use_flip_axis", 3, "Flip Axis",
	"Flip the texture\'s X and Y axis",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	BlendTexture_use_flip_axis_get, BlendTexture_use_flip_axis_set, NULL, NULL, NULL, NULL, rna_BlendTexture_use_flip_axis_items, 2, 0
};

StructRNA RNA_BlendTexture = {
	{(ContainerRNA *)&RNA_StucciTexture, (ContainerRNA *)&RNA_MagicTexture,
	NULL,
	{(PropertyRNA *)&rna_BlendTexture_progression, (PropertyRNA *)&rna_BlendTexture_use_flip_axis}},
	"BlendTexture", NULL, NULL, 7, "Blend Texture",
	"Procedural color blending texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Stucci Texture */
FloatPropertyRNA rna_StucciTexture_turbulence = {
	{(PropertyRNA *)&rna_StucciTexture_noise_basis, NULL,
	-1, "turbulence", 8195, "Turbulence",
	"Turbulence of the noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, turbul), 4, NULL},
	StucciTexture_turbulence_get, StucciTexture_turbulence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 200.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_StucciTexture_noise_basis_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_StucciTexture_noise_basis = {
	{(PropertyRNA *)&rna_StucciTexture_noise_scale, (PropertyRNA *)&rna_StucciTexture_turbulence,
	-1, "noise_basis", 3, "Noise Basis",
	"Noise basis used for turbulence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	StucciTexture_noise_basis_get, StucciTexture_noise_basis_set, NULL, NULL, NULL, NULL, rna_StucciTexture_noise_basis_items, 10, 0
};

FloatPropertyRNA rna_StucciTexture_noise_scale = {
	{(PropertyRNA *)&rna_StucciTexture_noise_type, (PropertyRNA *)&rna_StucciTexture_noise_basis,
	-1, "noise_scale", 8195, "Noise Size",
	"Scaling for noise input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisesize), 4, NULL},
	StucciTexture_noise_scale_get, StucciTexture_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_StucciTexture_noise_type_items[3] = {
	{0, "SOFT_NOISE", 0, "Soft", "Generate soft noise (smooth transitions)"},
	{1, "HARD_NOISE", 0, "Hard", "Generate hard noise (sharp transitions)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_StucciTexture_noise_type = {
	{(PropertyRNA *)&rna_StucciTexture_stucci_type, (PropertyRNA *)&rna_StucciTexture_noise_scale,
	-1, "noise_type", 3, "Noise Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	StucciTexture_noise_type_get, StucciTexture_noise_type_set, NULL, NULL, NULL, NULL, rna_StucciTexture_noise_type_items, 2, 0
};

static EnumPropertyItem rna_StucciTexture_stucci_type_items[4] = {
	{0, "PLASTIC", 0, "Plastic", "Use standard stucci"},
	{1, "WALL_IN", 0, "Wall in", "Create Dimples"},
	{2, "WALL_OUT", 0, "Wall out", "Create Ridges"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_StucciTexture_stucci_type = {
	{NULL, (PropertyRNA *)&rna_StucciTexture_noise_type,
	-1, "stucci_type", 3, "Pattern",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	StucciTexture_stucci_type_get, StucciTexture_stucci_type_set, NULL, NULL, NULL, NULL, rna_StucciTexture_stucci_type_items, 3, 0
};

StructRNA RNA_StucciTexture = {
	{(ContainerRNA *)&RNA_NoiseTexture, (ContainerRNA *)&RNA_BlendTexture,
	NULL,
	{(PropertyRNA *)&rna_StucciTexture_turbulence, (PropertyRNA *)&rna_StucciTexture_stucci_type}},
	"StucciTexture", NULL, NULL, 7, "Stucci Texture",
	"Procedural noise texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Noise Texture */
StructRNA RNA_NoiseTexture = {
	{(ContainerRNA *)&RNA_ImageTexture, (ContainerRNA *)&RNA_StucciTexture,
	NULL,
	{NULL, NULL}},
	"NoiseTexture", NULL, NULL, 7, "Noise Texture",
	"Procedural noise texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Image Texture */
BoolPropertyRNA rna_ImageTexture_use_interpolation = {
	{(PropertyRNA *)&rna_ImageTexture_use_flip_axis, NULL,
	-1, "use_interpolation", 3, "Interpolation",
	"Interpolate pixels using selected filter",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_interpolation_get, ImageTexture_use_interpolation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_flip_axis = {
	{(PropertyRNA *)&rna_ImageTexture_use_alpha, (PropertyRNA *)&rna_ImageTexture_use_interpolation,
	-1, "use_flip_axis", 3, "Flip Axis",
	"Flip the texture\'s X and Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_flip_axis_get, ImageTexture_use_flip_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_alpha = {
	{(PropertyRNA *)&rna_ImageTexture_use_calculate_alpha, (PropertyRNA *)&rna_ImageTexture_use_flip_axis,
	-1, "use_alpha", 3, "Use Alpha",
	"Use the alpha channel information in the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_alpha_get, ImageTexture_use_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_calculate_alpha = {
	{(PropertyRNA *)&rna_ImageTexture_invert_alpha, (PropertyRNA *)&rna_ImageTexture_use_alpha,
	-1, "use_calculate_alpha", 3, "Calculate Alpha",
	"Calculate an alpha channel based on RGB values in the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_calculate_alpha_get, ImageTexture_use_calculate_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_invert_alpha = {
	{(PropertyRNA *)&rna_ImageTexture_use_mipmap, (PropertyRNA *)&rna_ImageTexture_use_calculate_alpha,
	-1, "invert_alpha", 3, "Invert Alpha",
	"Invert all the alpha values in the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_invert_alpha_get, ImageTexture_invert_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_mipmap = {
	{(PropertyRNA *)&rna_ImageTexture_use_mipmap_gauss, (PropertyRNA *)&rna_ImageTexture_invert_alpha,
	-1, "use_mipmap", 3, "MIP Map",
	"Use auto-generated MIP maps for the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_mipmap_get, ImageTexture_use_mipmap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_mipmap_gauss = {
	{(PropertyRNA *)&rna_ImageTexture_filter_type, (PropertyRNA *)&rna_ImageTexture_use_mipmap,
	-1, "use_mipmap_gauss", 3, "MIP Map Gaussian filter",
	"Use Gauss filter to sample down MIP maps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_mipmap_gauss_get, ImageTexture_use_mipmap_gauss_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ImageTexture_filter_type_items[5] = {
	{0, "BOX", 0, "Box", ""},
	{1, "EWA", 0, "EWA", ""},
	{2, "FELINE", 0, "FELINE", ""},
	{3, "AREA", 0, "Area", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImageTexture_filter_type = {
	{(PropertyRNA *)&rna_ImageTexture_filter_probes, (PropertyRNA *)&rna_ImageTexture_use_mipmap_gauss,
	-1, "filter_type", 3, "Filter",
	"Texture filter to use for sampling image",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_filter_type_get, ImageTexture_filter_type_set, NULL, NULL, NULL, NULL, rna_ImageTexture_filter_type_items, 4, 0
};

IntPropertyRNA rna_ImageTexture_filter_probes = {
	{(PropertyRNA *)&rna_ImageTexture_filter_eccentricity, (PropertyRNA *)&rna_ImageTexture_filter_type,
	-1, "filter_probes", 8195, "Filter Probes",
	"Maximum number of samples (higher gives less blur at distant/oblique angles, but is also slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, afmax), 0, NULL},
	ImageTexture_filter_probes_get, ImageTexture_filter_probes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 256, 1, 256, 1, 0, NULL
};

IntPropertyRNA rna_ImageTexture_filter_eccentricity = {
	{(PropertyRNA *)&rna_ImageTexture_use_filter_size_min, (PropertyRNA *)&rna_ImageTexture_filter_probes,
	-1, "filter_eccentricity", 8195, "Filter Eccentricity",
	"Maximum eccentricity (higher gives less blur at distant/oblique angles, but is also slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, afmax), 0, NULL},
	ImageTexture_filter_eccentricity_get, ImageTexture_filter_eccentricity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 256, 1, 256, 1, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_filter_size_min = {
	{(PropertyRNA *)&rna_ImageTexture_filter_size, (PropertyRNA *)&rna_ImageTexture_filter_eccentricity,
	-1, "use_filter_size_min", 3, "Minimum Filter Size",
	"Use Filter Size as a minimal filter value in pixels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_filter_size_min_get, ImageTexture_use_filter_size_min_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ImageTexture_filter_size = {
	{(PropertyRNA *)&rna_ImageTexture_extension, (PropertyRNA *)&rna_ImageTexture_use_filter_size_min,
	-1, "filter_size", 8195, "Filter Size",
	"Multiply the filter size used by MIP Map and Interpolation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, filtersize), 4, NULL},
	ImageTexture_filter_size_get, ImageTexture_filter_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 50.0f, 0.1000000015f, 50.0f, 1.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_ImageTexture_extension_items[6] = {
	{1, "EXTEND", 0, "Extend", "Extend by repeating edge pixels of the image"},
	{2, "CLIP", 0, "Clip", "Clip to image size and set exterior pixels as transparent"},
	{4, "CLIP_CUBE", 0, "Clip Cube", "Clip to cubic-shaped area around the image and set exterior pixels as transparent"},
	{3, "REPEAT", 0, "Repeat", "Cause the image to repeat horizontally and vertically"},
	{5, "CHECKER", 0, "Checker", "Cause the image to repeat in checker board pattern"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImageTexture_extension = {
	{(PropertyRNA *)&rna_ImageTexture_repeat_x, (PropertyRNA *)&rna_ImageTexture_filter_size,
	-1, "extension", 3, "Extension",
	"How the image is extrapolated past its original bounds",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_extension_get, ImageTexture_extension_set, NULL, NULL, NULL, NULL, rna_ImageTexture_extension_items, 5, 1
};

IntPropertyRNA rna_ImageTexture_repeat_x = {
	{(PropertyRNA *)&rna_ImageTexture_repeat_y, (PropertyRNA *)&rna_ImageTexture_extension,
	-1, "repeat_x", 8195, "Repeat X",
	"Repetition multiplier in the X direction",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, xrepeat), 1, NULL},
	ImageTexture_repeat_x_get, ImageTexture_repeat_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 512, 1, 512, 1, 0, NULL
};

IntPropertyRNA rna_ImageTexture_repeat_y = {
	{(PropertyRNA *)&rna_ImageTexture_use_mirror_x, (PropertyRNA *)&rna_ImageTexture_repeat_x,
	-1, "repeat_y", 8195, "Repeat Y",
	"Repetition multiplier in the Y direction",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, yrepeat), 1, NULL},
	ImageTexture_repeat_y_get, ImageTexture_repeat_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 512, 1, 512, 1, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_mirror_x = {
	{(PropertyRNA *)&rna_ImageTexture_use_mirror_y, (PropertyRNA *)&rna_ImageTexture_repeat_y,
	-1, "use_mirror_x", 3, "Mirror X",
	"Mirror the image repetition on the X direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_mirror_x_get, ImageTexture_use_mirror_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_mirror_y = {
	{(PropertyRNA *)&rna_ImageTexture_use_checker_odd, (PropertyRNA *)&rna_ImageTexture_use_mirror_x,
	-1, "use_mirror_y", 3, "Mirror Y",
	"Mirror the image repetition on the Y direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_mirror_y_get, ImageTexture_use_mirror_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_checker_odd = {
	{(PropertyRNA *)&rna_ImageTexture_use_checker_even, (PropertyRNA *)&rna_ImageTexture_use_mirror_y,
	-1, "use_checker_odd", 3, "Checker Odd",
	"Odd checker tiles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_checker_odd_get, ImageTexture_use_checker_odd_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_checker_even = {
	{(PropertyRNA *)&rna_ImageTexture_checker_distance, (PropertyRNA *)&rna_ImageTexture_use_checker_odd,
	-1, "use_checker_even", 3, "Checker Even",
	"Even checker tiles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_checker_even_get, ImageTexture_use_checker_even_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ImageTexture_checker_distance = {
	{(PropertyRNA *)&rna_ImageTexture_crop_min_x, (PropertyRNA *)&rna_ImageTexture_use_checker_even,
	-1, "checker_distance", 8195, "Checker Distance",
	"Distance between checker tiles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, checkerdist), 4, NULL},
	ImageTexture_checker_distance_get, ImageTexture_checker_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 0.1000000015f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ImageTexture_crop_min_x = {
	{(PropertyRNA *)&rna_ImageTexture_crop_min_y, (PropertyRNA *)&rna_ImageTexture_checker_distance,
	-1, "crop_min_x", 8195, "Crop Minimum X",
	"Minimum X value to crop the image",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, cropxmin), 4, NULL},
	ImageTexture_crop_min_x_get, ImageTexture_crop_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ImageTexture_crop_min_y = {
	{(PropertyRNA *)&rna_ImageTexture_crop_max_x, (PropertyRNA *)&rna_ImageTexture_crop_min_x,
	-1, "crop_min_y", 8195, "Crop Minimum Y",
	"Minimum Y value to crop the image",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, cropymin), 4, NULL},
	ImageTexture_crop_min_y_get, ImageTexture_crop_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ImageTexture_crop_max_x = {
	{(PropertyRNA *)&rna_ImageTexture_crop_max_y, (PropertyRNA *)&rna_ImageTexture_crop_min_y,
	-1, "crop_max_x", 8195, "Crop Maximum X",
	"Maximum X value to crop the image",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, cropxmax), 4, NULL},
	ImageTexture_crop_max_x_get, ImageTexture_crop_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ImageTexture_crop_max_y = {
	{(PropertyRNA *)&rna_ImageTexture_image, (PropertyRNA *)&rna_ImageTexture_crop_max_x,
	-1, "crop_max_y", 8195, "Crop Maximum Y",
	"Maximum Y value to crop the image",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, cropymax), 4, NULL},
	ImageTexture_crop_max_y_get, ImageTexture_crop_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

PointerPropertyRNA rna_ImageTexture_image = {
	{(PropertyRNA *)&rna_ImageTexture_image_user, (PropertyRNA *)&rna_ImageTexture_crop_max_y,
	-1, "image", 8388673, "Image",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_image_get, ImageTexture_image_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_ImageTexture_image_user = {
	{(PropertyRNA *)&rna_ImageTexture_use_normal_map, (PropertyRNA *)&rna_ImageTexture_image,
	-1, "image_user", 8388608, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_image_user_get, NULL, NULL, NULL,&RNA_ImageUser
};

BoolPropertyRNA rna_ImageTexture_use_normal_map = {
	{(PropertyRNA *)&rna_ImageTexture_use_derivative_map, (PropertyRNA *)&rna_ImageTexture_image_user,
	-1, "use_normal_map", 3, "Normal Map",
	"Use image RGB values for normal mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_normal_map_get, ImageTexture_use_normal_map_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageTexture_use_derivative_map = {
	{NULL, (PropertyRNA *)&rna_ImageTexture_use_normal_map,
	-1, "use_derivative_map", 3, "Derivative Map",
	"Use red and green as derivative values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageTexture_use_derivative_map_get, ImageTexture_use_derivative_map_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ImageTexture = {
	{(ContainerRNA *)&RNA_EnvironmentMapTexture, (ContainerRNA *)&RNA_NoiseTexture,
	NULL,
	{(PropertyRNA *)&rna_ImageTexture_use_interpolation, (PropertyRNA *)&rna_ImageTexture_use_derivative_map}},
	"ImageTexture", NULL, NULL, 7, "Image Texture",
	"",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Environment Map */
PointerPropertyRNA rna_EnvironmentMapTexture_image = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_image_user, NULL,
	-1, "image", 8388673, "Image",
	"Source image file to read the environment map from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMapTexture_image_get, EnvironmentMapTexture_image_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_EnvironmentMapTexture_image_user = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_use_mipmap, (PropertyRNA *)&rna_EnvironmentMapTexture_image,
	-1, "image_user", 8388608, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMapTexture_image_user_get, NULL, NULL, NULL,&RNA_ImageUser
};

BoolPropertyRNA rna_EnvironmentMapTexture_use_mipmap = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_use_mipmap_gauss, (PropertyRNA *)&rna_EnvironmentMapTexture_image_user,
	-1, "use_mipmap", 3, "MIP Map",
	"Use auto-generated MIP maps for the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMapTexture_use_mipmap_get, EnvironmentMapTexture_use_mipmap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EnvironmentMapTexture_use_mipmap_gauss = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_filter_type, (PropertyRNA *)&rna_EnvironmentMapTexture_use_mipmap,
	-1, "use_mipmap_gauss", 3, "MIP Map Gaussian filter",
	"Use Gauss filter to sample down MIP maps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMapTexture_use_mipmap_gauss_get, EnvironmentMapTexture_use_mipmap_gauss_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_EnvironmentMapTexture_filter_type_items[5] = {
	{0, "BOX", 0, "Box", ""},
	{1, "EWA", 0, "EWA", ""},
	{2, "FELINE", 0, "FELINE", ""},
	{3, "AREA", 0, "Area", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnvironmentMapTexture_filter_type = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_filter_probes, (PropertyRNA *)&rna_EnvironmentMapTexture_use_mipmap_gauss,
	-1, "filter_type", 3, "Filter",
	"Texture filter to use for sampling image",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMapTexture_filter_type_get, EnvironmentMapTexture_filter_type_set, NULL, NULL, NULL, NULL, rna_EnvironmentMapTexture_filter_type_items, 4, 0
};

IntPropertyRNA rna_EnvironmentMapTexture_filter_probes = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_filter_eccentricity, (PropertyRNA *)&rna_EnvironmentMapTexture_filter_type,
	-1, "filter_probes", 8195, "Filter Probes",
	"Maximum number of samples (higher gives less blur at distant/oblique angles, but is also slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, afmax), 0, NULL},
	EnvironmentMapTexture_filter_probes_get, EnvironmentMapTexture_filter_probes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 256, 1, 256, 1, 0, NULL
};

IntPropertyRNA rna_EnvironmentMapTexture_filter_eccentricity = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_use_filter_size_min, (PropertyRNA *)&rna_EnvironmentMapTexture_filter_probes,
	-1, "filter_eccentricity", 8195, "Filter Eccentricity",
	"Maximum eccentricity (higher gives less blur at distant/oblique angles, but is also slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, afmax), 0, NULL},
	EnvironmentMapTexture_filter_eccentricity_get, EnvironmentMapTexture_filter_eccentricity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 256, 1, 256, 1, 0, NULL
};

BoolPropertyRNA rna_EnvironmentMapTexture_use_filter_size_min = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_filter_size, (PropertyRNA *)&rna_EnvironmentMapTexture_filter_eccentricity,
	-1, "use_filter_size_min", 3, "Minimum Filter Size",
	"Use Filter Size as a minimal filter value in pixels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMapTexture_use_filter_size_min_get, EnvironmentMapTexture_use_filter_size_min_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_EnvironmentMapTexture_filter_size = {
	{(PropertyRNA *)&rna_EnvironmentMapTexture_environment_map, (PropertyRNA *)&rna_EnvironmentMapTexture_use_filter_size_min,
	-1, "filter_size", 8195, "Filter Size",
	"Multiply the filter size used by MIP Map and Interpolation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, filtersize), 4, NULL},
	EnvironmentMapTexture_filter_size_get, EnvironmentMapTexture_filter_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 50.0f, 0.1000000015f, 50.0f, 1.0f, 2, 0.0f, NULL
};

PointerPropertyRNA rna_EnvironmentMapTexture_environment_map = {
	{NULL, (PropertyRNA *)&rna_EnvironmentMapTexture_filter_size,
	-1, "environment_map", 8388608, "Environment Map",
	"Get the environment map associated with this texture",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMapTexture_environment_map_get, NULL, NULL, NULL,&RNA_EnvironmentMap
};

StructRNA RNA_EnvironmentMapTexture = {
	{(ContainerRNA *)&RNA_MusgraveTexture, (ContainerRNA *)&RNA_ImageTexture,
	NULL,
	{(PropertyRNA *)&rna_EnvironmentMapTexture_image, (PropertyRNA *)&rna_EnvironmentMapTexture_environment_map}},
	"EnvironmentMapTexture", NULL, NULL, 7, "Environment Map",
	"Environment map texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Musgrave */
static EnumPropertyItem rna_MusgraveTexture_musgrave_type_items[6] = {
	{0, "MULTIFRACTAL", 0, "Multifractal", "Use Perlin noise as a basis"},
	{1, "RIDGED_MULTIFRACTAL", 0, "Ridged Multifractal", "Use Perlin noise with inflection as a basis"},
	{2, "HYBRID_MULTIFRACTAL", 0, "Hybrid Multifractal", "Use Perlin noise as a basis, with extended controls"},
	{3, "FBM", 0, "fBM", "Fractal Brownian Motion, use Brownian noise as a basis"},
	{4, "HETERO_TERRAIN", 0, "Hetero Terrain", "Similar to multifractal"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MusgraveTexture_musgrave_type = {
	{(PropertyRNA *)&rna_MusgraveTexture_dimension_max, NULL,
	-1, "musgrave_type", 3, "Type",
	"Fractal noise algorithm",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	MusgraveTexture_musgrave_type_get, MusgraveTexture_musgrave_type_set, NULL, NULL, NULL, NULL, rna_MusgraveTexture_musgrave_type_items, 5, 0
};

FloatPropertyRNA rna_MusgraveTexture_dimension_max = {
	{(PropertyRNA *)&rna_MusgraveTexture_lacunarity, (PropertyRNA *)&rna_MusgraveTexture_musgrave_type,
	-1, "dimension_max", 8195, "Highest Dimension",
	"Highest fractal dimension",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, mg_H), 4, NULL},
	MusgraveTexture_dimension_max_get, MusgraveTexture_dimension_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MusgraveTexture_lacunarity = {
	{(PropertyRNA *)&rna_MusgraveTexture_octaves, (PropertyRNA *)&rna_MusgraveTexture_dimension_max,
	-1, "lacunarity", 8195, "Lacunarity",
	"Gap between successive frequencies",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, mg_lacunarity), 4, NULL},
	MusgraveTexture_lacunarity_get, MusgraveTexture_lacunarity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 6.0f, 0.0f, 6.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MusgraveTexture_octaves = {
	{(PropertyRNA *)&rna_MusgraveTexture_offset, (PropertyRNA *)&rna_MusgraveTexture_lacunarity,
	-1, "octaves", 8195, "Octaves",
	"Number of frequencies used",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, mg_octaves), 4, NULL},
	MusgraveTexture_octaves_get, MusgraveTexture_octaves_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 8.0f, 0.0f, 8.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MusgraveTexture_offset = {
	{(PropertyRNA *)&rna_MusgraveTexture_gain, (PropertyRNA *)&rna_MusgraveTexture_octaves,
	-1, "offset", 8195, "Offset",
	"The fractal offset",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, mg_offset), 4, NULL},
	MusgraveTexture_offset_get, MusgraveTexture_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 6.0f, 0.0f, 6.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MusgraveTexture_gain = {
	{(PropertyRNA *)&rna_MusgraveTexture_noise_intensity, (PropertyRNA *)&rna_MusgraveTexture_offset,
	-1, "gain", 8195, "Gain",
	"The gain multiplier",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, mg_gain), 4, NULL},
	MusgraveTexture_gain_get, MusgraveTexture_gain_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 6.0f, 0.0f, 6.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MusgraveTexture_noise_intensity = {
	{(PropertyRNA *)&rna_MusgraveTexture_noise_scale, (PropertyRNA *)&rna_MusgraveTexture_gain,
	-1, "noise_intensity", 8195, "Noise Intensity",
	"Intensity of the noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, ns_outscale), 4, NULL},
	MusgraveTexture_noise_intensity_get, MusgraveTexture_noise_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MusgraveTexture_noise_scale = {
	{(PropertyRNA *)&rna_MusgraveTexture_noise_basis, (PropertyRNA *)&rna_MusgraveTexture_noise_intensity,
	-1, "noise_scale", 8195, "Noise Size",
	"Scaling for noise input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisesize), 4, NULL},
	MusgraveTexture_noise_scale_get, MusgraveTexture_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_MusgraveTexture_noise_basis_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MusgraveTexture_noise_basis = {
	{(PropertyRNA *)&rna_MusgraveTexture_nabla, (PropertyRNA *)&rna_MusgraveTexture_noise_scale,
	-1, "noise_basis", 3, "Noise Basis",
	"Noise basis used for turbulence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	MusgraveTexture_noise_basis_get, MusgraveTexture_noise_basis_set, NULL, NULL, NULL, NULL, rna_MusgraveTexture_noise_basis_items, 10, 0
};

FloatPropertyRNA rna_MusgraveTexture_nabla = {
	{NULL, (PropertyRNA *)&rna_MusgraveTexture_noise_basis,
	-1, "nabla", 8195, "Nabla",
	"Size of derivative offset used for calculating normal",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, nabla), 4, NULL},
	MusgraveTexture_nabla_get, MusgraveTexture_nabla_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, 0.0f, NULL
};

StructRNA RNA_MusgraveTexture = {
	{(ContainerRNA *)&RNA_VoronoiTexture, (ContainerRNA *)&RNA_EnvironmentMapTexture,
	NULL,
	{(PropertyRNA *)&rna_MusgraveTexture_musgrave_type, (PropertyRNA *)&rna_MusgraveTexture_nabla}},
	"MusgraveTexture", NULL, NULL, 7, "Musgrave",
	"Procedural musgrave texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Voronoi */
FloatPropertyRNA rna_VoronoiTexture_weight_1 = {
	{(PropertyRNA *)&rna_VoronoiTexture_weight_2, NULL,
	-1, "weight_1", 8195, "Weight 1",
	"Voronoi feature weight 1",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, vn_w1), 4, NULL},
	VoronoiTexture_weight_1_get, VoronoiTexture_weight_1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_VoronoiTexture_weight_2 = {
	{(PropertyRNA *)&rna_VoronoiTexture_weight_3, (PropertyRNA *)&rna_VoronoiTexture_weight_1,
	-1, "weight_2", 8195, "Weight 2",
	"Voronoi feature weight 2",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, vn_w2), 4, NULL},
	VoronoiTexture_weight_2_get, VoronoiTexture_weight_2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_VoronoiTexture_weight_3 = {
	{(PropertyRNA *)&rna_VoronoiTexture_weight_4, (PropertyRNA *)&rna_VoronoiTexture_weight_2,
	-1, "weight_3", 8195, "Weight 3",
	"Voronoi feature weight 3",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, vn_w3), 4, NULL},
	VoronoiTexture_weight_3_get, VoronoiTexture_weight_3_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_VoronoiTexture_weight_4 = {
	{(PropertyRNA *)&rna_VoronoiTexture_minkovsky_exponent, (PropertyRNA *)&rna_VoronoiTexture_weight_3,
	-1, "weight_4", 8195, "Weight 4",
	"Voronoi feature weight 4",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, vn_w4), 4, NULL},
	VoronoiTexture_weight_4_get, VoronoiTexture_weight_4_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_VoronoiTexture_minkovsky_exponent = {
	{(PropertyRNA *)&rna_VoronoiTexture_distance_metric, (PropertyRNA *)&rna_VoronoiTexture_weight_4,
	-1, "minkovsky_exponent", 8195, "Minkowski Exponent",
	"Minkowski exponent",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, vn_mexp), 4, NULL},
	VoronoiTexture_minkovsky_exponent_get, VoronoiTexture_minkovsky_exponent_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0099999998f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_VoronoiTexture_distance_metric_items[8] = {
	{0, "DISTANCE", 0, "Actual Distance", "sqrt(x*x+y*y+z*z)"},
	{1, "DISTANCE_SQUARED", 0, "Distance Squared", "(x*x+y*y+z*z)"},
	{2, "MANHATTAN", 0, "Manhattan", "The length of the distance in axial directions"},
	{3, "CHEBYCHEV", 0, "Chebychev", "The length of the longest Axial journey"},
	{4, "MINKOVSKY_HALF", 0, "Minkowski 1/2", "Set Minkowski variable to 0.5"},
	{5, "MINKOVSKY_FOUR", 0, "Minkowski 4", "Set Minkowski variable to 4"},
	{6, "MINKOVSKY", 0, "Minkowski", "Use the Minkowski function to calculate distance (exponent value determines the shape of the boundaries)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VoronoiTexture_distance_metric = {
	{(PropertyRNA *)&rna_VoronoiTexture_color_mode, (PropertyRNA *)&rna_VoronoiTexture_minkovsky_exponent,
	-1, "distance_metric", 3, "Distance Metric",
	"Algorithm used to calculate distance of sample points to feature points",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	VoronoiTexture_distance_metric_get, VoronoiTexture_distance_metric_set, NULL, NULL, NULL, NULL, rna_VoronoiTexture_distance_metric_items, 7, 0
};

static EnumPropertyItem rna_VoronoiTexture_color_mode_items[5] = {
	{0, "INTENSITY", 0, "Intensity", "Only calculate intensity"},
	{1, "POSITION", 0, "Position", "Color cells by position"},
	{2, "POSITION_OUTLINE", 0, "Position and Outline", "Use position plus an outline based on F2-F1"},
	{3, "POSITION_OUTLINE_INTENSITY", 0, "Position, Outline, and Intensity", "Multiply position and outline by intensity"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VoronoiTexture_color_mode = {
	{(PropertyRNA *)&rna_VoronoiTexture_noise_intensity, (PropertyRNA *)&rna_VoronoiTexture_distance_metric,
	-1, "color_mode", 3, "Coloring",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	VoronoiTexture_color_mode_get, VoronoiTexture_color_mode_set, NULL, NULL, NULL, NULL, rna_VoronoiTexture_color_mode_items, 4, 0
};

FloatPropertyRNA rna_VoronoiTexture_noise_intensity = {
	{(PropertyRNA *)&rna_VoronoiTexture_noise_scale, (PropertyRNA *)&rna_VoronoiTexture_color_mode,
	-1, "noise_intensity", 8195, "Noise Intensity",
	"Scales the intensity of the noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, ns_outscale), 4, NULL},
	VoronoiTexture_noise_intensity_get, VoronoiTexture_noise_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0099999998f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_VoronoiTexture_noise_scale = {
	{(PropertyRNA *)&rna_VoronoiTexture_nabla, (PropertyRNA *)&rna_VoronoiTexture_noise_intensity,
	-1, "noise_scale", 8195, "Noise Size",
	"Scaling for noise input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisesize), 4, NULL},
	VoronoiTexture_noise_scale_get, VoronoiTexture_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_VoronoiTexture_nabla = {
	{NULL, (PropertyRNA *)&rna_VoronoiTexture_noise_scale,
	-1, "nabla", 8195, "Nabla",
	"Size of derivative offset used for calculating normal",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, nabla), 4, NULL},
	VoronoiTexture_nabla_get, VoronoiTexture_nabla_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, 0.0f, NULL
};

StructRNA RNA_VoronoiTexture = {
	{(ContainerRNA *)&RNA_DistortedNoiseTexture, (ContainerRNA *)&RNA_MusgraveTexture,
	NULL,
	{(PropertyRNA *)&rna_VoronoiTexture_weight_1, (PropertyRNA *)&rna_VoronoiTexture_nabla}},
	"VoronoiTexture", NULL, NULL, 7, "Voronoi",
	"Procedural voronoi texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Distorted Noise */
FloatPropertyRNA rna_DistortedNoiseTexture_distortion = {
	{(PropertyRNA *)&rna_DistortedNoiseTexture_noise_scale, NULL,
	-1, "distortion", 8195, "Distortion Amount",
	"Amount of distortion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, dist_amount), 4, NULL},
	DistortedNoiseTexture_distortion_get, DistortedNoiseTexture_distortion_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DistortedNoiseTexture_noise_scale = {
	{(PropertyRNA *)&rna_DistortedNoiseTexture_noise_basis, (PropertyRNA *)&rna_DistortedNoiseTexture_distortion,
	-1, "noise_scale", 8195, "Noise Size",
	"Scaling for noise input",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, noisesize), 4, NULL},
	DistortedNoiseTexture_noise_scale_get, DistortedNoiseTexture_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 2.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_DistortedNoiseTexture_noise_basis_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DistortedNoiseTexture_noise_basis = {
	{(PropertyRNA *)&rna_DistortedNoiseTexture_noise_distortion, (PropertyRNA *)&rna_DistortedNoiseTexture_noise_scale,
	-1, "noise_basis", 3, "Noise Basis",
	"Noise basis used for turbulence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	DistortedNoiseTexture_noise_basis_get, DistortedNoiseTexture_noise_basis_set, NULL, NULL, NULL, NULL, rna_DistortedNoiseTexture_noise_basis_items, 10, 0
};

static EnumPropertyItem rna_DistortedNoiseTexture_noise_distortion_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DistortedNoiseTexture_noise_distortion = {
	{(PropertyRNA *)&rna_DistortedNoiseTexture_nabla, (PropertyRNA *)&rna_DistortedNoiseTexture_noise_basis,
	-1, "noise_distortion", 3, "Noise Distortion",
	"Noise basis for the distortion",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_nodes_update, 0, NULL, NULL,
	0, -1, NULL},
	DistortedNoiseTexture_noise_distortion_get, DistortedNoiseTexture_noise_distortion_set, NULL, NULL, NULL, NULL, rna_DistortedNoiseTexture_noise_distortion_items, 10, 0
};

FloatPropertyRNA rna_DistortedNoiseTexture_nabla = {
	{NULL, (PropertyRNA *)&rna_DistortedNoiseTexture_noise_distortion,
	-1, "nabla", 8195, "Nabla",
	"Size of derivative offset used for calculating normal",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(Tex, nabla), 4, NULL},
	DistortedNoiseTexture_nabla_get, DistortedNoiseTexture_nabla_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 1.0f, 2, 0.0f, NULL
};

StructRNA RNA_DistortedNoiseTexture = {
	{(ContainerRNA *)&RNA_PointDensity, (ContainerRNA *)&RNA_VoronoiTexture,
	NULL,
	{(PropertyRNA *)&rna_DistortedNoiseTexture_distortion, (PropertyRNA *)&rna_DistortedNoiseTexture_nabla}},
	"DistortedNoiseTexture", NULL, NULL, 7, "Distorted Noise",
	"Procedural distorted noise texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* PointDensity */
CollectionPropertyRNA rna_PointDensity_rna_properties = {
	{(PropertyRNA *)&rna_PointDensity_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_rna_properties_begin, PointDensity_rna_properties_next, PointDensity_rna_properties_end, PointDensity_rna_properties_get, NULL, NULL, PointDensity_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PointDensity_rna_type = {
	{(PropertyRNA *)&rna_PointDensity_point_source, (PropertyRNA *)&rna_PointDensity_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_PointDensity_point_source_items[3] = {
	{0, "PARTICLE_SYSTEM", 0, "Particle System", "Generate point density from a particle system"},
	{1, "OBJECT", 0, "Object Vertices", "Generate point density from an object\'s vertices"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointDensity_point_source = {
	{(PropertyRNA *)&rna_PointDensity_object, (PropertyRNA *)&rna_PointDensity_rna_type,
	-1, "point_source", 3, "Point Source",
	"Point data to use as renderable point density",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_point_source_get, PointDensity_point_source_set, NULL, NULL, NULL, NULL, rna_PointDensity_point_source_items, 2, 0
};

PointerPropertyRNA rna_PointDensity_object = {
	{(PropertyRNA *)&rna_PointDensity_particle_system, (PropertyRNA *)&rna_PointDensity_point_source,
	-1, "object", 8388609, "Object",
	"Object to take point data from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_object_get, PointDensity_object_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_PointDensity_particle_system = {
	{(PropertyRNA *)&rna_PointDensity_particle_cache_space, (PropertyRNA *)&rna_PointDensity_object,
	-1, "particle_system", 8388609, "Particle System",
	"Particle System to render as points",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_particle_system_get, PointDensity_particle_system_set, NULL, NULL,&RNA_ParticleSystem
};

static EnumPropertyItem rna_PointDensity_particle_cache_space_items[4] = {
	{0, "OBJECT_LOCATION", 0, "Emit Object Location", ""},
	{1, "OBJECT_SPACE", 0, "Emit Object Space", ""},
	{2, "WORLD_SPACE", 0, "Global Space", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointDensity_particle_cache_space = {
	{(PropertyRNA *)&rna_PointDensity_vertex_cache_space, (PropertyRNA *)&rna_PointDensity_particle_system,
	-1, "particle_cache_space", 3, "Particle Cache",
	"Coordinate system to cache particles in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_particle_cache_space_get, PointDensity_particle_cache_space_set, NULL, NULL, NULL, NULL, rna_PointDensity_particle_cache_space_items, 3, 0
};

static EnumPropertyItem rna_PointDensity_vertex_cache_space_items[4] = {
	{0, "OBJECT_LOCATION", 0, "Object Location", ""},
	{1, "OBJECT_SPACE", 0, "Object Space", ""},
	{2, "WORLD_SPACE", 0, "Global Space", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointDensity_vertex_cache_space = {
	{(PropertyRNA *)&rna_PointDensity_radius, (PropertyRNA *)&rna_PointDensity_particle_cache_space,
	-1, "vertex_cache_space", 3, "Vertices Cache",
	"Coordinate system to cache vertices in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_vertex_cache_space_get, PointDensity_vertex_cache_space_set, NULL, NULL, NULL, NULL, rna_PointDensity_vertex_cache_space_items, 3, 0
};

FloatPropertyRNA rna_PointDensity_radius = {
	{(PropertyRNA *)&rna_PointDensity_falloff, (PropertyRNA *)&rna_PointDensity_vertex_cache_space,
	-1, "radius", 8195, "Radius",
	"Radius from the shaded sample to look for points within",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(PointDensity, radius), 4, NULL},
	PointDensity_radius_get, PointDensity_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, FLT_MAX, 0.0010000000f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_PointDensity_falloff_items[8] = {
	{0, "STANDARD", 0, "Standard", ""},
	{1, "SMOOTH", 0, "Smooth", ""},
	{2, "SOFT", 0, "Soft", ""},
	{3, "CONSTANT", 0, "Constant", "Density is constant within lookup radius"},
	{4, "ROOT", 0, "Root", ""},
	{5, "PARTICLE_AGE", 0, "Particle Age", ""},
	{6, "PARTICLE_VELOCITY", 0, "Particle Velocity", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointDensity_falloff = {
	{(PropertyRNA *)&rna_PointDensity_falloff_soft, (PropertyRNA *)&rna_PointDensity_radius,
	-1, "falloff", 3, "Falloff",
	"Method of attenuating density by distance from the point",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_falloff_get, PointDensity_falloff_set, NULL, NULL, NULL, NULL, rna_PointDensity_falloff_items, 7, 0
};

FloatPropertyRNA rna_PointDensity_falloff_soft = {
	{(PropertyRNA *)&rna_PointDensity_color_source, (PropertyRNA *)&rna_PointDensity_falloff,
	-1, "falloff_soft", 8195, "Softness",
	"Softness of the \'soft\' falloff option",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(PointDensity, falloff_softness), 4, NULL},
	PointDensity_falloff_soft_get, PointDensity_falloff_soft_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, FLT_MAX, 0.0099999998f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_PointDensity_color_source_items[5] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "PARTICLE_AGE", 0, "Particle Age", "Lifetime mapped as 0.0 - 1.0 intensity"},
	{2, "PARTICLE_SPEED", 0, "Particle Speed", "Particle speed (absolute magnitude of velocity) mapped as 0.0-1.0 intensity"},
	{3, "PARTICLE_VELOCITY", 0, "Particle Velocity", "XYZ velocity mapped to RGB colors"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointDensity_color_source = {
	{(PropertyRNA *)&rna_PointDensity_speed_scale, (PropertyRNA *)&rna_PointDensity_falloff_soft,
	-1, "color_source", 3, "Color Source",
	"Data to derive color results from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_color_source_get, PointDensity_color_source_set, NULL, NULL, NULL, NULL, rna_PointDensity_color_source_items, 4, 0
};

FloatPropertyRNA rna_PointDensity_speed_scale = {
	{(PropertyRNA *)&rna_PointDensity_falloff_speed_scale, (PropertyRNA *)&rna_PointDensity_color_source,
	-1, "speed_scale", 8195, "Scale",
	"Multiplier to bring particle speed within an acceptable range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(PointDensity, speed_scale), 4, NULL},
	PointDensity_speed_scale_get, PointDensity_speed_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 100.0f, 0.0010000000f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointDensity_falloff_speed_scale = {
	{(PropertyRNA *)&rna_PointDensity_color_ramp, (PropertyRNA *)&rna_PointDensity_speed_scale,
	-1, "falloff_speed_scale", 8195, "Velocity Scale",
	"Multiplier to bring particle speed within an acceptable range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(PointDensity, falloff_speed_scale), 4, NULL},
	PointDensity_falloff_speed_scale_get, PointDensity_falloff_speed_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 100.0f, 0.0010000000f, 100.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_PointDensity_color_ramp = {
	{(PropertyRNA *)&rna_PointDensity_falloff_curve, (PropertyRNA *)&rna_PointDensity_falloff_speed_scale,
	-1, "color_ramp", 8388608, "Color Ramp",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

PointerPropertyRNA rna_PointDensity_falloff_curve = {
	{(PropertyRNA *)&rna_PointDensity_use_falloff_curve, (PropertyRNA *)&rna_PointDensity_color_ramp,
	-1, "falloff_curve", 8388608, "Falloff Curve",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_PointDensity_use_falloff_curve = {
	{(PropertyRNA *)&rna_PointDensity_use_turbulence, (PropertyRNA *)&rna_PointDensity_falloff_curve,
	-1, "use_falloff_curve", 3, "Falloff Curve",
	"Use a custom falloff curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_use_falloff_curve_get, PointDensity_use_falloff_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointDensity_use_turbulence = {
	{(PropertyRNA *)&rna_PointDensity_turbulence_scale, (PropertyRNA *)&rna_PointDensity_use_falloff_curve,
	-1, "use_turbulence", 3, "Turbulence",
	"Add directed noise to the density at render-time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_use_turbulence_get, PointDensity_use_turbulence_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_PointDensity_turbulence_scale = {
	{(PropertyRNA *)&rna_PointDensity_turbulence_strength, (PropertyRNA *)&rna_PointDensity_use_turbulence,
	-1, "turbulence_scale", 8195, "Size",
	"Scale of the added turbulent noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(PointDensity, noise_size), 4, NULL},
	PointDensity_turbulence_scale_get, PointDensity_turbulence_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, FLT_MAX, 0.0099999998f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointDensity_turbulence_strength = {
	{(PropertyRNA *)&rna_PointDensity_turbulence_depth, (PropertyRNA *)&rna_PointDensity_turbulence_scale,
	-1, "turbulence_strength", 8195, "Turbulence Strength",
	"Strength of the added turbulent noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(PointDensity, noise_fac), 4, NULL},
	PointDensity_turbulence_strength_get, PointDensity_turbulence_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, FLT_MAX, 0.0099999998f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_PointDensity_turbulence_depth = {
	{(PropertyRNA *)&rna_PointDensity_turbulence_influence, (PropertyRNA *)&rna_PointDensity_turbulence_strength,
	-1, "turbulence_depth", 8195, "Depth",
	"Level of detail in the added turbulent noise",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(PointDensity, noise_depth), 1, NULL},
	PointDensity_turbulence_depth_get, PointDensity_turbulence_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

static EnumPropertyItem rna_PointDensity_turbulence_influence_items[5] = {
	{0, "STATIC", 0, "Static", "Noise patterns will remain unchanged, faster and suitable for stills"},
	{1, "PARTICLE_VELOCITY", 0, "Particle Velocity", "Turbulent noise driven by particle velocity"},
	{2, "PARTICLE_AGE", 0, "Particle Age", "Turbulent noise driven by the particle\'s age between birth and death"},
	{3, "GLOBAL_TIME", 0, "Global Time", "Turbulent noise driven by the global current frame"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointDensity_turbulence_influence = {
	{(PropertyRNA *)&rna_PointDensity_noise_basis, (PropertyRNA *)&rna_PointDensity_turbulence_depth,
	-1, "turbulence_influence", 3, "Turbulence Influence",
	"Method for driving added turbulent noise",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_turbulence_influence_get, PointDensity_turbulence_influence_set, NULL, NULL, NULL, NULL, rna_PointDensity_turbulence_influence_items, 4, 0
};

static EnumPropertyItem rna_PointDensity_noise_basis_items[11] = {
	{0, "BLENDER_ORIGINAL", 0, "Blender Original", "Noise algorithm - Blender original: Smooth interpolated noise"},
	{1, "ORIGINAL_PERLIN", 0, "Original Perlin", "Noise algorithm - Original Perlin: Smooth interpolated noise"},
	{2, "IMPROVED_PERLIN", 0, "Improved Perlin", "Noise algorithm - Improved Perlin: Smooth interpolated noise"},
	{3, "VORONOI_F1", 0, "Voronoi F1", "Noise algorithm - Voronoi F1: Returns distance to the closest feature point"},
	{4, "VORONOI_F2", 0, "Voronoi F2", "Noise algorithm - Voronoi F2: Returns distance to the 2nd closest feature point"},
	{5, "VORONOI_F3", 0, "Voronoi F3", "Noise algorithm - Voronoi F3: Returns distance to the 3rd closest feature point"},
	{6, "VORONOI_F4", 0, "Voronoi F4", "Noise algorithm - Voronoi F4: Returns distance to the 4th closest feature point"},
	{7, "VORONOI_F2_F1", 0, "Voronoi F2-F1", "Noise algorithm - Voronoi F1-F2"},
	{8, "VORONOI_CRACKLE", 0, "Voronoi Crackle", "Noise algorithm - Voronoi Crackle: Voronoi tessellation with sharp edges"},
	{14, "CELL_NOISE", 0, "Cell Noise", "Noise algorithm - Cell Noise: Square cell tessellation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointDensity_noise_basis = {
	{NULL, (PropertyRNA *)&rna_PointDensity_turbulence_influence,
	-1, "noise_basis", 3, "Noise Basis",
	"Noise formula used for turbulence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensity_noise_basis_get, PointDensity_noise_basis_set, NULL, NULL, NULL, NULL, rna_PointDensity_noise_basis_items, 10, 0
};

StructRNA RNA_PointDensity = {
	{(ContainerRNA *)&RNA_PointDensityTexture, (ContainerRNA *)&RNA_DistortedNoiseTexture,
	NULL,
	{(PropertyRNA *)&rna_PointDensity_rna_properties, (PropertyRNA *)&rna_PointDensity_noise_basis}},
	"PointDensity", NULL, NULL, 4, "PointDensity",
	"Point density settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PointDensity_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_PointDensity_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Point Density */
PointerPropertyRNA rna_PointDensityTexture_point_density = {
	{NULL, NULL,
	-1, "point_density", 8388608, "Point Density",
	"The point density settings associated with this texture",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	PointDensityTexture_point_density_get, NULL, NULL, NULL,&RNA_PointDensity
};

StructRNA RNA_PointDensityTexture = {
	{(ContainerRNA *)&RNA_VoxelData, (ContainerRNA *)&RNA_PointDensity,
	NULL,
	{(PropertyRNA *)&rna_PointDensityTexture_point_density, (PropertyRNA *)&rna_PointDensityTexture_point_density}},
	"PointDensityTexture", NULL, NULL, 7, "Point Density",
	"Settings for the Point Density texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* VoxelData */
CollectionPropertyRNA rna_VoxelData_rna_properties = {
	{(PropertyRNA *)&rna_VoxelData_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_rna_properties_begin, VoxelData_rna_properties_next, VoxelData_rna_properties_end, VoxelData_rna_properties_get, NULL, NULL, VoxelData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VoxelData_rna_type = {
	{(PropertyRNA *)&rna_VoxelData_interpolation, (PropertyRNA *)&rna_VoxelData_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_VoxelData_interpolation_items[6] = {
	{0, "NEREASTNEIGHBOR", 0, "Nearest Neighbor", "No interpolation, fast but blocky and low quality"},
	{1, "TRILINEAR", 0, "Linear", "Good smoothness and speed"},
	{2, "QUADRATIC", 0, "Quadratic", "Mid-range quality and speed"},
	{3, "TRICUBIC_CATROM", 0, "Cubic Catmull-Rom", "High quality interpolation, but slower"},
	{4, "TRICUBIC_BSPLINE", 0, "Cubic B-Spline", "Smoothed high quality interpolation, but slower"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VoxelData_interpolation = {
	{(PropertyRNA *)&rna_VoxelData_smoke_data_type, (PropertyRNA *)&rna_VoxelData_rna_type,
	-1, "interpolation", 3, "Interpolation",
	"Method to interpolate/smooth values between voxel cells",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_interpolation_get, VoxelData_interpolation_set, NULL, NULL, NULL, NULL, rna_VoxelData_interpolation_items, 5, 0
};

static EnumPropertyItem rna_VoxelData_smoke_data_type_items[5] = {
	{0, "SMOKEDENSITY", 0, "Smoke", "Use smoke density and color as texture data"},
	{3, "SMOKEFLAME", 0, "Flame", "Use flame temperature as texture data"},
	{1, "SMOKEHEAT", 0, "Heat", "Use smoke heat as texture data. Values from -2.0 to 2.0 are used"},
	{2, "SMOKEVEL", 0, "Velocity", "Use smoke velocity as texture data"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VoxelData_smoke_data_type = {
	{(PropertyRNA *)&rna_VoxelData_extension, (PropertyRNA *)&rna_VoxelData_interpolation,
	-1, "smoke_data_type", 3, "Source",
	"Simulation value to be used as a texture",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_smoke_data_type_get, VoxelData_smoke_data_type_set, NULL, NULL, NULL, NULL, rna_VoxelData_smoke_data_type_items, 4, 0
};

static EnumPropertyItem rna_VoxelData_extension_items[4] = {
	{1, "EXTEND", 0, "Extend", "Extend by repeating edge pixels of the image"},
	{2, "CLIP", 0, "Clip", "Clip to image size and set exterior pixels as transparent"},
	{3, "REPEAT", 0, "Repeat", "Cause the image to repeat horizontally and vertically"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VoxelData_extension = {
	{(PropertyRNA *)&rna_VoxelData_intensity, (PropertyRNA *)&rna_VoxelData_smoke_data_type,
	-1, "extension", 3, "Extension",
	"How the texture is extrapolated past its original bounds",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_extension_get, VoxelData_extension_set, NULL, NULL, NULL, NULL, rna_VoxelData_extension_items, 3, 1
};

FloatPropertyRNA rna_VoxelData_intensity = {
	{(PropertyRNA *)&rna_VoxelData_file_format, (PropertyRNA *)&rna_VoxelData_extension,
	-1, "intensity", 8195, "Intensity",
	"Multiplier for intensity values",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(VoxelData, int_multiplier), 4, NULL},
	VoxelData_intensity_get, VoxelData_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, FLT_MAX, 0.0099999998f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_VoxelData_file_format_items[5] = {
	{0, "BLENDER_VOXEL", 0, "Blender Voxel", "Default binary voxel file format"},
	{1, "RAW_8BIT", 0, "8 bit RAW", "8 bit grayscale binary data"},
	{3, "IMAGE_SEQUENCE", 0, "Image Sequence", "Generate voxels from a sequence of image slices"},
	{4, "SMOKE", 0, "Smoke", "Render voxels from a Blender smoke simulation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VoxelData_file_format = {
	{(PropertyRNA *)&rna_VoxelData_filepath, (PropertyRNA *)&rna_VoxelData_intensity,
	-1, "file_format", 3, "File Format",
	"Format of the source data set to render",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_file_format_get, VoxelData_file_format_set, NULL, NULL, NULL, NULL, rna_VoxelData_file_format_items, 4, 0
};

StringPropertyRNA rna_VoxelData_filepath = {
	{(PropertyRNA *)&rna_VoxelData_resolution, (PropertyRNA *)&rna_VoxelData_file_format,
	-1, "filepath", 262145, "Source Path",
	"The external source data file to use",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_filepath_get, VoxelData_filepath_length, VoxelData_filepath_set, NULL, NULL, NULL, 1024, ""
};

static int rna_VoxelData_resolution_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_VoxelData_resolution = {
	{(PropertyRNA *)&rna_VoxelData_use_still_frame, (PropertyRNA *)&rna_VoxelData_filepath,
	-1, "resolution", 8195, "Resolution",
	"Resolution of the voxel grid",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	offsetof(VoxelData, resol), 0, NULL},
	NULL, NULL, VoxelData_resolution_get, VoxelData_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100000, 1, 100000, 1, 0, rna_VoxelData_resolution_default
};

BoolPropertyRNA rna_VoxelData_use_still_frame = {
	{(PropertyRNA *)&rna_VoxelData_still_frame, (PropertyRNA *)&rna_VoxelData_resolution,
	-1, "use_still_frame", 3, "Still Frame Only",
	"Always render a still frame from the voxel data sequence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_use_still_frame_get, VoxelData_use_still_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_VoxelData_still_frame = {
	{(PropertyRNA *)&rna_VoxelData_domain_object, (PropertyRNA *)&rna_VoxelData_use_still_frame,
	-1, "still_frame", 8195, "Still Frame Number",
	"The frame number to always use",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	offsetof(VoxelData, still_frame), 0, NULL},
	VoxelData_still_frame_get, VoxelData_still_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_VoxelData_domain_object = {
	{NULL, (PropertyRNA *)&rna_VoxelData_still_frame,
	-1, "domain_object", 8388609, "Domain Object",
	"Object used as the smoke simulation domain",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelData_domain_object_get, VoxelData_domain_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_VoxelData = {
	{(ContainerRNA *)&RNA_VoxelDataTexture, (ContainerRNA *)&RNA_PointDensityTexture,
	NULL,
	{(PropertyRNA *)&rna_VoxelData_rna_properties, (PropertyRNA *)&rna_VoxelData_domain_object}},
	"VoxelData", NULL, NULL, 4, "VoxelData",
	"Voxel data settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_VoxelData_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_VoxelData_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Voxel Data */
PointerPropertyRNA rna_VoxelDataTexture_voxel_data = {
	{(PropertyRNA *)&rna_VoxelDataTexture_image, NULL,
	-1, "voxel_data", 8388608, "Voxel Data",
	"The voxel data associated with this texture",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelDataTexture_voxel_data_get, NULL, NULL, NULL,&RNA_VoxelData
};

PointerPropertyRNA rna_VoxelDataTexture_image = {
	{(PropertyRNA *)&rna_VoxelDataTexture_image_user, (PropertyRNA *)&rna_VoxelDataTexture_voxel_data,
	-1, "image", 8388673, "Image",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_voxeldata_image_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelDataTexture_image_get, VoxelDataTexture_image_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_VoxelDataTexture_image_user = {
	{NULL, (PropertyRNA *)&rna_VoxelDataTexture_image,
	-1, "image_user", 8388608, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_voxeldata_update, 0, NULL, NULL,
	0, -1, NULL},
	VoxelDataTexture_image_user_get, NULL, NULL, NULL,&RNA_ImageUser
};

StructRNA RNA_VoxelDataTexture = {
	{(ContainerRNA *)&RNA_OceanTexData, (ContainerRNA *)&RNA_VoxelData,
	NULL,
	{(PropertyRNA *)&rna_VoxelDataTexture_voxel_data, (PropertyRNA *)&rna_VoxelDataTexture_image_user}},
	"VoxelDataTexture", NULL, NULL, 7, "Voxel Data",
	"Settings for the Voxel Data texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Ocean */
CollectionPropertyRNA rna_OceanTexData_rna_properties = {
	{(PropertyRNA *)&rna_OceanTexData_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OceanTexData_rna_properties_begin, OceanTexData_rna_properties_next, OceanTexData_rna_properties_end, OceanTexData_rna_properties_get, NULL, NULL, OceanTexData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_OceanTexData_rna_type = {
	{(PropertyRNA *)&rna_OceanTexData_output, (PropertyRNA *)&rna_OceanTexData_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OceanTexData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_OceanTexData_output_items[6] = {
	{1, "DISPLACEMENT", 0, "Displacement", "Output XYZ displacement in RGB channels"},
	{2, "FOAM", 0, "Foam", "Output Foam (wave overlap) amount in single channel"},
	{3, "JPLUS", 0, "Eigenvalues", "Positive Eigenvalues"},
	{4, "EMINUS", 0, "Eigenvectors (-)", "Negative Eigenvectors"},
	{5, "EPLUS", 0, "Eigenvectors (+)", "Positive Eigenvectors"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_OceanTexData_output = {
	{(PropertyRNA *)&rna_OceanTexData_ocean_object, (PropertyRNA *)&rna_OceanTexData_rna_type,
	-1, "output", 1, "Output",
	"The data that is output by the texture",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanTexData_output_get, OceanTexData_output_set, NULL, NULL, NULL, NULL, rna_OceanTexData_output_items, 5, 1
};

PointerPropertyRNA rna_OceanTexData_ocean_object = {
	{NULL, (PropertyRNA *)&rna_OceanTexData_output,
	-1, "ocean_object", 8388609, "Modifier Object",
	"Object containing the ocean modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanTexData_ocean_object_get, OceanTexData_ocean_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_OceanTexData = {
	{(ContainerRNA *)&RNA_OceanTexture, (ContainerRNA *)&RNA_VoxelDataTexture,
	NULL,
	{(PropertyRNA *)&rna_OceanTexData_rna_properties, (PropertyRNA *)&rna_OceanTexData_ocean_object}},
	"OceanTexData", NULL, NULL, 4, "Ocean",
	"Ocean Texture settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_OceanTexData_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_OceanTex_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Ocean */
PointerPropertyRNA rna_OceanTexture_ocean = {
	{NULL, NULL,
	-1, "ocean", 8388608, "Ocean",
	"The ocean data associated with this texture",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	OceanTexture_ocean_get, NULL, NULL, NULL,&RNA_OceanTexData
};

StructRNA RNA_OceanTexture = {
	{(ContainerRNA *)&RNA_TextureSlot, (ContainerRNA *)&RNA_OceanTexData,
	NULL,
	{(PropertyRNA *)&rna_OceanTexture_ocean, (PropertyRNA *)&rna_OceanTexture_ocean}},
	"OceanTexture", NULL, NULL, 7, "Ocean",
	"Settings for the Ocean texture",
	"*", 166,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Texture,
	NULL,
	rna_Texture_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Texture Slot */
CollectionPropertyRNA rna_TextureSlot_rna_properties = {
	{(PropertyRNA *)&rna_TextureSlot_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_rna_properties_begin, TextureSlot_rna_properties_next, TextureSlot_rna_properties_end, TextureSlot_rna_properties_get, NULL, NULL, TextureSlot_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TextureSlot_rna_type = {
	{(PropertyRNA *)&rna_TextureSlot_texture, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_TextureSlot_texture = {
	{(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_type,
	-1, "texture", 8388673, "Texture",
	"Texture datablock used by this texture slot",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 102760448, NULL, NULL,
	0, -1, NULL},
	TextureSlot_texture_get, TextureSlot_texture_set, NULL, NULL,&RNA_Texture
};

StringPropertyRNA rna_TextureSlot_name = {
	{(PropertyRNA *)&rna_TextureSlot_offset, (PropertyRNA *)&rna_TextureSlot_texture,
	-1, "name", 262144, "Name",
	"Texture slot name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_name_get, TextureSlot_name_length, NULL, NULL, NULL, NULL, 0, ""
};

static float rna_TextureSlot_offset_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TextureSlot_offset = {
	{(PropertyRNA *)&rna_TextureSlot_scale, (PropertyRNA *)&rna_TextureSlot_name,
	-1, "offset", 8195, "Offset",
	"Fine tune of the texture mapping X, Y and Z locations",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_TextureSlot_brush_update, 0, NULL, NULL,
	offsetof(MTex, ofs), 4, NULL},
	NULL, NULL, TextureSlot_offset_get, TextureSlot_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_TextureSlot_offset_default
};

static float rna_TextureSlot_scale_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TextureSlot_scale = {
	{(PropertyRNA *)&rna_TextureSlot_color, (PropertyRNA *)&rna_TextureSlot_offset,
	-1, "scale", 67117059, "Size",
	"Set scaling for the texture\'s X, Y and Z sizes",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_TextureSlot_brush_update, 0, NULL, NULL,
	offsetof(MTex, size), 4, NULL},
	NULL, NULL, TextureSlot_scale_get, TextureSlot_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_TextureSlot_scale_default
};

static float rna_TextureSlot_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TextureSlot_color = {
	{(PropertyRNA *)&rna_TextureSlot_blend_type, (PropertyRNA *)&rna_TextureSlot_scale,
	-1, "color", 8195, "Color",
	"Default color for textures that don\'t return RGB or when RGB to intensity is enabled",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_TextureSlot_update, 0, NULL, NULL,
	offsetof(MTex, r), 4, NULL},
	NULL, NULL, TextureSlot_color_get, TextureSlot_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_TextureSlot_color_default
};

static EnumPropertyItem rna_TextureSlot_blend_type_items[17] = {
	{0, "MIX", 0, "Mix", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{1, "MULTIPLY", 0, "Multiply", ""},
	{8, "SCREEN", 0, "Screen", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DARKEN", 0, "Darken", ""},
	{7, "LIGHTEN", 0, "Lighten", ""},
	{10, "HUE", 0, "Hue", ""},
	{11, "SATURATION", 0, "Saturation", ""},
	{12, "VALUE", 0, "Value", ""},
	{13, "COLOR", 0, "Color", ""},
	{15, "SOFT_LIGHT", 0, "Soft Light", ""},
	{16, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TextureSlot_blend_type = {
	{(PropertyRNA *)&rna_TextureSlot_use_stencil, (PropertyRNA *)&rna_TextureSlot_color,
	-1, "blend_type", 3, "Blend Type",
	"Mode used to apply the texture",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_blend_type_get, TextureSlot_blend_type_set, NULL, NULL, NULL, NULL, rna_TextureSlot_blend_type_items, 16, 0
};

BoolPropertyRNA rna_TextureSlot_use_stencil = {
	{(PropertyRNA *)&rna_TextureSlot_invert, (PropertyRNA *)&rna_TextureSlot_blend_type,
	-1, "use_stencil", 3, "Stencil",
	"Use this texture as a blending value on the next texture",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_use_stencil_get, TextureSlot_use_stencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_TextureSlot_invert = {
	{(PropertyRNA *)&rna_TextureSlot_use_rgb_to_intensity, (PropertyRNA *)&rna_TextureSlot_use_stencil,
	-1, "invert", 3, "Negate",
	"Invert the values of the texture to reverse its effect",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_invert_get, TextureSlot_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_TextureSlot_use_rgb_to_intensity = {
	{(PropertyRNA *)&rna_TextureSlot_default_value, (PropertyRNA *)&rna_TextureSlot_invert,
	-1, "use_rgb_to_intensity", 3, "RGB to Intensity",
	"Convert texture RGB values to intensity (gray) values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_use_rgb_to_intensity_get, TextureSlot_use_rgb_to_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_TextureSlot_default_value = {
	{(PropertyRNA *)&rna_TextureSlot_output_node, (PropertyRNA *)&rna_TextureSlot_use_rgb_to_intensity,
	-1, "default_value", 8195, "Default Value",
	"Value to use for Ref, Spec, Amb, Emit, Alpha, RayMir, TransLu and Hard",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	offsetof(MTex, def_var), 4, NULL},
	TextureSlot_default_value_get, TextureSlot_default_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_TextureSlot_output_node_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TextureSlot_output_node = {
	{NULL, (PropertyRNA *)&rna_TextureSlot_default_value,
	-1, "output_node", 3, "Output Node",
	"Which output node to use, for node-based textures",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	0, -1, NULL},
	TextureSlot_output_node_get, TextureSlot_output_node_set, rna_TextureSlot_output_node_itemf, NULL, NULL, NULL, rna_TextureSlot_output_node_items, 1, 0
};

StructRNA RNA_TextureSlot = {
	{(ContainerRNA *)&RNA_EnvironmentMap, (ContainerRNA *)&RNA_OceanTexture,
	NULL,
	{(PropertyRNA *)&rna_TextureSlot_rna_properties, (PropertyRNA *)&rna_TextureSlot_output_node}},
	"TextureSlot", NULL, NULL, 4, "Texture Slot",
	"Texture slot defining the mapping and influence of a texture",
	"*", 166,
	(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_TextureSlot_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* EnvironmentMap */
CollectionPropertyRNA rna_EnvironmentMap_rna_properties = {
	{(PropertyRNA *)&rna_EnvironmentMap_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMap_rna_properties_begin, EnvironmentMap_rna_properties_next, EnvironmentMap_rna_properties_end, EnvironmentMap_rna_properties_get, NULL, NULL, EnvironmentMap_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_EnvironmentMap_rna_type = {
	{(PropertyRNA *)&rna_EnvironmentMap_source, (PropertyRNA *)&rna_EnvironmentMap_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_EnvironmentMap_source_items[4] = {
	{0, "STATIC", 0, "Static", "Calculate environment map only once"},
	{1, "ANIMATED", 0, "Animated", "Calculate environment map at each rendering"},
	{2, "IMAGE_FILE", 0, "Image File", "Load a saved environment map image from disk"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnvironmentMap_source = {
	{(PropertyRNA *)&rna_EnvironmentMap_viewpoint_object, (PropertyRNA *)&rna_EnvironmentMap_rna_type,
	-1, "source", 3, "Source",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Envmap_source_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMap_source_get, EnvironmentMap_source_set, NULL, NULL, NULL, NULL, rna_EnvironmentMap_source_items, 3, 0
};

PointerPropertyRNA rna_EnvironmentMap_viewpoint_object = {
	{(PropertyRNA *)&rna_EnvironmentMap_mapping, (PropertyRNA *)&rna_EnvironmentMap_source,
	-1, "viewpoint_object", 8388609, "Viewpoint Object",
	"Object to use as the environment map\'s viewpoint location",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMap_viewpoint_object_get, EnvironmentMap_viewpoint_object_set, NULL, NULL,&RNA_Object
};

static EnumPropertyItem rna_EnvironmentMap_mapping_items[3] = {
	{0, "CUBE", 0, "Cube", "Use environment map with six cube sides"},
	{1, "PLANE", 0, "Plane", "Only one side is rendered, with Z axis pointing in direction of image"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnvironmentMap_mapping = {
	{(PropertyRNA *)&rna_EnvironmentMap_clip_start, (PropertyRNA *)&rna_EnvironmentMap_viewpoint_object,
	-1, "mapping", 3, "Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMap_mapping_get, EnvironmentMap_mapping_set, NULL, NULL, NULL, NULL, rna_EnvironmentMap_mapping_items, 2, 0
};

FloatPropertyRNA rna_EnvironmentMap_clip_start = {
	{(PropertyRNA *)&rna_EnvironmentMap_clip_end, (PropertyRNA *)&rna_EnvironmentMap_mapping,
	-1, "clip_start", 8195, "Clip Start",
	"Objects nearer than this are not visible to map",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(EnvMap, clipsta), 4, NULL},
	EnvironmentMap_clip_start_get, EnvironmentMap_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 50.0f, 0.0010000000f, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_EnvironmentMap_clip_end = {
	{(PropertyRNA *)&rna_EnvironmentMap_zoom, (PropertyRNA *)&rna_EnvironmentMap_clip_start,
	-1, "clip_end", 8195, "Clip End",
	"Objects further than this are not visible to map",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(EnvMap, clipend), 4, NULL},
	EnvironmentMap_clip_end_get, EnvironmentMap_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 20000.0f, 0.0099999998f, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_EnvironmentMap_zoom = {
	{(PropertyRNA *)&rna_EnvironmentMap_layers_ignore, (PropertyRNA *)&rna_EnvironmentMap_clip_end,
	-1, "zoom", 8195, "Zoom",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(EnvMap, viewscale), 4, NULL},
	EnvironmentMap_zoom_get, EnvironmentMap_zoom_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 1.5000000000f, 0.1000000015f, 5.0f, 1.0f, 2, 0.0f, NULL
};

static int rna_EnvironmentMap_layers_ignore_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_EnvironmentMap_layers_ignore = {
	{(PropertyRNA *)&rna_EnvironmentMap_resolution, (PropertyRNA *)&rna_EnvironmentMap_zoom,
	-1, "layers_ignore", 3, "Ignore Layers",
	"Hide objects on these layers when generating the Environment Map",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_Texture_update, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, EnvironmentMap_layers_ignore_get, EnvironmentMap_layers_ignore_set, NULL, NULL, NULL, NULL, 0, rna_EnvironmentMap_layers_ignore_default
};

IntPropertyRNA rna_EnvironmentMap_resolution = {
	{(PropertyRNA *)&rna_EnvironmentMap_depth, (PropertyRNA *)&rna_EnvironmentMap_layers_ignore,
	-1, "resolution", 8195, "Resolution",
	"Pixel resolution of the rendered environment map",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(EnvMap, cuberes), 1, NULL},
	EnvironmentMap_resolution_get, EnvironmentMap_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	50, 4096, 50, 4096, 1, 0, NULL
};

IntPropertyRNA rna_EnvironmentMap_depth = {
	{(PropertyRNA *)&rna_EnvironmentMap_is_valid, (PropertyRNA *)&rna_EnvironmentMap_resolution,
	-1, "depth", 8195, "Depth",
	"Number of times a map will be rendered recursively (mirror effects)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_update, 0, NULL, NULL,
	offsetof(EnvMap, depth), 1, NULL},
	EnvironmentMap_depth_get, EnvironmentMap_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 5, 0, 5, 1, 0, NULL
};

BoolPropertyRNA rna_EnvironmentMap_is_valid = {
	{NULL, (PropertyRNA *)&rna_EnvironmentMap_depth,
	-1, "is_valid", 2, "Validity",
	"True if this map is ready for use, False if it needs rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnvironmentMap_is_valid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_EnvironmentMap_clear_func = {
	{(FunctionRNA *)&rna_EnvironmentMap_save_func, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 8, "Discard the environment map and free it from memory",
	EnvironmentMap_clear_call,
	NULL
};

StringPropertyRNA rna_EnvironmentMap_save_filepath = {
	{(PropertyRNA *)&rna_EnvironmentMap_save_scene, NULL,
	-1, "filepath", 262149, "File path",
	"Location of the output file",
	0, "*",
	PROP_STRING, PROP_FILENAME | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 1024, ""
};

PointerPropertyRNA rna_EnvironmentMap_save_scene = {
	{(PropertyRNA *)&rna_EnvironmentMap_save_layout, (PropertyRNA *)&rna_EnvironmentMap_save_filepath,
	-1, "scene", 8388608, "",
	"Overrides the scene from which image parameters are taken",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

static float rna_EnvironmentMap_save_layout_default[12] = {
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	2.0f,
	0.0f,
	0.0f,
	1.0f,
	1.0f,
	1.0f,
	2.0f,
	1.0f
};

FloatPropertyRNA rna_EnvironmentMap_save_layout = {
	{NULL, (PropertyRNA *)&rna_EnvironmentMap_save_scene,
	-1, "layout", 3, "File layout",
	"Flat array describing the X,Y position of each cube face in the output image, where 1 is the size of a face - order is [+Z -Z +Y -X -Y +X] (use -1 to skip a face)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {12, 0, 0}, 12,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 1.0f, 3, 0.0f, rna_EnvironmentMap_save_layout_default
};

FunctionRNA rna_EnvironmentMap_save_func = {
	{NULL, (FunctionRNA *)&rna_EnvironmentMap_clear_func,
	NULL,
	{(PropertyRNA *)&rna_EnvironmentMap_save_filepath, (PropertyRNA *)&rna_EnvironmentMap_save_layout}},
	"save", 24, "Save the environment map to disc using the scene render settings",
	EnvironmentMap_save_call,
	NULL
};

StructRNA RNA_EnvironmentMap = {
	{(ContainerRNA *)&RNA_TexMapping, (ContainerRNA *)&RNA_TextureSlot,
	NULL,
	{(PropertyRNA *)&rna_EnvironmentMap_rna_properties, (PropertyRNA *)&rna_EnvironmentMap_is_valid}},
	"EnvironmentMap", NULL, NULL, 4, "EnvironmentMap",
	"Environment map created by the renderer and cached for subsequent renders",
	"*", 17,
	NULL, (PropertyRNA *)&rna_EnvironmentMap_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_EnvironmentMap_clear_func, (FunctionRNA *)&rna_EnvironmentMap_save_func}
};

/* Texture Mapping */
CollectionPropertyRNA rna_TexMapping_rna_properties = {
	{(PropertyRNA *)&rna_TexMapping_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_rna_properties_begin, TexMapping_rna_properties_next, TexMapping_rna_properties_end, TexMapping_rna_properties_get, NULL, NULL, TexMapping_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TexMapping_rna_type = {
	{(PropertyRNA *)&rna_TexMapping_vector_type, (PropertyRNA *)&rna_TexMapping_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_TexMapping_vector_type_items[5] = {
	{1, "TEXTURE", 0, "Texture", "Transform a texture by inverse mapping the texture coordinate"},
	{0, "POINT", 0, "Point", "Transform a point"},
	{2, "VECTOR", 0, "Vector", "Transform a direction vector"},
	{3, "NORMAL", 0, "Normal", "Transform a normal vector with unit length"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TexMapping_vector_type = {
	{(PropertyRNA *)&rna_TexMapping_translation, (PropertyRNA *)&rna_TexMapping_rna_type,
	-1, "vector_type", 3, "Type",
	"Type of vector that the mapping transforms",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_vector_type_get, TexMapping_vector_type_set, NULL, NULL, NULL, NULL, rna_TexMapping_vector_type_items, 4, 0
};

static float rna_TexMapping_translation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TexMapping_translation = {
	{(PropertyRNA *)&rna_TexMapping_rotation, (PropertyRNA *)&rna_TexMapping_vector_type,
	-1, "translation", 8195, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Texture_mapping_update, 0, NULL, NULL,
	offsetof(TexMapping, loc), 4, NULL},
	NULL, NULL, TexMapping_translation_get, TexMapping_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_TexMapping_translation_default
};

static float rna_TexMapping_rotation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TexMapping_rotation = {
	{(PropertyRNA *)&rna_TexMapping_scale, (PropertyRNA *)&rna_TexMapping_translation,
	-1, "rotation", 8195, "Rotation",
	"",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Texture_mapping_update, 0, NULL, NULL,
	offsetof(TexMapping, rot), 4, NULL},
	NULL, NULL, TexMapping_rotation_get, TexMapping_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_TexMapping_rotation_default
};

static float rna_TexMapping_scale_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TexMapping_scale = {
	{(PropertyRNA *)&rna_TexMapping_min, (PropertyRNA *)&rna_TexMapping_rotation,
	-1, "scale", 67117059, "Scale",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Texture_mapping_update, 0, NULL, NULL,
	offsetof(TexMapping, size), 4, NULL},
	NULL, NULL, TexMapping_scale_get, TexMapping_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_TexMapping_scale_default
};

static float rna_TexMapping_min_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TexMapping_min = {
	{(PropertyRNA *)&rna_TexMapping_max, (PropertyRNA *)&rna_TexMapping_scale,
	-1, "min", 8195, "Minimum",
	"Minimum value for clipping",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Texture_mapping_update, 0, NULL, NULL,
	offsetof(TexMapping, min), 4, NULL},
	NULL, NULL, TexMapping_min_get, TexMapping_min_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_TexMapping_min_default
};

static float rna_TexMapping_max_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_TexMapping_max = {
	{(PropertyRNA *)&rna_TexMapping_use_min, (PropertyRNA *)&rna_TexMapping_min,
	-1, "max", 8195, "Maximum",
	"Maximum value for clipping",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Texture_mapping_update, 0, NULL, NULL,
	offsetof(TexMapping, max), 4, NULL},
	NULL, NULL, TexMapping_max_get, TexMapping_max_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_TexMapping_max_default
};

BoolPropertyRNA rna_TexMapping_use_min = {
	{(PropertyRNA *)&rna_TexMapping_use_max, (PropertyRNA *)&rna_TexMapping_max,
	-1, "use_min", 3, "Has Minimum",
	"Whether to use minimum clipping value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_use_min_get, TexMapping_use_min_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_TexMapping_use_max = {
	{(PropertyRNA *)&rna_TexMapping_mapping_x, (PropertyRNA *)&rna_TexMapping_use_min,
	-1, "use_max", 3, "Has Maximum",
	"Whether to use maximum clipping value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_use_max_get, TexMapping_use_max_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_TexMapping_mapping_x_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TexMapping_mapping_x = {
	{(PropertyRNA *)&rna_TexMapping_mapping_y, (PropertyRNA *)&rna_TexMapping_use_max,
	-1, "mapping_x", 3, "X Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_mapping_x_get, TexMapping_mapping_x_set, NULL, NULL, NULL, NULL, rna_TexMapping_mapping_x_items, 4, 0
};

static EnumPropertyItem rna_TexMapping_mapping_y_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TexMapping_mapping_y = {
	{(PropertyRNA *)&rna_TexMapping_mapping_z, (PropertyRNA *)&rna_TexMapping_mapping_x,
	-1, "mapping_y", 3, "Y Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_mapping_y_get, TexMapping_mapping_y_set, NULL, NULL, NULL, NULL, rna_TexMapping_mapping_y_items, 4, 0
};

static EnumPropertyItem rna_TexMapping_mapping_z_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TexMapping_mapping_z = {
	{(PropertyRNA *)&rna_TexMapping_mapping, (PropertyRNA *)&rna_TexMapping_mapping_y,
	-1, "mapping_z", 3, "Z Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_mapping_z_get, TexMapping_mapping_z_set, NULL, NULL, NULL, NULL, rna_TexMapping_mapping_z_items, 4, 0
};

static EnumPropertyItem rna_TexMapping_mapping_items[5] = {
	{0, "FLAT", 0, "Flat", "Map X and Y coordinates directly"},
	{1, "CUBE", 0, "Cube", "Map using the normal vector"},
	{2, "TUBE", 0, "Tube", "Map with Z as central axis"},
	{3, "SPHERE", 0, "Sphere", "Map with Z as central axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TexMapping_mapping = {
	{NULL, (PropertyRNA *)&rna_TexMapping_mapping_z,
	-1, "mapping", 3, "Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Texture_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	TexMapping_mapping_get, TexMapping_mapping_set, NULL, NULL, NULL, NULL, rna_TexMapping_mapping_items, 4, 0
};

StructRNA RNA_TexMapping = {
	{(ContainerRNA *)&RNA_ColorMapping, (ContainerRNA *)&RNA_EnvironmentMap,
	NULL,
	{(PropertyRNA *)&rna_TexMapping_rna_properties, (PropertyRNA *)&rna_TexMapping_mapping}},
	"TexMapping", NULL, NULL, 4, "Texture Mapping",
	"Texture coordinate mapping settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_TexMapping_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Color Mapping */
CollectionPropertyRNA rna_ColorMapping_rna_properties = {
	{(PropertyRNA *)&rna_ColorMapping_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorMapping_rna_properties_begin, ColorMapping_rna_properties_next, ColorMapping_rna_properties_end, ColorMapping_rna_properties_get, NULL, NULL, ColorMapping_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorMapping_rna_type = {
	{(PropertyRNA *)&rna_ColorMapping_use_color_ramp, (PropertyRNA *)&rna_ColorMapping_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorMapping_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_ColorMapping_use_color_ramp = {
	{(PropertyRNA *)&rna_ColorMapping_color_ramp, (PropertyRNA *)&rna_ColorMapping_rna_type,
	-1, "use_color_ramp", 3, "Use Color Ramp",
	"Toggle color ramp operations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Color_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	ColorMapping_use_color_ramp_get, ColorMapping_use_color_ramp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ColorMapping_color_ramp = {
	{(PropertyRNA *)&rna_ColorMapping_brightness, (PropertyRNA *)&rna_ColorMapping_use_color_ramp,
	-1, "color_ramp", 8388608, "Color Ramp",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Color_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	ColorMapping_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

FloatPropertyRNA rna_ColorMapping_brightness = {
	{(PropertyRNA *)&rna_ColorMapping_contrast, (PropertyRNA *)&rna_ColorMapping_color_ramp,
	-1, "brightness", 8195, "Brightness",
	"Adjust the brightness of the texture",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Color_mapping_update, 0, NULL, NULL,
	offsetof(ColorMapping, bright), 4, NULL},
	ColorMapping_brightness_get, ColorMapping_brightness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ColorMapping_contrast = {
	{(PropertyRNA *)&rna_ColorMapping_saturation, (PropertyRNA *)&rna_ColorMapping_brightness,
	-1, "contrast", 8195, "Contrast",
	"Adjust the contrast of the texture",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Color_mapping_update, 0, NULL, NULL,
	offsetof(ColorMapping, contrast), 4, NULL},
	ColorMapping_contrast_get, ColorMapping_contrast_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ColorMapping_saturation = {
	{(PropertyRNA *)&rna_ColorMapping_blend_type, (PropertyRNA *)&rna_ColorMapping_contrast,
	-1, "saturation", 8195, "Saturation",
	"Adjust the saturation of colors in the texture",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Color_mapping_update, 0, NULL, NULL,
	offsetof(ColorMapping, saturation), 4, NULL},
	ColorMapping_saturation_get, ColorMapping_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_ColorMapping_blend_type_items[17] = {
	{0, "MIX", 0, "Mix", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{1, "MULTIPLY", 0, "Multiply", ""},
	{8, "SCREEN", 0, "Screen", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DARKEN", 0, "Darken", ""},
	{7, "LIGHTEN", 0, "Lighten", ""},
	{10, "HUE", 0, "Hue", ""},
	{11, "SATURATION", 0, "Saturation", ""},
	{12, "VALUE", 0, "Value", ""},
	{13, "COLOR", 0, "Color", ""},
	{15, "SOFT_LIGHT", 0, "Soft Light", ""},
	{16, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorMapping_blend_type = {
	{(PropertyRNA *)&rna_ColorMapping_blend_color, (PropertyRNA *)&rna_ColorMapping_saturation,
	-1, "blend_type", 3, "Blend Type",
	"Mode used to mix with texture output color",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Color_mapping_update, 0, NULL, NULL,
	0, -1, NULL},
	ColorMapping_blend_type_get, ColorMapping_blend_type_set, NULL, NULL, NULL, NULL, rna_ColorMapping_blend_type_items, 16, 0
};

static float rna_ColorMapping_blend_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorMapping_blend_color = {
	{(PropertyRNA *)&rna_ColorMapping_blend_factor, (PropertyRNA *)&rna_ColorMapping_blend_type,
	-1, "blend_color", 8195, "Color",
	"Blend color to mix with texture output color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Color_mapping_update, 0, NULL, NULL,
	offsetof(ColorMapping, blend_color), 4, NULL},
	NULL, NULL, ColorMapping_blend_color_get, ColorMapping_blend_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ColorMapping_blend_color_default
};

FloatPropertyRNA rna_ColorMapping_blend_factor = {
	{NULL, (PropertyRNA *)&rna_ColorMapping_blend_color,
	-1, "blend_factor", 8195, "Blend Factor",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Color_mapping_update, 0, NULL, NULL,
	offsetof(ColorMapping, blend_factor), 4, NULL},
	ColorMapping_blend_factor_get, ColorMapping_blend_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ColorMapping = {
	{(ContainerRNA *)&RNA_Action, (ContainerRNA *)&RNA_TexMapping,
	NULL,
	{(PropertyRNA *)&rna_ColorMapping_rna_properties, (PropertyRNA *)&rna_ColorMapping_blend_factor}},
	"ColorMapping", NULL, NULL, 4, "Color Mapping",
	"Color mapping settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorMapping_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

