
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/*
*/
class OtherSliders : public Component
{
public:

    typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;

    OtherSliders(DemoPluginAudioProcessor&);
	~OtherSliders();
    void paint (Graphics&) override;
	void resized() override;

private:
    ScopedPointer<Slider> otherSlider1;
    ScopedPointer<Slider> otherSlider2;
   
    ScopedPointer<SliderAttachment> attachmentOtherSlider1;
    ScopedPointer<SliderAttachment> attachmentOtherSlider2;

    DemoPluginAudioProcessor& processor;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(OtherSliders)
};