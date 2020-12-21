(function () {
  farmOS.map.behaviors.farm_map_no = {
    attach: function (instance) {

      // Add layer.
      var opts = {
        title: 'Drone',
        url: 'https://tiles.openaerialmap.org/5e068ec505e6590005c2f718/0/5e068ec505e6590005c2f719/{z}/{x}/{y}',
        group: 'Base layers',
      };
      instance.addLayer('xyz', opts);
    },
  };
}());
