(function ($) {
	$(document).ready(function() {
		setHeight();
		$(window).resize( function() {
			setHeight();
		});
	});
	
	function setHeight() {
		if ($(window).width() > 748) {
			var winHeight = $(window).height();
			$('#page-wrapper').height(winHeight);
			var pdfPos = $('#pdfviewer').position();
			//console.log(pdfPos.top);
			$('#pdfviewer').height(winHeight - pdfPos.top);
		}
	}
})(jQuery);

