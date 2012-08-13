function ARPOC() {}

ARPOC.prototype.showView = function()
{
    PhoneGap.exec(null,null,"ARPOC","showView",[]);
}

PhoneGap.addConstructor(function () {
  if (typeof window.plugins == 'undefined') window.plugins = {};
  if( typeof window.plugins.ARPOC == 'undefined' ) window.plugins.ARPOC = new ARPOC();
});