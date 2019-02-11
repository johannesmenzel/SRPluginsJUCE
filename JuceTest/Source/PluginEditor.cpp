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
	setResizeLimits(400, 300, 2000, 2000);
	setSize(1280, 800);
	cOutputGain.setSliderStyle(juce::Slider::SliderStyle::RotaryVerticalDrag);
	cOutputGain.setRange(-60.0, 12.0, 0.1);
	cOutputGain.setTextBoxStyle(Slider::TextEntryBoxPosition::TextBoxBelow, false, 100, 20);
	cOutputGain.setPopupDisplayEnabled(true, true, this, 200);
	cOutputGain.setTextValueSuffix(" dB");
	cOutputGain.setValue(0.0);
	addAndMakeVisible(&cOutputGain);
}

JuceTestAudioProcessorEditor::~JuceTestAudioProcessorEditor()
{
}

//==============================================================================
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
	cOutputGain.setBounds(getLocalBounds());
}
