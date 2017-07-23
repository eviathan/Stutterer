/*
  ==============================================================================

    ConfigControls.cpp
    Created: 22 Jul 2017 10:24:22pm
    Author:  Brian Williams

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ConfigControls.h"

//==============================================================================
ConfigControls::ConfigControls()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(invert);
    
    setSize(600,70);    
}

ConfigControls::~ConfigControls()
{
}

void ConfigControls::paint (Graphics& g)
{
}

void ConfigControls::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    auto r = getLocalBounds();
    
    invert.setBounds(r.removeFromRight(50));
}
