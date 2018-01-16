
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class SliderAttachementSampleAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    SliderAttachementSampleAudioProcessorEditor (SliderAttachementSampleAudioProcessor&);
    ~SliderAttachementSampleAudioProcessorEditor();
  
    //==============================================================================
    typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
    void paint (Graphics&) override;
    void resized() override;

private:
    ScopedPointer<Slider> slider1;
    ScopedPointer<SliderAttachment> attachmentSlider1; 
    SliderAttachementSampleAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SliderAttachementSampleAudioProcessorEditor)
};
