#pragma once
#include "rawMetadata.generated.h"


USTRUCT()
struct FCameraDevice
{
	GENERATED_BODY()

	//only UMC4 relevant
	UPROPERTY()
	FString model = "";
	//only UMC4 relevant
	UPROPERTY()
	FString umc4SerialNumber = "";
	//only UMC4 relevant
	UPROPERTY()
	FString umc4SoftwareVersion = "";
	UPROPERTY()
	FString cameraModel = "";
	UPROPERTY()
	FString cameraSerialNumber = "";
	UPROPERTY()
	FString cameraSoftwarePackageName = "";
	UPROPERTY()
	FString cameraSoftwarePackageVersion = "";
	UPROPERTY()
	FString cameraVariant = "";
};

USTRUCT()
struct FLensConverter
{
	GENERATED_BODY()

	UPROPERTY()
	double converterFocalLenMultiplier = 1.0;
	UPROPERTY()
	double converterLightLossFactor = 0.0;
	UPROPERTY()
	FString converterModel = "";
	UPROPERTY()
	int64 converterPhysicalLength = 0;
	UPROPERTY()
	FString converterSerialNumber = "";
};

USTRUCT()
struct FFilter
{
	GENERATED_BODY()

	UPROPERTY()
	double ndFilterDensity = 0.0;
};


USTRUCT()
struct FLensFocusDistanceLimitsImperial
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensFocusDistanceLimitsMetric
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensLinearIrisLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensFocalLengthLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensMotorRawEncoderFocalLengthLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensMotorRawEncoderFocusLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensMotorRawEncoderIrisLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensScaleRawEncoderFocalLengthLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensScaleRawEncoderFocusLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};

USTRUCT()
struct FLensScaleRawEncoderIrisLimits
{
	GENERATED_BODY()

	UPROPERTY()
	int64 max = 0;
	UPROPERTY()
	int64 min = 0;
};


USTRUCT()
struct FLensDevice
{
	GENERATED_BODY()

	UPROPERTY()
	float circleOfConfusion = 0.0;
	UPROPERTY()
	FLensFocusDistanceLimitsImperial lensLimitsFocusImperial;
	UPROPERTY()
	FLensFocusDistanceLimitsMetric lensLimitsFocusMetric;
	UPROPERTY()
	FLensLinearIrisLimits lensLimitsIris;
	UPROPERTY()
	FLensFocalLengthLimits lensLimitsZoom;
	UPROPERTY()
	FString lensModel = "";
	UPROPERTY()
	FLensMotorRawEncoderFocalLengthLimits lensMotorRawEncoderLimitsFL;
	UPROPERTY()
	FLensMotorRawEncoderFocusLimits lensMotorRawEncoderLimitsFocus;
	UPROPERTY()
	FLensMotorRawEncoderIrisLimits lensMotorRawEncoderLimitsIris;
	UPROPERTY()
	FLensScaleRawEncoderFocalLengthLimits lensScaleRawEncoderLimitsFL;
	UPROPERTY()
	FLensScaleRawEncoderFocusLimits lensScaleRawEncoderLimitsFocus;
	UPROPERTY()
	FLensScaleRawEncoderIrisLimits lensScaleRawEncoderLimitsIris;
	UPROPERTY()
	FString lensScaleRawEncoderSource = "";
	UPROPERTY()
	FString serialNumber = "";
	UPROPERTY()
	FString lensSqueezeFactor = "";
};

USTRUCT()
struct FLensState
{
	GENERATED_BODY()

	UPROPERTY()
	int64 lensEffectiveFocalLength = 0;
	UPROPERTY()
	int64 lensEntrancePupilOffset = 0;
	UPROPERTY()
	int64 lensFocalLength = 0;
	UPROPERTY()
	int64 lensFocusDistanceMetric = 0;
	UPROPERTY()
	int64 lensFocusDistanceImperial = 0;
	UPROPERTY()
	int64 lensIris = 0;
	UPROPERTY()
	int64 lensMotorRawEncoderValueFl = 0;
	UPROPERTY()
	int64 lensMotorRawEncoderValueFocus = 0;
	UPROPERTY()
	int64 lensMotorRawEncoderValueIris = 0;
	UPROPERTY()
	bool lensOisActive = false;
	UPROPERTY()
	int64 lensScaleRawEncoderValueFl = 0;
	UPROPERTY()
	int64 lensScaleRawEncoderValueFocus = 0;
	UPROPERTY()
	int64 lensScaleRawEncoderValueIris = 0;
};


USTRUCT()
struct FLens
{
	GENERATED_BODY()

	UPROPERTY()
	FLensDevice lensDevice;
	UPROPERTY()
	FLensState lensState;
};

USTRUCT()
struct FOptic
{
	GENERATED_BODY()

	UPROPERTY()
	FLensConverter converter;
	UPROPERTY()
	FFilter filter;
	UPROPERTY()
	FLens lens;
};

USTRUCT()
struct FOrientation
{
	GENERATED_BODY()

	UPROPERTY()
	double pan = 0.0;
	UPROPERTY()
	double roll = 0.0;
	UPROPERTY()
	double tilt = 0.0;
};

USTRUCT()
struct FPositional
{
	GENERATED_BODY()

	UPROPERTY()
	FOrientation orientation;
};

USTRUCT()
struct FWhiteBalance
{
	GENERATED_BODY()

	UPROPERTY()
	int64 colorTemperature = 0;
	UPROPERTY()
	double whiteBalanceTint = 0.0;
};

USTRUCT()
struct FProcessing
{
	GENERATED_BODY()

	UPROPERTY()
	FWhiteBalance whiteBalance;
};

USTRUCT()
struct FSlateInfo
{
	GENERATED_BODY()

	UPROPERTY()
	FString cameraIndex = "";
	UPROPERTY()
	FString clipName = "";
	UPROPERTY()
	int64 clipNumber = 0;
};

USTRUCT()
struct FClip
{
	GENERATED_BODY()

	UPROPERTY()
	FSlateInfo slateInfo;
};


USTRUCT()
struct FRecordingMedium
{
	GENERATED_BODY()

	//only UMC4 relevant
	UPROPERTY()
	int16 remainingCapacity = 0;
	UPROPERTY()
	int64 mediumCapacity = 0;

};

USTRUCT()
struct FProjectRate
{
	GENERATED_BODY()

	UPROPERTY()
	bool dropframe = false;
	UPROPERTY()
	FString timebase = "";
};

USTRUCT()
struct FRecording
{
	GENERATED_BODY()

	UPROPERTY()
	int32 acquisitionTimestamp = 0;
	UPROPERTY()
	FClip clip;
	UPROPERTY()
	FRecordingMedium medium;
	UPROPERTY()
	FProjectRate projectRate;
};

USTRUCT()
struct FSensorState
{
	GENERATED_BODY()

	UPROPERTY()
	int32 averagedFrames = 0;
	UPROPERTY()
	int64 exposureIndex = 0;
	//only UMC4 relevant
	UPROPERTY()
	double shutterAngle = 0.0;
	UPROPERTY()
	FString exposureTime = "";
	UPROPERTY()
	FString sensorSampleRate = "";
};

USTRUCT()
struct FSensor
{
	GENERATED_BODY()

	UPROPERTY()
	FSensorState sensorState;
};

USTRUCT()
struct FArriCameraStateRaw
{
	GENERATED_BODY()

	UPROPERTY()
	FString health = "";
	UPROPERTY()
	FString majorState = "";
};

USTRUCT()
struct FArriCamera
{
	GENERATED_BODY()

	UPROPERTY()
	FCameraDevice device;
	UPROPERTY()
	FOptic optic;
	UPROPERTY()
	FPositional positional;
	UPROPERTY()
	FProcessing processing;
	UPROPERTY()
	FRecording recording;
	UPROPERTY()
	FSensor sensor;
	UPROPERTY()
	FArriCameraStateRaw state;
};

USTRUCT()
struct FArriCameraRawMatadata
{
	GENERATED_BODY()

	UPROPERTY()
	FArriCamera camera;
};