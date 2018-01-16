
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


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
    DemoPluginAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DemoPluginAudioProcessorEditor)
};
