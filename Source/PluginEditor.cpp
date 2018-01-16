
#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
SliderAttachementSampleAudioProcessorEditor::SliderAttachementSampleAudioProcessorEditor (SliderAttachementSampleAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    //slider1
    addAndMakeVisible(slider1 = new Slider());
    attachmentSlider1 = new SliderAttachment(p.parameters, "YourParameterID", *slider1);
    setSize (400, 300);
}

SliderAttachementSampleAudioProcessorEditor::~SliderAttachementSampleAudioProcessorEditor()
{
}

//==============================================================================
void SliderAttachementSampleAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

}

void SliderAttachementSampleAudioProcessorEditor::resized()
{
    slider1->setBounds(100, 100, 300, 100);
}
