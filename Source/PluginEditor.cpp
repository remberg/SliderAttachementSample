
#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
DemoPluginAudioProcessorEditor::DemoPluginAudioProcessorEditor (DemoPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    //slider1
    addAndMakeVisible(slider1 = new Slider());
    slider1->setSliderStyle(Slider::RotaryHorizontalVerticalDrag);
    slider1->setTextBoxStyle(Slider::TextBoxBelow, false, 40, 15);
    attachmentSlider1 = new SliderAttachment(p.parameters, "YourParameterID", *slider1);
    
    //slider2
    addAndMakeVisible(slider2 = new Slider());
    slider2->setSliderStyle(Slider::RotaryHorizontalVerticalDrag);
    slider2->setTextBoxStyle(Slider::TextBoxBelow, false, 40, 15);
    attachmentSlider2 = new SliderAttachment(p.parameters, "YourParameterID", *slider2);
   
    //make the plugin Resizable
    setResizable(true, true);
    //set FixedAspectRatio (widthOverHeight)
    getConstrainer()->setFixedAspectRatio(2);
    //set the plugin resize limits
    setResizeLimits(600, 300, 900, 450);
}

DemoPluginAudioProcessorEditor::~DemoPluginAudioProcessorEditor()
{
}

//==============================================================================
void DemoPluginAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void DemoPluginAudioProcessorEditor::resized()
{
    //Set the sliders x,y,width,height ralative to its parent size
    slider1->setBoundsRelative  (0.25, 0.2, 0.2, 0.4);
    slider2->setBoundsRelative  (0.50, 0.2, 0.2, 0.4);
}
