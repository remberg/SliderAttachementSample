
#include "../JuceLibraryCode/JuceHeader.h"
#include "otherSliders.h"
OtherSliders::OtherSliders(DemoPluginAudioProcessor& p) : processor(p)
{
    //otherSlider1
    addAndMakeVisible(otherSlider1 = new Slider());
    otherSlider1->setSliderStyle(Slider::RotaryHorizontalVerticalDrag);
    otherSlider1->setTextBoxStyle(Slider::TextBoxBelow, false, 40, 15);
    attachmentOtherSlider1 = new SliderAttachment(p.parameters, "yourparameterID", *otherSlider1);

    //otherSlider2
    addAndMakeVisible(otherSlider2 = new Slider());
    otherSlider2->setSliderStyle(Slider::RotaryHorizontalVerticalDrag);
    otherSlider2->setTextBoxStyle(Slider::TextBoxBelow, false, 40, 15);
    attachmentOtherSlider2 = new SliderAttachment(p.parameters, "yourparameterID", *otherSlider2);
}

OtherSliders::~OtherSliders()
{

}


void OtherSliders::paint (Graphics& g)
{
    g.fillAll(Colours::black);
}

void OtherSliders::resized()
{
    //Set the sliders x,y,width,height ralative to its parent size
    otherSlider1->setBoundsRelative  (0.10, 0.0, 0.5, 1.0);
    otherSlider2->setBoundsRelative  (0.35, 0.0, 0.5, 1.0);

}

