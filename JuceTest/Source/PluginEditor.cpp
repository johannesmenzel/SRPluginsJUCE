/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
JuceTestAudioProcessorEditor::JuceTestAudioProcessorEditor (JuceTestAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setResizable(true, true);
    setResizeLimits(640, 360, 4096, 2304);
    setSize(1024, 576);
    MakeControls();


}

JuceTestAudioProcessorEditor::~JuceTestAudioProcessorEditor()
{
}

//==============================================================================
void JuceTestAudioProcessorEditor::MakeControls()
{
    for (int i = 0; i < kNumControls; i++)
    {
        slider[i].setSliderStyle(juce::Slider::SliderStyle::RotaryVerticalDrag);
        slider[i].setRange(-60.0, 12.0, 0.1);
        slider[i].setTextBoxIsEditable(true);
        slider[i].setPopupDisplayEnabled(true, true, this, 200);
        slider[i].setTextValueSuffix(" dB");
        slider[i].setValue(0.0);
        slider[i].setSkewFactorFromMidPoint(0.0);
        addAndMakeVisible(&slider[i]);
    }
}

void JuceTestAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));


    //g.setColour (Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void JuceTestAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    // slider[EControls::cOutputGain].setBounds(getLocalBounds());
    for (int i = 0; i < kNumControls; i++)
    {
        slider[i].setBoundsRelative(float(i % kNumControls) / 16.f, float(int(i/kNumControls)) / 9.f, 1.f / 16.f, 1.f / 9.f);
        slider[i].setTextBoxStyle(Slider::TextEntryBoxPosition::TextBoxBelow, false, slider[i].getWidth() * 0.8, 12);
    }
}
