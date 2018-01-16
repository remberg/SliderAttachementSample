
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "otherSliders.h"

//==============================================================================
/**
*/
class DemoPluginAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    DemoPluginAudioProcessorEditor (DemoPluginAudioProcessor&);
    ~DemoPluginAudioProcessorEditor();
  
    //==============================================================================
    typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
    void paint (Graphics&) override;
    void resized() override;

private:
    ScopedPointer<Slider> slider1;
    ScopedPointer<Slider> slider2;
    ScopedPointer<SliderAttachment> attachmentSlider1; 
    ScopedPointer<SliderAttachment> attachmentSlider2;
    
    OtherSliders otherSliders;

    DemoPluginAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DemoPluginAudioProcessorEditor)
};
